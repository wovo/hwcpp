#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using shield = hwcpp::shields::lcd_buttons< target, timing >;

int main( void ){
	
   hwcpp::ostream< shield::lcd > lcd;	
   shield::init();
   shield::backlight::set( 1 );
     
   for(;;){
      timing::ms< 50 >::wait();
      auto n = shield::adc::get();	     
	  lcd << "\v" << (int) n << "\a";
   }

}