#include "hwcpp.hpp"

using target = hwcpp::target<>;
using target = target::timing;

namespace hwcpp {
	
struct polling {

   template< typename T >
   struct main {
      static void init(){
         T::main();		  
      }
   };	   
	
};	


template< can_pin_out _led, typename interval >
struct blinker : 
   threading:: template thread< struct blinker< _led, interval > > 
{
    
   using led = pin_out< _led >; 	    
   
   static void init(){
      led::init();
      interval::init();
   }	  
   	  
   static void main(){
           
   } 
};   

     

};

using blink = hwcpp::blinker_polled< target::led, timing::ms< 200 > >;

int main(){ 
   blink::init();
}