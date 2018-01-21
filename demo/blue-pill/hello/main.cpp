#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using uart   = target::uart;

int main(){ 
   timing::init();    
   uart::init();
   
   for(;;){
      uart::write( "Hello world!\n" );
	  timing::ms< 1'000 >::wait();
   }	  
}

