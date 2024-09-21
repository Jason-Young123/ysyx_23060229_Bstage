ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
	. = ORIGIN(mrom);
	.text :{
		*(entry)
		*(.text*)
	} : text
	etext = . ;
	_etext = . ;

	.rodata : {
    	*(.rodata*)
  	}
  	.data : {
    	*(.data)
 	} : data
  	edata = . ;
  	_data = . ;

	.bss : {
    	_bss_start = .;
    	*(.bss*)
    	*(.sbss*)
    	*(.scommon)
  	}
	
	. = ORIGIN(sram);
	_heap_start = .;
	_stack_top = .;
	. = _stack_top + 0x1fff;
	
	_stack_pointer = .;
	_heap_end = .;

}


