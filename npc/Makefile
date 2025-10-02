include $(YSYX_HOME)/Makefile
include $(NPC_HOME)/config/config.mk

#WDIR_23060229 = $(shell pwd)/..
WDIR_23060229 = $(YSYX_HOME)
SOC_HOME_23060229 = $(WDIR_23060229)/ysyxSoC
NPC_HOME_23060229 = $(WDIR_23060229)/npc
NVBD_HOME_23060229 = $(NVBOARD_HOME)
SIM_HOME_23060229 = $(NPC_HOME_23060229)/wavesim_file

TOP_MODULE_SOC = ysyxSoCFull
TOP_MODULE_FILE_SOC = $(SOC_HOME_23060229)/build/$(TOP_MODULE_SOC).v
VFILE_SOC = $(shell find $(SOC_HOME_23060229)/perip -type f -name "*.v") \
        $(shell find $(NPC_HOME_23060229)/build -type f -name "ysyx_23060229.v")
SEARCH_PATH_SOC = $(SOC_HOME_23060229)/perip/uart16550/rtl \
              $(SOC_HOME_23060229)/perip/spi/rtl \
			  $(NPC_HOME_23060229)/build
INCLUDES_SOC = $(foreach dir, $(SEARCH_PATH_SOC), -I$(dir))
TIMING = --timescale "1ns/1ns" --no-timing


TOP_MODULE_NONSOC = ysyxNonSoCFull
TOP_MODULE_FILE_NONSOC = $(NPC_HOME_23060229)/build/$(TOP_MODULE_NONSOC).v
VFILE_NONSOC = $(TOP_MODULE_FILE_NONSOC) \
			   $(NPC_HOME_23060229)/build/ysyx_23060229.v \
			   $(NPC_HOME_23060229)/build/ysyx_23060229_memory.v
TB_NONSOC = $(NPC_HOME_23060229)/build/$(TOP_MODULE_NONSOC)_tb.v
VVP_NONSOC = $(NPC_HOME_23060229)/$(TOP_MODULE_NONSOC)
#SEARCH_PATH_NONSOC = $(NPC_HOME_23060229)/build
#INCLUDES_NONSOC = $(foreach dir, $(SEARCH_PATH_NONSOC), -I$(dir))


TOP_MODULE_NONSOC_NL = ysyxNonSoCFull_netlist
TOP_MODULE_FILE_NONSOC_NL = $(NPC_HOME_23060229)/build/$(TOP_MODULE_NONSOC_NL).v
VFILE_NONSOC_NL = $(TOP_MODULE_FILE_NONSOC_NL) \
				  $(NPC_HOME_23060229)/build/ysyx_23060229_memory.v
TB_NONSOC_NL = $(NPC_HOME_23060229)/build/$(TOP_MODULE_NONSOC_NL)_tb.v
VVP_NONSOC_NL = $(NPC_HOME_23060229)/$(TOP_MODULE_NONSOC_NL)
#SEARCH_PATH_NONSOC_NL = ./vfile
#INCLUDES_NONSOC_NL = $(foreach dir, $(SEARCH_PATH_NONSOC_NL), -I$(dir))



CSRCS_SIM += $(shell find $(SIM_HOME_23060229)/register -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/engine -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/sdb -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/mrom -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/flash -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/psram -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/sdram -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/vga -type f -name "*.cpp")\
        $(SIM_HOME_23060229)/wavesim.cpp\
		$(NPC_HOME_23060229)/constr/auto_bind.cpp

CFLAGS_SIM += -I$(SIM_HOME_23060229)
CFLAGS_BD_SIM += -I$(NVBD_HOME_23060229)/usr/include
LIBS_SIM += /lib/x86_64-linux-gnu/libreadline.so\
       /lib/x86_64-linux-gnu/libSDL2.so\
       /lib/x86_64-linux-gnu/libSDL2_image.so\
       /lib/x86_64-linux-gnu/libSDL2_ttf.so\
	   $(NPC_HOME_23060229)/constr/nvboard.a
#$(NVBD_HOME_23060229)/build/nvboard.a

BIN ?= $(WDIR_23060229)/npc/bin/dummy-riscv32e-ysyxsoc.bin



ascertain:
	@echo $(SPLIT)
	@echo $(shell pwd)


verilog:
	@$(call git_commit, "sim RTL")
	#@$(call git_commit, "task:verilog in npc")
	@echo "======================== Execute target:verilog in $(shell pwd) ========================"
	@cp $(NPC_HOME_23060229)/vfile/ysyx*.v $(NPC_HOME_23060229)/build/



# 将SoC版本的.v源码转为.cpp文件,包括:ysyx_23060229, ysyxSoCFull, perip等
convert_SoC:
	@$(call git_commit, "task:convert in npc")
	@echo "======================== Execute target:convert_SoC in $(shell pwd) ========================"
	@verilator --autoflush \
		-Dysyx_23060229_CONFIG_FLASH \
    	--top-module $(TOP_MODULE_SOC)  \
    	-cc $(TOP_MODULE_FILE_SOC) \
    	$(VFILE_SOC) \
    	$(INCLUDES_SOC) \
    	$(TIMING) \

# 生成带SoC的仿真文件,C++的SDB实现
#$(call git_commit, "wavesim in npc")
sim_SoC:
	@echo "======================== Execute target:sim_SoC in $(shell pwd) ========================"
	@verilator --autoflush --trace \
		-Dysyx_23060229_CONFIG_FLASH \
        --top-module $(TOP_MODULE_SOC) \
        -cc $(TOP_MODULE_FILE_SOC) $(VFILE_SOC) $(INCLUDES_SOC) $(TIMING) \
        --exe $(CSRCS_SIM) -CFLAGS $(CFLAGS_SIM) -CFLAGS $(CFLAGS_BD_SIM)\
		-CFLAGS "-fpch-preprocess" \
        -D $(LIBS_SIM) -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf
	@+$(MAKE) -s -C obj_dir -f V$(TOP_MODULE_SOC).mk V$(TOP_MODULE_SOC)
	@cp obj_dir/V$(TOP_MODULE_SOC) $(NPC_HOME_23060229)

exec_SoC:
	@echo "======================== Execute target:exec_SoC in $(shell pwd) ========================"
	@$(NPC_HOME_23060229)/V$(TOP_MODULE_SOC) $(BIN)






convert_format:
	@echo "======================== Execute target:convert_format in $(shell pwd) ========================"
	@objcopy -I binary $(IMG).bin -O verilog $(IMG).hex

# 将nonSoC版本的.v源码转为可执行文件,包括:ysyx_23060229, ysyx_23060229_memory, ysyxNonSoCFull
convert_nonSoC:
	@echo "======================== Execute target:convert_nonSoC in $(shell pwd) ========================"
	@iverilog -o $(VVP_NONSOC) -P$(TOP_MODULE_NONSOC)_tb.HEX_FILE='"$(IMG).hex"' \
		$(TB_NONSOC) $(VFILE_NONSOC) 

exec_nonSoC:
	@echo "======================== Execute target:exec_nonSoC in $(shell pwd) ========================"
	@vvp -n $(VVP_NONSOC) -lxt2

# 启动iverilog仿真,传参为IMG(.bin格式),支持绝对路径或相对路径/文件名(但文件必须位于npc目录下)
sim-iverilog:
	@echo "======================== Execute target:sim-iverilog in $(shell pwd) ========================"
	@$(call git_commit, "sim RTL")
	#@$(call git_commit, "task:sim-iverilog in npc")
	@$(MAKE) convert_format IMG=$(basename $(IMG))
	@$(MAKE) convert_nonSoC IMG=$(basename $(IMG))
	@$(MAKE) exec_nonSoC






convert_nonSoC_netlist:
	@echo "======================== Execute target:convert_nonSoC_netlist in $(shell pwd) ========================"
	@iverilog -g2012 -o $(VVP_NONSOC_NL) -P$(TOP_MODULE_NONSOC_NL)_tb.HEX_FILE='"$(IMG).hex"' \
		$(TB_NONSOC_NL) $(VFILE_NONSOC_NL) $(basename $(NETLIST)).v $(basename $(CELLS)).v

exec_nonSoC_netlist:
	@echo "======================== Execute target:exec_nonSoC_netlist in $(shell pwd) ========================"
	@vvp -n $(VVP_NONSOC_NL) -lxt2

#启动iverilog网表仿真,传参为IMG(.bin), NETLIST(.v), CELLS(.v),支持绝对路径或相对路径/文件名(但文件必须位于npc目录下)
sim-iverilog-netlist:
	@echo "======================== Execute target:sim-iverilog-netlist in $(shell pwd) ========================"
	@$(call git_commit, "sim RTL")
	#@$(call git_commit, "task:sim-iverilog-netlist in npc")
	@$(MAKE) convert_format IMG=$(basename $(IMG))
	@$(MAKE) convert_nonSoC_netlist IMG=$(basename $(IMG)) NETLIST=$(NETLIST) CELLS=$(CELLS)
	@$(MAKE) exec_nonSoC_netlist





convert_foo:
	@iverilog -o foo ./vfile/foo_tb.v ./vfile/foo.v ./vfile/cells.v
exec_foo:
	@vvp -n foo -lxt2


#convert_nonSoC_netlist:
#	@iverilog -o ysyxNonSoCFull_netlist ./vfile/ysyxNonSoCFull_netlist_tb.v ./vfile/ysyxNonSoCFull_netlist.v \
#		./vfile/ysyx_23060229_netlist.v ./vfile/ysyx_23060229_memory.v ./vfile/cells.v \
#		-PysyxNonSoCFull_netlist_tb.HEX_FILE='"$(IMG).hex"'

#exec_nonSoC_netlist:
#	@vvp -n ysyxNonSoCFull_netlist -lxt2




#BIN_FILE := $(if $(wildcard ../$(IMG).bin),../$(IMG).bin,$(if $(wildcard ./$(IMG).bin),./$(IMG).bin,))





clean:
	@rm -f $(NPC_HOME_23060229)/obj_dir/*
	@rm -f $(NPC_HOME_23060229)/VysyxSoCFull
	@rm -f $(NPC_HOME_23060229)/ysyxNonSoCFull




.PHONY: .git_commit .clean_index _default
