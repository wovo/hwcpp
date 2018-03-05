#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::timing;

struct servo {
    using pin = hwcpp::pin_out< target::d54 >;
    static void init(){
       pin::init();
       pin::set( 0 );
    }
    static void set( uint16_t angle ){
       pin::set( 1 );
       timing::wait_us( 500 + (( 2'000 * angle ) / 180 ) );
       pin::set( 0 );
       timing::wait_us( 20'000 );
    }
};

int main(){ 
   hwcpp::ostream< uart > cout;
   using mpu = mpu6050;
   mpu::init();
   servo::init();
   target::led::init();
   
   for(;;){
      for( int a = 0; a < 180; a += 4 ){
         servo::set( a );   
      }
      target::led::set( 1 );
      timing::wait_us( 20'000 );
      target::led::set( 0 );
      for( int a = 180; a > 0; a -= 4 ){
         servo::set( a );   
      }
   }
   
}
