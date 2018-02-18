//===========================================================================
// LPC1114 startup
// Wouter van Ooijen - wouter@voti.nl
// license: zlib
//===========================================================================

int main( void );
extern "C" { void __startup( void ); }
extern int __stack_end;			

// nr 7 (offset 0x1C) is the vectors checksum
extern void (* const __vectors[ 16 ])(void) 
   __attribute__ ((section(".vectors"))) = {
      (void (*)(void)) & __stack_end,	
		                     __startup					
};

void __startup(void){
   extern int __data_init_start;
   extern int __data_start;
   extern int __data_end;
   extern int __bss_start;
   extern int __bss_end;
   extern int __init_array_start;
   extern int __init_array_end;
   
	 int *s, *d, *e;

	 // clear .bss section 
	 d = & __bss_start;
	 e = & __bss_end;
	 while( d != e ){
	    *d++ = 0;
	 }
	 
	 // copy .data section from flash to ram
	 s = & __data_init_start;
	 d = & __data_start;
	 e = & __data_end;
	 while( d != e ){ 
	    *d++ = *s++;
	 } 
	 
	 // call the constructorts of global objects
	 s = & __init_array_start;
	 e = & __init_array_end;
	 while( s != e ){
	    (*((void(**)())s++))();
	 }
  
   // call main   
   (void) main(); 
   
   // when main returns: loop till hell freezes down
   while(1){}	
   
}

// called when a pure virtual method is called
extern "C" void __cxa_pure_virtual( void ){
   while(1){}	
}
