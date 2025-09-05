VERSION=V5

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
	#@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	$(MAKE) -C $($(VERSION)_HOME) wave BIN=$(IMAGE).bin
