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

class duration {
private :
   long long int n; 
   constexpr duration( long long int n ): n{ n }{}
   friend constexpr duration us( long long int n );
   friend void wait( duration d );
public : 
   void init() const {}
   constexpr duration operator+( const duration rhs ) const {
      return duration( n + rhs.n );
   }
   constexpr duration operator/( int rhs ) const {
      return duration( n / rhs );
   }
};

constexpr duration us( long long int n ){
   return duration( n );
}

void __attribute__((always_inline)) wait( duration d ){
   if( __builtin_constant_p( d )){
      if( d.n == 0 ){
         asm volatile ( 
            "   nop   \t\n"
         );
      } else {
         wait_us( 3 * d.n );   
      }
   } else {
      wait_us( 3 * d.n );
   }   
}   

template< typename P, typename T >
void blink( P & pin, const T period, int n = -1 ){
   pin.init();
   period.init();
   const auto delay = period / 2;
   for( int i = 0; i != n; (n>0) && ++i ){
      pin.set( 1 );
      wait( delay );
      pin.set( 0 );
      wait( delay );
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
   hwcpp::target< 12 * hwcpp::MHz > target;
   target.gpio_1_4.init();
   target.gpio_1_4.direction_set_output();
   target.gpio_1_4.pullup_enable();
   
   auto p = pin_out_from( target.gpio_1_4 );
   p.init();
   p.set( 1 );
   //p.pullup_enable();
   
   blink( target.gpio_1_4, us( 0 ) );  
   // blink( target.gpio_1_4, us( 400 * 1000 ) );  
   //blink( target.gpio_1_4, us( 100 ) );  
   //blink( target.gpio_1_4, us( 100 ) );  
}

