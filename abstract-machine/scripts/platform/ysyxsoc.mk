#获取当前路径
CURPATH = $(dir $(filter %platform/ysyxsoc.mk,$(MAKEFILE_LIST)))
ROOTPATH = $(abspath $(CURPATH)../../..)
NPC_HOME = $(ROOTPATH)/npc
#include $(ROOTPATH)/Makefile

AM_SRCS := riscv/ysyxsoc/start.S \
		   riscv/ysyxsoc/trm.c \
		   riscv/ysyxsoc/ioe/ioe.c \
           riscv/ysyxsoc/ioe/timer.c \
		   riscv/ysyxsoc/ioe/uart.c \
		   riscv/ysyxsoc/ioe/gpio.c \
           riscv/ysyxsoc/ioe/input.c \
           riscv/ysyxsoc/ioe/audio.c \
           riscv/ysyxsoc/ioe/gpu.c \
		   riscv/ysyxsoc/cte.c \
		   riscv/ysyxsoc/trap.S \
		   riscv/ysyxsoc/vme.c \
		   riscv/ysyxsoc/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections

LDFLAGS   += -T $(AM_HOME)/am/src/riscv/ysyxsoc/linker.ld
LDFLAGS   += --gc-sections

CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/riscv/ysyxsoc/include

.PHONY: $(AM_HOME)/am/src/riscv/ysyxsoc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	@echo "***** Execute target:run in $(CURPATH) *****"
	@$(MAKE) -C $(NPC_HOME) convert_SoC
	@$(MAKE) -C $(NPC_HOME) sim_SoC
	@$(MAKE) -C $(NPC_HOME) exec_SoC BIN=$(IMAGE).bin ELF=$(IMAGE).bin



#@echo $(MAKEFILE_LIST)
#@echo $(WDIR_23060229)
#@$(MAKE) -C $(WDIR_23060229) convert_SoC
#@$(MAKE) -C $(WDIR_23060229) sim_SoC
#@$(MAKE) -C $(WDIR_23060229) $(WDIR_23060229)/VysyxSoCFull $(IMAGE).bin
#@$(MAKE) -C $(NPC_HOME) wave BIN=$(IMAGE).bin
