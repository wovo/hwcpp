#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

int main(){ 
   timing::init();       
   hwcpp::ostream< uart > cout;
   
   for(;;){
      while( target::_uart_foundation::read_blocks() ){}	   
      char c = target::_uart_foundation::read_direct_unchecked();	   
      cout << "[" << c << "]\n";
   }	  
}

