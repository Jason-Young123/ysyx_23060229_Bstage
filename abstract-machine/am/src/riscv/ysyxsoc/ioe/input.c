#include <am.h>
#include <riscv/riscv.h>
#include <ysyxsoc.h>
//#include <klib.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint32_t scancode = inl(KBD_BASE);
    kbd -> keycode = (uint8_t)inb(KBD_BASE);
	kbd -> keydown = (bool)(scancode >> 8);
	//if(scancode != 0)
	//	printf("the scan code is %x\n", scancode);
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
