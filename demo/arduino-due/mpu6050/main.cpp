#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;
using uart     = target::uart;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::scl, target::sda, timing >;

struct mpu6050 {
   using bus = i2c_bus;
   inline static const uint_fast8_t base = 0x68;     
   inline static const uint_fast8_t address = 0x00;     
   static void init(){
      bus::init();
      uint8_t control[ 2 ] = { 0x6B, 0x00 }; 
      bus::write( base + address, control, 2 );
   }
   
   static uint_fast16_t read16( uint8_t reg ){
      uint8_t control[ 1 ] = { reg }; 
      bus::write( base + address, control, 1 );
      uint8_t result[ 2 ]; 
      bus::read( base + address, result, 2 );
      return ( result[ 0 ] << 8 ) + result[ 1 ];
   }
   
   static uint_fast16_t read16( uint8_t reg, int n ){
      uint32_t sum = 0;
      for( int i = 0; i < n; i++ ){
          sum += read16( reg );
      }
      return ( sum / n );
   }
};

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
   
   for(;;){
      timing::ms< 1'000 >::wait();
	  auto x = mpu::read16( 0x3B, 256 );
      cout << hwcpp::hex << x << "\n";
   }
}
