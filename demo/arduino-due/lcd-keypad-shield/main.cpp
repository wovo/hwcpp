#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using shield = hwcpp::shields::joystick_buttons< target >;
using uart   = target::uart;

template< typename p, char c >
char show(){ return p::get() ? '-' : c; }

int main( void ){
   hwcpp::ostream< uart > cout;	
   
   shield::init();
     
   for(;;){
      timing::ms< 200 >::wait();
      cout 
	     << show< shield::n, 'n' >()
	     << show< shield::e, 'e' >()
	     << show< shield::s, 's' >()
	     << show< shield::w, 'w' >()
		 << "  " << shield::js::x_raw::get()
		 << "  " << shield::js::y_raw::get()
		 << "\n";
   }

}