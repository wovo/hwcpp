#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using uart   = target::uart;

hwcpp::ostream< uart > * cp;

template< hwcpp::can_pin_out _led, typename interval >
struct blinker : 
   timing::callback< struct blinker< _led, interval > > 
{
   using led = hwcpp::pin_out< _led >; 	    
   static inline int64_t next_toggle = 0;
   static inline bool led_state = 0;
  
   static void init(){
      led::init();
      interval::init();
      timing::init();
	  timing::callback< struct blinker< _led, interval > >::callback::init();
   }	  
   
   static void main(){
   //*cp << "4 Hello world nt = " << next_toggle << "\n";	   
       auto t = timing::now_ns();
   //*cp << "5 Hello world t = " << t << "\n";	   
      if( t > next_toggle ){
   //*cp << "================ 6 Hello world\n";			  
         led_state = ! led_state;
         led::set( led_state );		  
         next_toggle = t + interval::n;		  
	  }          
   } 
};   

using blink = blinker< target::led, timing::ms< 200 > >;

int main(){ 
   hwcpp::ostream< uart > cout;
   cp = &cout;
   
      // wait for the console on the PC to start
   //timing::ms< 1'000 >::wait();
   
   //*cp << "1 Hello world\n";
   blink::init();
   //*cp << "2 Hello world\n";
   timing::polling::run();
   //*cp << "3 Hello world\n";
}