#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

int main(){ 
   timing::init();       
   hwcpp::ostream< uart > cout;
   
   for(;;){
      cout << "Hello world!\n";
      cout << "t=" << (int16_t) target::now_ticks() << "\n";
	  timing::ms< 1'000 >::wait();
   }	  
}

