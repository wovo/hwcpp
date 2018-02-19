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

int main(){ 
   hwcpp::ostream< uart > cout;
   using mpu = mpu6050;
   mpu::init();
   
   for(;;){
      timing::ms< 1'000 >::wait();
	  auto x = mpu::read16( 0x3B, 256 );
      cout << hwcpp::hex << x << "\n";
   }
}
