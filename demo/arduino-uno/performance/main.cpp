#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::clocking;
using uart   = target::uart;

template< typename T >
auto elapsed( T f ){
   auto t1 = timing::now_ticks();   
   auto t2 = timing::now_ticks();   
   f();
   auto t3 = timing::now_ticks(); 
   return (int) (( t3 - t2 ) - ( t2 - t1 ));
}   

int main( void ){
   timing::init();	
	
   hwcpp::ostream< uart > cout; 
   timing::ms< 2'000 >::wait();
   
   cout 
      << "now_ticks() " 
	  << elapsed( []{ (void)timing::now_ticks(); } ) 
	  << "\n";
   
   target::d7::init();
   cout 
      << "pin::set(1) " 
	  << elapsed( []{ target::d7::set( 1 ); } ) 
	  << "\n";
   
   target::a0::init();
   cout 
      << "adc::get() " 
	  << elapsed( []{ (void)target::a0::get(); } ) 
	  << "\n";
      
   for(;;){
      cout << "t=" << hwcpp::hex << (int32_t) target::now_ticks() << "\n";
      auto t1 = (int32_t) target::now_ticks() ;
      auto t2 = (int32_t) target::now_ticks() ;
      auto t3 = (int32_t) target::now_ticks() ;
      cout << t1 << " " << t2 << " " << t3 << "\n";
      cout << hwcpp::dec << t2 - t1 << " " << t3 - t2 << "\n";
	  timing::ms< 1'000 >::wait();
   }	       

}

// now_ticks takes 51/54 pr 91(/94?) clocks