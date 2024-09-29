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

void init_uart(){
	*(volatile char *)(UART_BASE + UART_LCR) = (char)0x83;//1000_0011
	//*(volatile short *)(UART_BASE + UART_DLB1) = 0x0200;
	//*(volatile char *)(UART_BASE + UART_DLB1) = (char)'A';//0000_0000
	*(volatile char *)(UART_BASE + UART_DLB2) = (char)0x02;//0000_0100
	*(volatile char *)(UART_BASE + UART_DLB1) = (char)0xff;//0000_0000
	//设置为16'b0000_0100_0000_0000,即1024
	*(volatile char *)(UART_BASE + UART_LCR) = (char)0x03;//0000_0011,恢复默认值
}

void halt(int code){
    ysyxsoc_trap(code);
    while(1);
}

void _trm_init(){
	
	//从mrom向sram拷贝数据,模拟bootloader
	size_t length = (size_t)&_edata_mrom - (size_t)&_sdata_mrom;
	size_t dest = (size_t)&_sdata_sram;
	size_t src = (size_t)&_sdata_mrom;
    size_t i;
	for(i = 0; i < length; i++){
		*((char *)(dest + i)) = *((char *)(src + i));
	}
	
	//初始化串口
	//init_uart();

	int ret = main(mainargs);
    halt(ret);
}
