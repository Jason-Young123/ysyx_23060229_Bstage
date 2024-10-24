.section entry, "ax"
.globl _start
.type _start, @function

#_start:
#	mv s0, zero
#	la sp, _stack_pointer
#	jal _trm_init

#_start是0x80000000,_stext_rom是0x30000000
_start:
		#模拟bootloader从rom加载text段至ram
		lui a2, %hi(_etext_rom)
		addi a2, a2, %lo(_etext_rom)
		
		lui a5, %hi(_stext_rom)
		addi a5,a5,%lo(_stext_rom)
		
		lui a4, %hi(_stext_ram)
		addi a4,a4,%lo(_stext_ram)
		
		beq a2,a5,end_text_copy_loop
	text_copy_loop:
		lbu a3,0(a5)
		addi a5,a5,1
		addi a4,a4,1
		sb a3,-1(a4)
		bne a2,a5,text_copy_loop
	end_text_copy_loop:


		#模拟bootloader从rom加载rodata段至ram
		lui a2, %hi(_erodata_rom)
		addi a2,a2,%lo(_erodata_rom)
		
		lui a5, %hi(_srodata_rom)
		addi a5,a5,%lo(_srodata_rom)
		
		lui a4, %hi(_srodata_ram)
		addi a4,a4,%lo(_srodata_ram)
		
		beq a2,a5,end_rodata_copy_loop
	rodata_copy_loop:
		lbu a3,0(a5)
		addi a5,a5,1
		addi a4,a4,1
		sb a3,-1(a4)
		bne a2,a5,rodata_copy_loop
	end_rodata_copy_loop:

		#模拟bootloader从rom加载data段至ram
		lui a2, %hi(_edata_rom)
		addi a2,a2,%lo(_edata_rom)
		lui a5, %hi(_sdata_rom)
		addi a5,a5,%lo(_sdata_rom)
		lui a4, %hi(_sdata_ram)
		addi a4,a4,%lo(_sdata_ram)
		
		beq a2,a5,end_data_copy_loop
	data_copy_loop:
		lbu a3,0(a5)
		addi a5,a5,1
		addi a4,a4,1
		sb a3,-1(a4)
		bne a2,a5,data_copy_loop
	end_data_copy_loop:

		
		#设置正确的stack pointer
		mv s0,zero
		#la sp, _stack_pointer
		lui sp,%hi(_stack_pointer)
		addi sp,sp,%lo(_stack_pointer)
		
		lui a0,%hi(_trm_init)
		addi a0,a0,%lo(_trm_init)
		jalr ra,a0,0
		#booteloader加载完成,跳转至正确的ram地址继续执行程序
		#jal _trm_init


