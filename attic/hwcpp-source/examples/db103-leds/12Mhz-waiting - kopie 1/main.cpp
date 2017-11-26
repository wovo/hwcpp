#include "targets/lpc1114fn28.hpp"
#include <climits>

// The alignment is required to keep the loop in one flash prefetch line.
// This alignment requirement makes inlining not very effective.
void __attribute__((noinline)) wait_us1( const int x ){
   asm volatile( 
            "   mov r1, %[reg]   \t\n"
            "   b   2f           \t\n"
            "   .align 4         \t\n"
            "2: sub r1, #1       \t\n" 
            "   bgt 2b           \t\n" 
            :: [reg] "r" (x) : "r1"
   );
}

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

template< long long int N = LLONG_MAX >
struct value {
   static constexpr long long int v = N;
};

template< long long int N = LLONG_MAX >
struct usec;

template<> 
struct usec<> {
   long long int n;
   usec( long long int n ): n{ n }{}
   void wait(){
      wait_us( 3 * n );
   }
   usec operator/( int d ) const {
      return usec<>( n / d );
   }
   template< typename V >
   usec operator/( V v ) const {
      return usec<>( n / V::v );
   }
};

template< long long int N > 
struct usec : public usec<> {
   usec(): usec<>( N ){}
   void __attribute__((always_inline)) wait(){
      if( N == 0 ){
   asm volatile( 
            "   nop   \t\n"
   );      
      } else {
         wait_us( 3 * N );
      }   
   }
   template< typename V >
   usec< N / V::v > operator/( V v ) const {
      return usec< N / V::v >();
   }
};

template< typename P, typename T >
void blink( P & pin, const T period, int n = -1 ){
   pin.init();
   auto delay = period / value< 2 >();
   // delay.init();
   for( int i = 0; i != n; (n>0) && ++i ){
      pin.set( 1 );
      delay.wait();
      pin.set( 0 );
      delay.wait();
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
   
   blink( target.gpio_1_4, usec< 1000 * 1000 >() );  
   blink( target.gpio_1_4, usec<>( 100 ) );  
   blink( target.gpio_1_4, usec<>( 100 ) );  
}

