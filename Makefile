STUID = ysyx_23060229
STUNAME = 杨佳鑫

# DO NOT modify the following code!!!

TRACER = tracer-ysyx
GITFLAGS = -q --author='$(TRACER) <tracer@ysyx.org>' --no-verify --allow-empty

YSYX_HOME = $(NEMU_HOME)/..
WORK_BRANCH = $(shell git rev-parse --abbrev-ref HEAD)
WORK_INDEX = $(YSYX_HOME)/.git/index.$(WORK_BRANCH)
TRACER_BRANCH = $(TRACER)

LOCK_DIR = $(YSYX_HOME)/.git/

# prototype: git_soft_checkout(branch)
define git_soft_checkout
	git checkout --detach -q && git reset --soft $(1) -q -- && git checkout $(1) -q --
endef

# prototype: git_commit(msg)
define git_commit
	-@flock $(LOCK_DIR) $(MAKE) -C $(YSYX_HOME) .git_commit MSG='$(1)'
	-@sync $(LOCK_DIR)
endef

.git_commit:
	-@while (test -e .git/index.lock); do sleep 0.1; done;               `# wait for other git instances`
	-@git branch $(TRACER_BRANCH) -q 2>/dev/null || true                 `# create tracer branch if not existent`
	-@cp -a .git/index $(WORK_INDEX)                                     `# backup git index`
	-@$(call git_soft_checkout, $(TRACER_BRANCH))                        `# switch to tracer branch`
	-@git add . -A --ignore-errors                                       `# add files to commit`
	-@(echo "> $(MSG)" && echo $(STUID) $(STUNAME) && uname -a && uptime `# generate commit msg`) \
	                | git commit -F - $(GITFLAGS)                        `# commit changes in tracer branch`
	-@$(call git_soft_checkout, $(WORK_BRANCH))                          `# switch to work branch`
	-@mv $(WORK_INDEX) .git/index                                        `# restore git index`

.clean_index:
	rm -f $(WORK_INDEX)

_default:
	@echo "Please run 'make' under subprojects."




# newly added
# basic directory
WDIR_23060229 = $(shell pwd)
SOC_HOME_23060229 = $(WDIR_23060229)/ysyxSoC
NPC_HOME_23060229 = $(WDIR_23060229)/npc
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
VFILE_NONSOC = $(TOP_MODULE_FILE_NONSOC)
TB_NONSOC = $(NPC_HOME_23060229)/build/$(TOP_MODULE_NONSOC)_tb.v
VVP_NONSOC = $(NPC_HOME_23060229)/$(TOP_MODULE_NONSOC)
SEARCH_PATH_NONSOC = $(NPC_HOME_23060229)/build
INCLUDES_NONSOC = $(foreach dir, $(SEARCH_PATH_NONSOC), -I$(dir))



CSRCS_SIM += $(shell find $(SIM_HOME_23060229)/register -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/engine -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/sdb -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/mrom -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/flash -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/psram -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/sdram -type f -name "*.cpp")\
        $(shell find $(SIM_HOME_23060229)/vga -type f -name "*.cpp")\
        $(NPC_HOME_23060229)/constr/auto_bind.cpp\
        $(SIM_HOME_23060229)/wavesim.cpp
CFLAGS_SIM += -I$(SIM_HOME_23060229)
CFLAGS_BD_SIM += -I$(NVBOARD_HOME)/usr/include
LIBS_SIM += /lib/x86_64-linux-gnu/libreadline.so\
       /lib/x86_64-linux-gnu/libSDL2.so\
       /lib/x86_64-linux-gnu/libSDL2_image.so\
       /lib/x86_64-linux-gnu/libSDL2_ttf.so\
       $(NVBOARD_HOME)/build/nvboard.a

BIN ?= $(WDIR_23060229)/npc/bin/dummy-riscv32e-ysyxsoc.bin


verilog:
	@echo "***** Execute target:verilog in $(shell pwd) *****"
	@cp $(NPC_HOME_23060229)/vfile/ysyx*.v $(NPC_HOME_23060229)/build/

# 将SoC版本的.v源码转为.cpp文件,包括:ysyx_23060229, ysyxSoCFull, perip等
convert_SoC:
	@echo "***** Execute target:convert_SoC in $(shell pwd) *****"
	@verilator --autoflush \
    --top-module $(TOP_MODULE_SOC)  \
    -cc $(TOP_MODULE_FILE_SOC) \
    $(VFILE_SOC) \
    $(INCLUDES_SOC) \
    $(TIMING)

# 生成带SoC的仿真文件,C++的SDB实现
#$(call git_commit, "wavesim in npc")
sim_SoC:
	@echo "***** Execute target:sim_SoC in $(shell pwd) *****"
	@verilator --autoflush --trace \
        --top-module $(TOP_MODULE_SOC) \
        -cc $(TOP_MODULE_FILE_SOC) $(VFILE_SOC) $(INCLUDES_SOC) $(TIMING) \
        --exe $(CSRCS_SIM) -CFLAGS $(CFLAGS_SIM) -CFLAGS $(CFLAGS_BD_SIM) \
        -D $(LIBS_SIM) -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image -LDFLAGS -lSDL2_ttf
	@make -s -C obj_dir -f V$(TOP_MODULE_SOC).mk V$(TOP_MODULE_SOC)
	@cp obj_dir/V$(TOP_MODULE_SOC) $(WDIR_23060229)

exec_SoC:
	@echo "***** Execute target:exec_SoC in $(shell pwd) *****"
	@$(WDIR_23060229)/V$(TOP_MODULE_SOC) $(BIN)


# 将nonSoC版本的.v源码转为可执行文件,包括:ysyx_23060229, ysyx_23060229_memory, ysyxNonSoCFull
convert_nonSoC:
	@echo "***** Execute target:convert_nonSoC in $(shell pwd) *****"
	@iverilog -o $(VVP_NONSOC) -P$(TOP_MODULE_NONSOC)_tb.HEX_FILE='"$(IMG).hex"' \
		$(TB_NONSOC) $(VFILE_NONSOC) $(INCLUDES_NONSOC)

exec_nonSoC:
	@echo "***** Execute target:exec_nonSoC in $(shell pwd) *****"
	@vvp -n $(VVP_NONSOC) -lxt2


BIN_FILE := $(if $(wildcard ../$(IMG).bin),../$(IMG).bin,$(if $(wildcard ./$(IMG).bin),./$(IMG).bin,))
convert_format:
	objcopy -I binary $(BIN_FILE) -O verilog $(IMG).hex



# 启动iverilog仿真,传参为IMG(.bin格式)
sim-iverilog:
	@echo "***** Execute target:sim-iverilog in $(shell pwd) *****"
	@$(MAKE) convert_format IMG=$(IMG)
	@$(MAKE) convert_nonSoC IMG=$(IMG)
	@$(MAKE) exec_nonSoC




.PHONY: .git_commit .clean_index _default
