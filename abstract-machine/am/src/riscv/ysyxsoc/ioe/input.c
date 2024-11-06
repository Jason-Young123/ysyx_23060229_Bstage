#include <am.h>
#include <riscv/riscv.h>
#include <ysyxsoc.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
    kbd -> keycode = (uint8_t)inb(KBD_BASE);
	//uint16_t scancode = inw(KBD_BASE);
    //if(scancode & KEYDOWN_MASK){
    //    kbd -> keydown = 1;
    //    kbd -> keycode = (uint8_t)scancode;
    //}
    //else{
    //    kbd -> keydown = 0;
    //    kbd -> keycode = (uint8_t)scancode;
    //}
}
