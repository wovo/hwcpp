#include "hwcpp.hpp"

using target = hwcpp::target<>;
// using timing = target::threading;

namespace hwcpp {
	
struct threading {

   template< typename T >
   struct thread {
      static void init(){
         T::main();		  
      }
   };	   
	
};	


template< can_pin_out _led, typename threading >
struct blinker : threading:: template thread< struct blinker< _led, threading > > {
    
   static void main(){
      using led = pin_out< _led >; 	    
      for(;;){		  
      }		  
   }
   	  
};   

     

};

using blink = hwcpp::blinker< target::led, hwcpp::threading >;

int main(){ 
   blink::init();
}