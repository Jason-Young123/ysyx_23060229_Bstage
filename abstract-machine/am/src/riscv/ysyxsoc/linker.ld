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
	/*有关text的分配*/
	_stext_rom = LOADADDR(.text);
	.text :{
		_stext_ram = .;
		*(entry)
		*(.text*)
		. = ALIGN(4);
		_etext_ram = . ;
	} > ram AT > rom
	_etext_rom = _stext_rom + SIZEOF(.text);

	/*有关rodata的分配*/
	_srodata_rom = LOADADDR(.rodata);
	.rodata : {
		_srodata_ram = .;
		*(.rodata*)
		*(.srodata*)
		. = ALIGN(4);
		_erodata_ram = .;
	} > ram AT > rom
	_erodata_rom = _srodata_rom + SIZEOF(.rodata);


	/*有关data的分配*/
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
    	_sbss_ram = .;
    	*(.bss*)
    	*(.sbss*)
    	*(.scommon)
		. = ALIGN(4);
		_ebss_ram = .;
  	}
	
	_heap_start = _ebss_ram;
	/*. = ORIGIN(ram) + 0x1fff + 1;*/
	. = ORIGIN(ram) + 0x3fffff + 1;
	_stack_pointer = . ;
	_heap_end = . ;
}
