#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using uart   = target::uart;

int main(){ 
   hwcpp::ostream< uart > cout;
   
   // wait for the console on the PC to start
   timing::ms< 1'000 >::wait();   
   
   for(;;){
      cout << "Hello world!\n";
	  timing::ms< 500 >::wait();
   }	  
}