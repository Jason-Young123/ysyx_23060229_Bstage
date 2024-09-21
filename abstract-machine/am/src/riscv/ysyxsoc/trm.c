#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include <ysyxsoc.h>

#define ysyxsoc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))


extern char _heap_start;
extern char _heap_end;
//extern char _stack_start;
//extern char _stack_end;

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
    int ret = main(mainargs);
    halt(ret);
}
