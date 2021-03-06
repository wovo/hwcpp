#include "hwcpp.hpp"

using target = hwcpp::target<>;

template< hwcpp::can_pin_out _led, typename interval >
struct blinker : 
   interval:: template callback< struct blinker< _led, interval > > 
{
   using led = hwcpp::pin_out< _led >; 	    
   static inline bool led_state = 0;
  
   static void init(){
      led::init();
	  interval::template callback< struct blinker< _led, interval > >::init();
   }	  
   
   static void main(){
      led_state = ! led_state;
      led::set( led_state );		  
   } 
};   

using blink = blinker< target::led, target::timing::ms< 200 > >;

int main(){    
   blink::init();
   target::timing::callbacks::run();
}