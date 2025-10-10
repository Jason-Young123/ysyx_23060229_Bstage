#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>

char symtab[0xffff];
char strtab[0xffff];

// 结构体存储完整的函数信息
typedef struct {
    uint32_t value;
    uint32_t size;
    char name[64];  // 存储完整的函数名
} FUNC;

FUNC funcs[0xff];

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
            // 检查名称偏移是否有效
            if (st_name < strtab_size) {
                // 从strtab中提取以null结尾的字符串
                const char* name_ptr = &strtab[st_name];
                
                // 安全地复制函数名（遇到null终止符停止）
                strncpy(funcs[func_count].name, name_ptr, sizeof(funcs[func_count].name) - 1);
                funcs[func_count].name[sizeof(funcs[func_count].name) - 1] = '\0'; // 确保null终止
                
                funcs[func_count].value = st_value;
                funcs[func_count].size = st_size;
                func_count++;
                //printf("FUNC: value=0x%08x, size=0x%x, name=%s\n", st_value, st_size, name_ptr);
            }
        }
    }
    return func_count;
}



int main() {
    FILE* file = fopen("empty.elf", "rb");
    if (!file) {
        fprintf(stderr, "无法打开文件\n");
        return 1;
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
            //printf(".symtab: offset=0x%x, size=0x%x\n", shdr.sh_offset, shdr.sh_size);
        } else if (strcmp(name, ".strtab") == 0) {
            strtab_hdr = shdr;
            //printf(".strtab: offset=0x%x, size=0x%x\n", shdr.sh_offset, shdr.sh_size);
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
	
	int cnt = parse_symtab_entries(symtab_hdr.sh_size, symtab, strtab_hdr.sh_size, strtab, funcs);
	//printf("total cnt is %d\n", cnt);


    fclose(file);
    return 0;
}






