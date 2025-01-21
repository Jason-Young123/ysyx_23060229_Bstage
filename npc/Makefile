.PHONY: wavesim

VERSION = V0

TOP_MODULE = ysyx_23060229_top

CONSTR = $(NPC_$(VERSION)_HOME)/constr
VFILE = $(NPC_$(VERSION)_HOME)/vfile
BOARDSIM_FILE = $(NPC_$(VERSION)_HOME)/boardsim_file
WAVESIM_FILE = $(NPC_$(VERSION)_HOME)/wavesim_file

VERILATOR_CFLAGS += -MMD --build -cc -O3 --x-assign fast \
					--x-initial fast --noassert



CFLAGS += -I$(NPC_$(VERSION)_HOME)/wavesim_file
LIBS += /lib/x86_64-linux-gnu/libreadline.so\
	   /lib/x86_64-linux-gnu/libSDL2.so

SRCS += $(shell find $(WAVESIM_FILE)/memory -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/register -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/engine -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/sdb -type f -name "*.cpp")\
		$(shell find $(WAVESIM_FILE)/difftest -type f -name "*.cpp")\
		$(WAVESIM_FILE)/wavesim.cpp



BIN ?= ./bin/dummy-riscv32e-npc.bin
ISWAVE = 0


include $(NVBOARD_HOME)/scripts/nvboard.mk
include ~/Desktop/ysyx-workbench/Makefile
include $(NPC_$(VERSION)_HOME)/config/config.mk

#TIMING = --timing


# to convert .v/.sv files into .c files
convert:
	verilator -cc $(VFILE)/$(TOP_MODULE).v -I$(VFILE) $(TIMING)


constrgen:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py  $(CONSTR)/$(TOP_MODULE).nxdc  $(CONSTR)/auto_bind.cpp

constrclean:
	rm $(CONSTR)/auto_bind.cpp


boardsim:
	$(call git_commit, "boardsim in npc")
	verilator $(VERILATOR_CFLAGS) \
	--top-module $(TOP_MODULE) $(VFILE)/$(TOP_MODULE).v  $(CONSTR)/auto_bind.cpp  $(BOARDSIM_FILE)/boardsim.cpp  $(NVBOARD_HOME)/build/nvboard.a \
    -CFLAGS -MMD -CFLAGS -O3 -CFLAGS -I/usr/include/SDL2 -CFLAGS -D_REENTRANT -CFLAGS -I/home/jason/nvboard-master/usr/include -CFLAGS -DTOP_NAME="\"V$(TOP_MODULE)\"" -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf \
	--Mdir obj_dir --exe -o $(TOP_MODULE) -I$(VFILE)
	cp obj_dir/$(TOP_MODULE) $(BOARDSIM_FILE)/$(TOP_MODULE)_board

board:
	$(BOARDSIM_FILE)/$(TOP_MODULE)_board

boardclean:
	rm $(BOARDSIM_FILE)/$(TOP_MODULE)_board


wavesim:
	$(call git_commit, "wavesim in npc")
	@verilator -Wall --trace -cc $(VFILE)/$(TOP_MODULE).v --exe $(SRCS)\
		-CFLAGS $(CFLAGS)	-D $(LIBS)  -I$(VFILE) $(TIMING)
	@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	@cp obj_dir/V$(TOP_MODULE) $(WAVESIM_FILE)/$(TOP_MODULE)_wave


#BIN传给了main函数
wave:
	@$(WAVESIM_FILE)/$(TOP_MODULE)_wave $(BIN)


ifeq ($(ISWAVE), 1)
	@gtkwave $(WAVESIM_FILE)/wave.vcd
endif


waveclean:
	rm $(WAVESIM_FILE)/$(TOP_MODULE)_wave
	rm $(WAVESIM_FILE)/wave.vcd


clean:
	rm ./obj_dir/*
	make constrclean
	make boardclean
	make waveclean



