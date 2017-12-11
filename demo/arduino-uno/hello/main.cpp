#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

int main(){ 
   //hwcpp::ostream< uart > cout;
   
   // wait for the console on the PC to start
   //timing::ms< 2'000 >::wait();   
   
   	   target::led::init();

   
   for(;;){
	   target::led::set( 1 );
	  //uart::put( 'x' );
      //cout << "Hello world!\n";
	  timing::ms< 100 >::wait();
	  
	   target::led::set( 0 );
	  //uart::put( 'y' );
      //cout << "Hello world!\n";
	  timing::ms< 100 >::wait();
   }	  
}