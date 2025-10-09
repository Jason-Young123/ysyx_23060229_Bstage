#include "engine.h"


uint64_t cycle_counter;
//uint64_t inst_counter;


extern bool is_simulating;
extern bool wp_triggered;
extern bool difftest_to_skip;
extern bool difftest_skipping;


int32_t top_pc;
int32_t top_inst;

extern "C" void get_current_pc(int32_t pc){
	top_pc = pc;
	return;
}


extern "C" void get_current_inst(int32_t inst){
	top_inst = inst;
}


uint32_t inst_get(uint32_t addr){
	//由于存在bootloader加载,因而前期和后期的取值区域不同
	//前期从mrom/flash取inst,后期从psram取inst
	
	int inst = 0;
	if(CHECK_MROM(addr)){
#ifdef CONFIG_MROM
		mrom_read(addr, &inst);
#endif
	}
	if(CHECK_FLASH(addr)){
#ifdef CONFIG_FLASH
		flash_read(addr - 0x30000000, &inst);
#endif
	}
	if(CHECK_SRAM(addr)){
#ifdef CONFIG_FLASH
		//注意sram没有dpic接口可供访问,即SOC提供了一个内嵌的由verilog实现的mem,从外部无法用DPI-C访问
		//可以用访问flash代替访问内嵌sram,只要知道FSBL的内存大小即可(加上该偏移量直接访问flash即可视为访问sram)
		flash_read((addr & 0x0000ffff) + 0x0000003c, &inst);//加上FSBL代码段大小
#endif
	}
	if(CHECK_PSRAM(addr)){
#ifdef CONFIG_PSRAM
		inst = psram_read(addr - 0x80000000);
#endif
	}
	if(CHECK_SDRAM(addr)){
#ifdef CONFIG_SDRAM
		inst = sdram_read_sdb(addr - 0xa0000000);
#endif
	}
	return inst;
}


void init_engine(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time){
    printf("---------------------------------init_engine---------------------------------\n");
    printf("\033[36mWelcome to NPC V5 !\n\033[0m");
	printf("Engine resetting ...\n");
	top -> clock = 0; top -> reset = 1;

    while(*sim_time <= 105){
        //printf("sim_time: %ld\n",*sim_time);
        nvboard_update();
		top -> clock = !top -> clock;
        if(*sim_time == 100)
            top -> reset = 0;
        top -> eval();
#ifdef CONFIG_WAVEREC
		m_trace -> dump(*sim_time);
#endif
        (*sim_time)++;
    }
	//update_reg(top);
    printf("-------------------------------init_engine done------------------------------\n");
}



void exec_once(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time){
    //print the previous inst having been decoded
    //printf("pc: %#8.8x  inst: %#8.8x\n", top->pc,top->inst);
	
	//if(difftest_to_skip)
	//	difftest_skipping = true;
	
	top -> clock = 1;//这里会触发hit_good/bad_trap，从而导致is_simulating = 0
    top -> eval(); 
#ifdef CONFIG_WAVEREC
	m_trace -> dump(*sim_time); 
#endif
	(*sim_time)++;

    top -> clock = 0;
    top -> eval(); 
#ifdef CONFIG_WAVEREC
	m_trace -> dump(*sim_time); 
#endif
	(*sim_time)++;
	update_reg(top);

#ifdef CONFIG_WP
	scan_watchpoints();//这里可能导致wp_triggered = 1
#endif

#ifdef CONFIG_DIFFTEST
	if(top -> one_inst_done)
		difftest_step();
#endif

	//update_devices();
}


//FILE *logFile;

//extern "C" void inst_counter_increase(){
//    inst_counter ++;
//}


void exec_one_inst(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time, bool is_print){
	//printf("Warning: Function exec_one_inst is deprecated; Any use may lead to unexpected behavior.\n");
	//logFile = fopen("log_cache", "a");
	/*while(*sim_time >= 40237 && *sim_time <= 40999){
		top -> clock = !top -> clock;
		top -> reset = 1;
		top -> eval();
		m_trace -> dump(*sim_time);
		(*sim_time) ++;
	}
	top -> reset = 0;*/
	//while(top -> one_inst_done == 0 && is_simulating){
	
	int32_t pc_tmp = top_pc;

	while(is_simulating && pc_tmp == top_pc){
#ifdef CONFIG_NVBOARD
		nvboard_update();
#endif
		top -> clock = 1;//这里会触发hit_good/bad_trap，从而导致is_simulating = 0
    	top -> eval();
#ifdef CONFIG_WAVEREC
    	m_trace -> dump(*sim_time);
#endif
    	(*sim_time)++;

    	top -> clock = 0;
    	top -> eval();
#ifdef CONFIG_STAT
		cycle_counter ++;
#endif
#ifdef CONFIG_WAVEREC
    	m_trace -> dump(*sim_time);
#endif
   		(*sim_time)++;
	}
	
	//update_reg(top);
	//int inst = inst_get(0);
	if(is_print)
    	printf("pc: %#8.8x  inst: %#8.8x\n", top_pc, top_inst);
	//print the previous inst having been decoded
    //printf("pc: %#8.8x  inst: %#8.8x\n", top->pc,top->inst);


	//while(top -> one_inst_done == 1 && is_simulating){
	/*while(is_simulating){
#ifdef CONFIG_NVBOARD
        nvboard_update();
#endif
		top -> clock = 1;//这里会触发hit_good/bad_trap，从而导致is_simulating = 0
        top -> eval();
#ifdef CONFIG_WAVEREC
        m_trace -> dump(*sim_time);
#endif
        (*sim_time)++;

        top -> clock = 0;
        top -> eval();
#ifdef CONFIG_STAT
		cycle_counter ++;
#endif
#ifdef CONFIG_WAVEREC
        m_trace -> dump(*sim_time);
#endif
        (*sim_time)++;
	}*/
	
	//fclose(logFile);
}


//只有exec_engine是向sdb提供的调用接口，exec_once并不是
void exec_engine(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time, uint32_t no_inst){
	//printf("Warning: Function exec_engine is deprecated; Any use may lead to unexpected behavior.\n");
	for(uint32_t i = 0; i < no_inst; i++){
		if(!wp_triggered && is_simulating){
			/*if(*sim_time >= 2345 && *sim_time <= 2588){
				top -> reset = 1;
			}
			else{
				top -> reset = 0;
			}*/
#ifdef CONFIG_PRINT_INST
			if(no_inst <= CONFIG_MAX_NO_INST)
				exec_one_inst(top, m_trace, sim_time, true);
			else
				exec_one_inst(top, m_trace, sim_time, false);
#else
			exec_one_inst(top, m_trace, sim_time, false);
#endif
		}
		else{
			return;
		}
	}
}




void exec_engine_wodug(VysyxSoCFull* top, VerilatedVcdC* m_trace, uint64_t* sim_time, uint32_t no_inst){
	while(is_simulating){
#ifdef CONFIG_NVBOARD
        nvboard_update();
#endif
        top -> clock = 1;//这里会触发hit_good/bad_trap，从而导致is_simulating = 0
        top -> eval();
#ifdef CONFIG_WAVEREC
        m_trace -> dump(*sim_time);
#endif
        (*sim_time)++;

        top -> clock = 0;
        top -> eval();
#ifdef CONFIG_STAT
        cycle_counter ++;
#endif
#ifdef CONFIG_WAVEREC
        m_trace -> dump(*sim_time);
#endif
        (*sim_time)++;
    }

}









uint64_t IFU_counter;//记录IFU取到指令次数
uint64_t EXU_counter;//记录EXU执行完毕次数
uint64_t LSU_counter;//记录LSU访存完毕次数
uint64_t hit_counter;//记录icache击中次数

extern "C" void hit_counter_increase(){
	hit_counter ++;
}

extern "C" void IFU_counter_increase(){
	IFU_counter ++;
}

extern "C" void EXU_counter_increase(){
	EXU_counter ++;
}

extern "C" void LSU_counter_increase(){
	LSU_counter ++;
}


uint64_t cal_inst_counter;
uint64_t ma_inst_counter;
uint64_t branch_inst_counter;
uint64_t cmp_inst_counter;
uint64_t csr_inst_counter;


extern "C" void cal_inst_counter_increase(){
	cal_inst_counter ++;
}

extern "C" void ma_inst_counter_increase(){
	ma_inst_counter ++;
}

extern "C" void branch_inst_counter_increase(){
	branch_inst_counter ++;
}

extern "C" void cmp_inst_counter_increase(){
	cmp_inst_counter ++;
}

extern "C" void csr_inst_counter_increase(){
	csr_inst_counter ++;
}



uint64_t unhit_timer;


extern "C" void unhit_timer_increase(){
	unhit_timer ++;
}



uint64_t flush_counter;

extern "C" void flush_counter_increase(){
	flush_counter ++;
}

extern "C" void hit_good_trap(){
    printf("\033[32mhit good trap! Simulation has ended.\033[0m\n");

#ifdef CONFIG_STAT
	double hit_percentage = (double)hit_counter/(double)IFU_counter;
	double miss_penalty = (double)unhit_timer/(double)(IFU_counter - hit_counter);
	double pred_percentage = 1.0 - (double)flush_counter/(double)(branch_inst_counter);
#ifdef CONFIG_CALIB_AXI4
	cycle_counter -= 44061;//考虑SDRAM初始化的延迟
#else
	cycle_counter -= 8673;
#endif
	printf("---------------------------------statistics----------------------------------\n");
	printf("total cycles = %ld, total instructions = %ld\n", cycle_counter, EXU_counter);
	printf("CPI(cycles per inst) = %.4lf\n", ((double)cycle_counter)/((double)EXU_counter));
	printf("IPC(insts per cycle) = %.4lf\n\n", ((double)EXU_counter)/((double)cycle_counter));
	printf("IFU counter = %ld\n", IFU_counter);
	printf("EXU counter = %ld\n", EXU_counter);
	printf("LSU counter = %ld\n", LSU_counter);
	printf("Calculation inst counter 	= %ld\n", cal_inst_counter);
	printf("Memory Access inst counter 	= %ld\n", ma_inst_counter);
	printf("Branch inst counter 		= %ld\n", branch_inst_counter);
	//printf("Comparison inst counter 	= %ld\n", cmp_inst_counter);
	printf("CSR inst counter 		= %ld\n\n", csr_inst_counter);
	
	printf("cache hits  = %ld\n", hit_counter);
	printf("cache hit rate = %.4lf\n", hit_percentage);
	printf("miss penalty (cycles) = %.4lf\n", miss_penalty);
	printf("AMAT (cycles) = %.4lf\n", 1.0 + (1 - hit_percentage) * miss_penalty);
	
	printf("branch pred rate = %.4lf\n", pred_percentage);
	//printf("#wrong pred = %ld\n", wrong_prediction_counter);
	//printf("#flush = %ld\n", flush_counter);
	//printf("#hit = %ld\n", hit_BTB_counter);
	//printf("#unhit = %ld\n", unhit_BTB_counter);
	printf("-----------------------------------------------------------------------------\n");
#endif

	is_simulating = false;
}


extern "C" void hit_bad_trap(){
	//extern Vysyx_23060229_top* top;
    //printf("pc: %#8.8x  inst: %#8.8x\n", top->pc,top->inst);
    //printf("pc: %#8.8x", top->pc);
	printf("\033[31mhit bad trap! Simulation has ended.\033[0m\n");
    is_simulating = false;
}

