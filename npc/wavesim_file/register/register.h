#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>
#include <stdint.h>
#include "VysyxSoCFull.h"


#define NO_REG 16


void update_reg(VysyxSoCFull* top);
void display_reg();
uint32_t str2val_reg(const char *s, bool *success);

#endif

