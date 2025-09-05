BIN ?= empty

all:
	@spike \
		--isa=rv32e_zicsr_zifencei \
		-m0x30000000:0x10000000,0x0f000000:0x1000000,0xa0000000:0x20000000 \
		--pc=0x30000000 \
		-d \
		$(BIN).elf
