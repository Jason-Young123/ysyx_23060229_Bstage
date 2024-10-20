ENTRY(_start)
/*PHDRS { text PT_LOAD; data PT_LOAD; }*/

MEMORY {
 	/*rom : ORIGIN = 0x20000000, LENGTH = 4K*/
 	/*ram : ORIGIN = 0x0f000000, LENGTH = 8K*/
	rom : ORIGIN = 0x30000000, LENGTH = 16M
 	ram : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
	. = ORIGIN(rom);
	.text :{
		_stext = .;
		*(entry)
		*(.text*)
		. = ALIGN(4);
		_etext = . ;
	} > rom AT> rom
	
	.rodata : {
		*(.rodata*)
		*(.srodata*)
		. = ALIGN(4);
	} > rom AT> rom

	/*. = ALIGN(4);*/
	/*由于一开始没考虑srodata,因为_sdata_mrom地址会多1*/
	_sdata_rom = LOADADDR(.data);

	.data : {  
        _sdata_ram = .;
        *(.data*)
		*(.sdata*)
	  	. = ALIGN(4);
        _edata_ram = .;  
    } > ram AT > rom

	_edata_rom = _sdata_rom + SIZEOF(.data);
	
	.bss : {
    	_sbss = .;
    	*(.bss*)
    	*(.sbss*)
    	*(.scommon)
		. = ALIGN(4);
		_ebss = .;
  	} > ram AT> ram

	_heap_start = _ebss;
	
	/*. = ORIGIN(ram) + 0x1fff + 1;*/
	. = ORIGIN(ram) + 0x3fffff + 1;
	_stack_pointer = . ;
	_heap_end = . ;
}
