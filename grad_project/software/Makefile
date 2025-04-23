WDIR = .
DSTDIR = $(WDIR)/build
$(shell mkdir -p $(DSTDIR))
BINDIR = $(WDIR)/../bin


KDIR = $(WDIR)/klib/src
AUXDIR = $(WDIR)/libgcc
ARCHIVE = $(DSTDIR)/mylib.a

#运行时环境
SRCS += $(wildcard *.c *.S) \
		$(wildcard $(KDIR)/*.c) \
		$(wildcard $(AUXDIR)/*.c $(AUXDIR)/*.S)
OBJS = $(patsubst %.S,%.o,$(patsubst %.c,%.o,$(addprefix $(DSTDIR)/,$(SRCS))))

#测试用例
TEST ?= empty
TARGET = $(WDIR)/src/scalar/$(TEST)
CSRC = $(TARGET).c
COBJ = $(patsubst $(WDIR)/%,$(DSTDIR)/%,$(CSRC:.c=.o))
IMAGE = $(basename $(notdir $(TARGET)))

#ARCH = rv32e_zve32x_zicsr
ARCH = rv32e_zicsr_zifencei
CROSS_COMPILER = riscv32-unknown-elf-
CC = $(CROSS_COMPILER)gcc
AS = $(CROSS_COMPILER)gcc
LD = $(CROSS_COMPILER)ld
AR = $(CROSS_COMPILER)ar
OBJCOPY = $(CROSS_COMPILER)objcopy
OBJDUMP = $(CROSS_COMPILER)objdump



INCLUDES += $(WDIR)/includes/ \
			$(WDIR)/klib/include/
CINCLUDES += $(WDIR)/src/scalar/include/

CFLAGS += 	-O2 -MMD -Wall -Werror $(foreach dir,$(INCLUDES),-I$(dir)) \
			-fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector -Wno-main \
			-U_FORTIFY_SOURCE -fvisibility=hidden -fno-pic \
			-march=$(ARCH) -mcmodel=medany -mstrict-align -mabi=ilp32e \
			-static -fdata-sections -ffunction-sections -DMAINARGS=\"\"

ASFLAGS +=	-O0 -MMD -Wall -Werror $(foreach dir,$(INCLUDES),-I$(dir)) \
			-fno-pic -march=$(ARCH) -mcmodel=medany -mstrict-align -mabi=ilp32e

LDFLAGS += -z noexecstack -melf32lriscv -T $(WDIR)/linker.ld --gc-sections



#all: $(IMAGE).bin

$(DSTDIR)/%.o: %.c
	@echo "+CC $^ ..."
	@mkdir -p $(dir $@)
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)
	
$(DSTDIR)/%.o: %.S
	@echo "+AS $^ ..."
	@$(AS) $(ASFLAGS) -c -o $@ $(realpath $<)

$(ARCHIVE): $(OBJS)
	@echo "+AR $@ ..."
	@$(AR) rcs $(ARCHIVE) $(OBJS)

#针对特定目标编译
$(COBJ): $(CSRC)
	@echo "+CC $^ ..."
	@mkdir -p $(dir $@)
	@$(CC) -std=gnu11 $(CFLAGS) -I$(CINCLUDES) -c -o $@ $(realpath $<)


$(IMAGE).elf: $(COBJ) $(ARCHIVE)
	@echo "+LD $^ ..."
	@$(LD) $(LDFLAGS) -o $(IMAGE).elf --start-group $(COBJ) $(ARCHIVE) --end-group


$(IMAGE).bin: $(IMAGE).elf
	@echo "Generating Binary ..."
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@$(OBJCOPY) -S --set-section-flags .bss=alloc -O binary $(IMAGE).elf $(IMAGE).bin
	


all: $(IMAGE).bin $(IMAGE).elf $(IMAGE).txt
	@mv $^ $(BINDIR)/
	@echo "Completed Successfully."


clean:
	rm -rf $(DSTDIR)








