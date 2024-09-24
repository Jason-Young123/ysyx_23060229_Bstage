#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include <ysyxsoc.h>

#define ysyxsoc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

extern char _sdata_mrom;
extern char _edata_mrom;
extern char _sdata_sram;

extern char _heap_start;
extern char _heap_end;

Area heap = RANGE((uintptr_t)&_heap_start, (uintptr_t)&_heap_end);

int main(const char *args);

#ifndef MAINARGS
    #define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch){
    *(volatile char *)(UART_BASE + UART_TX) = ch;
}

void halt(int code){
    ysyxsoc_trap(code);
    while(1);
}

void _trm_init(){
	size_t length = (size_t)&_edata_mrom - (size_t)&_sdata_mrom;
	size_t dest = (size_t)&_sdata_sram;
	size_t src = (size_t)&_sdata_mrom;
	//之后将从_data_mrom_start开始长度为length的数据memcpy到_data_sram_start处，用于模拟bootloader
	//memcpy((void *)dest, (void *)src, length);
    size_t i;
	for(i = 0; i < length; i++){
		//*(&_sdata_sram + i) = *(&_sdata_mrom + i);
		//*(&_sdata_sram + i) = 0;
		//*((char *)(dest + i)) = length;
		*((char *)(dest + i)) = *((char *)(src + i));
	}
	
	int ret = main(mainargs);
    halt(ret);
}
