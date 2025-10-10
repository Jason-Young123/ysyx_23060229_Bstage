#include "engine.h"
#include <string.h>
#include <elf.h>


#define MAX_TABLE_SIZE 0xffff
#define MAX_FUNC_ENTRY 0xff

char symtab[MAX_TABLE_SIZE];
char strtab[MAX_TABLE_SIZE];

FUNC funcs[MAX_FUNC_ENTRY];
int NO_FENTRY;

int parse_symtab_entries(int symtab_size, char *symtab, int strtab_size, char *strtab, FUNC *funcs) {
    int func_count = 0;

    // 遍历符号表，每个条目16字节
    for (int i = 0; i < symtab_size; i += 16) {
        // 从symtab读取16字节条目
        uint8_t* entry = (uint8_t*)&symtab[i];

        // 解析各个字段（小端序）
        uint32_t st_name = *(uint32_t*)&entry[0];
        uint32_t st_value = *(uint32_t*)&entry[4];
        uint32_t st_size = *(uint32_t*)&entry[8];
        uint8_t st_info = entry[12];
        uint8_t st_other = entry[13];
        uint16_t st_shndx = *(uint16_t*)&entry[14];

        // 提取类型和绑定信息
        uint8_t st_bind = (st_info >> 4) & 0x0F;
        uint8_t st_type = st_info & 0x0F;

        // 判断是否为 FUNC 类型
        if (st_type == STT_FUNC) {  // STT_FUNC = 2
            if (st_name < strtab_size) {
                const char* name_ptr = &strtab[st_name];

                strncpy(funcs[func_count].name, name_ptr, sizeof(funcs[func_count].name) - 1);
                funcs[func_count].name[sizeof(funcs[func_count].name) - 1] = '\0'; // 确保null终止

                funcs[func_count].value = st_value;
                funcs[func_count].size = st_size;
                func_count++;
            }
        }
    }
    return func_count;
}



void init_ftrace(const char* file_path){
	FILE* file = fopen(file_path, "rb");
    if (!file) {
        fprintf(stderr, "无法打开文件\n");
        return;
    }

    Elf32_Ehdr ehdr;
    fread(&ehdr, sizeof(ehdr), 1, file);

    // 读取节头表
    fseek(file, ehdr.e_shoff + ehdr.e_shstrndx * ehdr.e_shentsize, SEEK_SET);
    Elf32_Shdr shstrtab_hdr;
    fread(&shstrtab_hdr, sizeof(shstrtab_hdr), 1, file);

    char shstrtab[0x1000];
    fseek(file, shstrtab_hdr.sh_offset, SEEK_SET);
    fread(shstrtab, shstrtab_hdr.sh_size, 1, file);

    // 查找 symtab 和 strtab
    Elf32_Shdr symtab_hdr, strtab_hdr;
    fseek(file, ehdr.e_shoff, SEEK_SET);

    for (int i = 0; i < ehdr.e_shnum; i++) {
        Elf32_Shdr shdr;
        fread(&shdr, sizeof(shdr), 1, file);
        const char* name = &shstrtab[shdr.sh_name];

        if (strcmp(name, ".symtab") == 0) {
            symtab_hdr = shdr;
        } else if (strcmp(name, ".strtab") == 0) {
            strtab_hdr = shdr;
        }
    }

    // 读取数据到全局缓冲区
    fseek(file, symtab_hdr.sh_offset, SEEK_SET);
    fread(symtab, symtab_hdr.sh_size, 1, file);

    fseek(file, strtab_hdr.sh_offset, SEEK_SET);
    fread(strtab, strtab_hdr.sh_size, 1, file);

	/* 从symtab依次读取16个字节(对应于symtab中一条entry)(直到达到symtab_hdr.sh_size),
     * 然后从上述16个字节中拆分得到Num, Value, Size, Type, Bind, Vis, Ndx, Name(strtab中偏移量)等信息,
     * 着重判断Type是否对应FUNC;如果是则将该entry的Value, Size, Name分别加入values[], sizes[], name_offset[]
     * 等三个int32_t数组中;统计完成后返回总有效entry的数量(即FUNC条目数量/values[]等数组有效长度)
     * */
    NO_FENTRY = parse_symtab_entries(symtab_hdr.sh_size, symtab, strtab_hdr.sh_size, strtab, funcs);

    fclose(file);
    return;

}



//检测pc所在区域是否为func
void check_pc(int32_t pc, bool *success, uint32_t *value, char **func_name){
	for(int i = 0; i < NO_FENTRY; ++i){
		if(pc >= funcs[i].value && pc < funcs[i].value + funcs[i].size){
			*success = true; *func_name = funcs[i].name; *value = funcs[i].value;
			return;
		}
	}
	*success = false;
	*func_name = 0;
	*value = 0;
	return;
}




