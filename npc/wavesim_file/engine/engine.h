#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <stdint.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VysyxSoCFull.h"
#include <mrom/mrom.h>
#include <flash/flash.h>
#include <psram/psram.h>
#include <sdram/sdram.h>
#include <register/register.h>
#include <sdb/sdb.h>
//sdb.h和engine.h陷入循环调用
//sdb.c需要调用engine.c中定义的exec_once，而engine.c需要调用watchpoint.c中定义的与监视点相关的函数
//#include <difftest/difftest.h>
#include <include/auto.h>
#include <include/general.h>
#include <nvboard.h>


void init_engine(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time);
void exec_once(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time);
void exec_engine(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time, uint32_t no_inst);
void exec_engine_wodug(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time, uint32_t no_inst);


extern "C" void get_current_pc_inst(int32_t pc, int32_t inst);
extern "C" void one_inst_done(void);

extern "C" void itrace_record(int32_t pc, int32_t inst);
extern "C" void mtrace_record(int32_t pc, int32_t addr);


#endif
