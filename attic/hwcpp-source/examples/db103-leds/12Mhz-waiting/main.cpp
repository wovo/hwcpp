#include "targets/lpc1114fn28.hpp"
#include <climits>

// The alignment is required to keep the loop in one flash prefetch line.
// This alignment requirement makes inlining ineffective, hence the 
// ((noinline)). 
// On a 3-stage-pipline Cortex-M0 the loop takes 1 (sub) + 1 (bgt) 
// + 2 (branch penalty) = 4 cycles. On a 2-stage-pipeline M0+ the
// branch penalty is only 1, so i takes 3 cycles.
// On an M0 the call and return take 3 cycles each (6 total),
// on an M0+ 2 cycles each (4 total).
void __attribute__((noinline)) wait_us( int x ){
   asm volatile( 
            "   .align 2         \t\n"
            "1: sub %[reg], #1   \t\n" 
            "   bgt 1b           \t\n" 
            :: [reg] "rw" (x) : 
   );
}

namespace hwcpp {

void __attribute__((always_inline)) wait( const duration d ){
   const auto ns = d.ns();
   if( __builtin_constant_p( ns )){
      if( ns == 0 ){
         asm volatile ( 
            "   nop   \t\n"
         );
      } else {
         wait_us( 3 * d.us() );   
      }
   } else {
      wait_us( 3 * d.us() );
   }   
}   

template< typename P, typename T >
void blink( P & pin, const T period, int n = -1 ){
   pin.init();
   // period.init();
   const auto delay = period / 2;
   for( int i = 0; i != n; (n>0) && ++i ){
      pin.set( 1 );
      wait( delay );
      pin.set( 0 );
      wait( delay );
   }
}  

}

template< typename T  >
void sos( T & pin ){
   blink( pin, 100, 1 );
   blink( pin, 200, 1 );
   blink( pin, 300, 1 );
   blink( pin, 400, 1 );
} 

int main(){	        
   hwcpp::target< hwcpp::MHz_literal< 12 >> target;
   target.gpio_1_9.init();
   target.gpio_1_9.direction_set_output();
   target.gpio_1_9.pullup_enable();
   
   auto p = pin_out_from( target.gpio_1_9 );
   p.init();
   p.set( 1 );
   //p.pullup_enable();
   
   auto t1 = hwcpp::ms_literal< 0 >();
   const auto t2 = hwcpp::ms_literal< 0 >();
   int i = 0;
   
   hwcpp::blink( target.gpio_1_9, t1 );  
   // hwcpp::blink( target.gpio_1_9, interface( t1 ) );  
   // hwcpp::blink( target.gpio_1_9, interface( t2 ) );  
   // hwcpp::blink( target.gpio_1_9, interface( hwcpp::const_ms< 0 >() ) );  
   // hwcpp::blink( target.gpio_1_9, hwcpp::const_ms< 0 >() );  
   // hwcpp::blink( target.gpio_1_9, hwcpp::interface( i ));  
   // hwcpp::blink( target.gpio_1_9, hwcpp::interface( 5 ));  
   // blink( target.gpio_1_4, us( 400 * 1000 ) );  
   //blink( target.gpio_1_4, us( 100 ) );  
   //blink( target.gpio_1_4, us( 100 ) );  
}

