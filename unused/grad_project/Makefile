.PHONY: wavesim

VERSION = GP

CONSTR = $($(VERSION)_HOME)/constr


TOP_MODULE = top
TOP_MODULE_FILE = $($(VERSION)_HOME)/vfile/$(TOP_MODULE).v

VFILE += $(shell find $($(VERSION)_HOME)/vfile -type f -name "*.v")

SEARCH_PATH = $($(VERSION)_HOME)/vfile

INCLUDES = $(foreach dir, $(SEARCH_PATH), -I$(dir))

BOARDSIM_FILE = $($(VERSION)_HOME)/boardsim_file
WAVESIM_FILE = $($(VERSION)_HOME)/wavesim_file

VERILATOR_FLAGS += -MMD --build -cc -O3 --x-assign fast \
					--x-initial fast --noassert



CFLAGS += -I$($(VERSION)_HOME)/wavesim_file
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


#需要在./software/src下存在相应文件
TEST ?= empty
BIN = ./bin/$(TEST).bin

ISWAVE = 0


include $($(VERSION)_HOME)/config/config.mk

TIMING = --timescale "1ns/1ns" --no-timing


# to convert .v/.sv files into .c files
convert:
	@verilator --autoflush \
	--top-module $(TOP_MODULE) \
	-cc $(TOP_MODULE_FILE) \
	$(VFILE) \
	$(INCLUDES) \
	$(TIMING)


wavesim:
	@verilator --autoflush --trace \
		--top-module $(TOP_MODULE) \
		-cc $(TOP_MODULE_FILE) $(VFILE) $(INCLUDES) $(TIMING) \
		--exe $(SRCS) -CFLAGS $(CFLAGS)	-CFLAGS $(CFLAGS_BD) \
		-D $(LIBS) -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf
	@make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	@cp obj_dir/V$(TOP_MODULE) $(WAVESIM_FILE)/$(TOP_MODULE)_wave


#BIN传给了main函数
run:
	@$(MAKE) -C ./software all TEST=$(TEST)
	@$(WAVESIM_FILE)/$(TOP_MODULE)_wave $(BIN)


wave:
	@$(WAVESIM_FILE)/$(TOP_MODULE)_wave $(BIN)


ifeq ($(ISWAVE), 1)
	@gtkwave $(WAVESIM_FILE)/wave.vcd
endif



clean:
	rm ./obj_dir/*


