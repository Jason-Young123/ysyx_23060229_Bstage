CROSS_COMPILE = riscv64-linux-gnu-

AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf


CFLAGS = -O2 -MMD -Wall -Werror -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector \
            -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden -fno-pic -march=rv64g -mcmodel=medany \
			-mstrict-align -march=rv32e_zicsr -mabi=ilp32e -static -fdata-sections -ffunction-sections
LDFLAGS = -z noexecstack --gc-sections -e _start -melf32lriscv

IMAGE = char-test

compile:
	$(CC) -std=gnu11 $(CFLAGS) -c -o $(IMAGE).o $(IMAGE).c

link:
	$(LD) $(LDFLAGS) -o $(IMAGE).elf $(IMAGE).o

objcopy:
	$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

clean:
	rm $(IMAGE).o $(IMAGE).d
