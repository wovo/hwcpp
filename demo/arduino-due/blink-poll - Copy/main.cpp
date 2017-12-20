#include "hwcpp.hpp"

using target = hwcpp::target<>;
using uart   = target::uart;

hwcpp::ostream< uart > * cp;

template< hwcpp::can_pin_out _led, typename interval >
struct blinker : 
   interval:: template callback< struct blinker< _led, interval > > 
{
   using led = hwcpp::pin_out< _led >; 	    
   static inline uint64_t next_toggle = 0;
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

using timing = target::timing;

using blink = blinker< target::led, timing::ms< 200 > >;

int main(){ 
   hwcpp::ostream< uart > cout;
   cp = &cout;
   
   blink::init();
   timing::callbacks::run();
}