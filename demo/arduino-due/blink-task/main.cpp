#include "hwcpp.hpp"

using target = hwcpp::target<>;
// using timing = target::threading;

namespace hwcpp {
	
struct threading {

   template< void ( * main )() >
   struct thread {
      static void init(){
         main();		  
      }
   };	   
	
};	

template< can_pin_out _led, typename threading >
struct blinker {
   
   static void fmain();
   
   //using thread = typename threading::thread< main >;
   
   static void fmain(){
      using led = pin_out< _led >; 	    
      for(;;){
		  
      }		  
   }
   
   static void init(){
     //thread::init();
   }	  
};      

};

using blink = hwcpp::blinker< target::led, hwcpp::threading >;
//timing::ms< 200 > >;

int main(){ 
   blink::init();
}