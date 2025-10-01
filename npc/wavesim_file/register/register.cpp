#include "register.h"



const char *regname[32] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};



static uint32_t registers[32] = {0};
static uint32_t regpc;


void update_reg(VysyxSoCFull* top){
	printf("Warning: Function update_reg is deprecated; Any use may lead to unexpected behavior.");
	for(int i = 0; i < NO_REG; i++)
		//registers[i] = top -> regs[i];
		registers[i] = 0;
	//regpc = top -> pc;
	regpc = 0;
}



void display_reg() {
    for(int i = 0; i < NO_REG; ++i){
        printf("%3s : 0x%8.8x\n", regname[i], registers[i]);
    }
    printf("%3s : 0x%8.8x\n", "pc", regpc);
}



uint32_t str2val_reg(const char *s, bool *success) {
  for (int i = 0; i < NO_REG; ++i){
    if (strcmp(regname[i], s) == 0){
        *success = true;
        return registers[i];
    }
  }

  if (strcmp("pc",s) == 0){
    *success = true;
    return regpc;
  }

  *success = false;
  return 0;
}




