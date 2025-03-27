.PHONY: wavesim

VERSION = GP

CONSTR = $(NPC_$(VERSION)_HOME)/constr


TOP_MODULE = top
TOP_MODULE_FILE = $(NPC_$(VERSION)_HOME)/vfile/top.v

VFILE += $(shell find $(NPC_$(VERSION)_HOME)/vfile -type f -name "*.v")

SEARCH_PATH = $(NPC_$(VERSION)_HOME)/vfile

INCLUDES = $(foreach dir, $(SEARCH_PATH), -I$(dir))

BOARDSIM_FILE = $(NPC_$(VERSION)_HOME)/boardsim_file
WAVESIM_FILE = $(NPC_$(VERSION)_HOME)/wavesim_file

VERILATOR_FLAGS += -MMD --build -cc -O3 --x-assign fast \
					--x-initial fast --noassert



CFLAGS += -I$(NPC_$(VERSION)_HOME)/wavesim_file
CFLAGS_BD += -I$(NVBOARD_HOME)/usr/include
LIBS += /lib/x86_64-linux-gnu/libreadline.so\
	   /lib/x86_64-linux-gnu/libSDL2.so\
	   /lib/x86_64-linux-gnu/libSDL2_image.so\
	   /lib/x86_64-linux-gnu/libSDL2_ttf.so\
	   $(NVBOARD_HOME)/build/nvboard.a

SRCS += $(shell find $(WAVESIM_FILE)/register -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/engine -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/sdb -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/memory -type f -name "*.cpp")\
		$(WAVESIM_FILE)/wavesim.cpp
		#$(CONSTR)/auto_bind.cpp
		#$(BOARDSIM_FILE)/boardsim.cpp
		#$(WAVESIM_FILE)/wavesim.cpp\
		#$(NVBOARD_HOME)/build/nvboard.a

BIN ?= ./bin/dummy-riscv32e-ysyxsoc.bin
ISWAVE = 0


include $(NVBOARD_HOME)/scripts/nvboard.mk
include ~/Desktop/ysyx-workbench/Makefile
include $(NPC_$(VERSION)_HOME)/config/config.mk

TIMING = --timescale "1ns/1ns" --no-timing


# to convert .v/.sv files into .c files
convert:
	@verilator --autoflush \
	--top-module $(TOP_MODULE) \
	-cc $(TOP_MODULE_FILE) \
	$(VFILE) \
	$(INCLUDES) \
	$(TIMING)


constrgen:
	@python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py  $(CONSTR)/$(TOP_MODULE).nxdc  $(CONSTR)/auto_bind.cpp

constrclean:
	rm $(CONSTR)/auto_bind.cpp


#boardsim:
#	$(call git_commit, "boardsim in npc")
#	verilator $(VERILATOR_CFLAGS) \
#	-CFLAGS -MMD -CFLAGS -O3 -CFLAGS -I/usr/include/SDL2 -CFLAGS -D_REENTRANT -CFLAGS  -CFLAGS -DTOP_NAME="\"V$(TOP_MODULE)\"" -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf \
#	--Mdir obj_dir --exe -o $(TOP_MODULE) -I$(VFILE)
#	cp obj_dir/$(TOP_MODULE) $(BOARDSIM_FILE)/$(TOP_MODULE)_board

boardsim:
	$(call git_commit, "boardsim in npc")
	@verilator --autoflush --trace \
		--top-module $(TOP_MODULE) \
		-cc $(TOP_MODULE_FILE) $(VFILE) $(INCLUDES) $(TIMING) \
		--exe $(SRCS) -CFLAGS $(CFLAGS) -CFLAGS $(CFLAGS_BD) \
		-D $(LIBS) -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf
	@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	@cp obj_dir/V$(TOP_MODULE) $(BOARDSIM_FILE)/$(TOP_MODULE)_board

board:
	$(BOARDSIM_FILE)/$(TOP_MODULE)_board

boardclean:
	rm $(BOARDSIM_FILE)/$(TOP_MODULE)_board


wavesim:
	$(call git_commit, "wavesim in npc")
	@verilator --autoflush --trace \
		--top-module $(TOP_MODULE) \
		-cc $(TOP_MODULE_FILE) $(VFILE) $(INCLUDES) $(TIMING) \
		--exe $(SRCS) -CFLAGS $(CFLAGS)	-CFLAGS $(CFLAGS_BD) \
		-D $(LIBS) -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf
	@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	@cp obj_dir/V$(TOP_MODULE) $(WAVESIM_FILE)/$(TOP_MODULE)_wave


#BIN传给了main函数
wave:
	@$(WAVESIM_FILE)/$(TOP_MODULE)_wave $(BIN)


ifeq ($(ISWAVE), 1)
	@gtkwave $(WAVESIM_FILE)/wave.vcd
endif


perf:
	@echo "Using microbench to evaluate performance ..."
	@make -C $(KERNEL_HOME)/benchmarks/microbench ARCH=riscv32e-ysyxsoc mainargs=test run
	@make -C $(YOSYS_HOME) sta
	@tail -n 108 $(YOSYS_HOME)/result/ysyx_23060229-500MHz/synth_stat.txt

waveclean:
	rm $(WAVESIM_FILE)/$(TOP_MODULE)_wave
	rm $(WAVESIM_FILE)/wave.vcd


clean:
	rm ./obj_dir/*
	make constrclean
	make boardclean
	make waveclean



