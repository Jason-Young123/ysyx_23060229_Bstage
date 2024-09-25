ENTRY(_start)
/*PHDRS { text PT_LOAD; data PT_LOAD; }*/

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
	. = ORIGIN(mrom);
	.text :{
		_stext = .;
		*(entry)
		*(.text*)
		. = ALIGN(4);
		_etext = . ;
	} > mrom AT> mrom
	
	.rodata : {
		*(.rodata*)
		*(.srodata*)
		. = ALIGN(4);
	} > mrom AT> mrom

	/*. = ALIGN(4);*/
	_sdata_mrom = LOADADDR(.data);

	.data : {  
        _sdata_sram = .;
        *(.data*)
		*(.sdata*)
	  	. = ALIGN(4);
        _edata_sram = .;  
    } > sram AT> mrom

	_edata_mrom = _sdata_mrom + SIZEOF(.data);
	
	.bss : {
    	_sbss = .;
    	*(.bss*)
    	*(.sbss*)
    	*(.scommon)
		. = ALIGN(4);
		_ebss = .;
  	} > sram AT> sram

	_heap_start = _ebss;
	
	. = ORIGIN(sram) + 0x1fff + 1;
	_stack_pointer = . ;
	_heap_end = . ;
}
