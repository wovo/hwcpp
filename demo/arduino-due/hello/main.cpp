#include "hwcpp.hpp"

using target = hwcpp::target<>;
// using target = hwcpp::target< 58'000'000 >;
using timing = target::waiting;
using uart   = target::uart;

int main(){ 
   hwcpp::ostream< uart > cout;
   
   // wait for the console on the PC to start
   timing::ms< 2'000 >::wait();   
   
   for(;;){
      cout << "Hello world!\n";
	  timing::ms< 500 >::wait();
   }	  
}