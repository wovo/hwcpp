#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;
using uart     = target::uart;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::scl, target::sda, timing >;



struct pca9685 {
   using bus = i2c_bus;
   inline static const uint_fast8_t base = 0x40;     
   inline static const uint_fast8_t address = 0x3F;    

   
   
   static void init(){
      bus::init();
      std::array< uint8_t, 2 > mode1 = { 0x00, 0x00 };
      std::array< uint8_t, 2 > mode2 = { 0x00, 0x04 };
      bus::write( base + address, mode1 ); 
      bus::write( base + address, mode2 ); 
   }
   
   

   

};

int main(){ 
   hwcpp::ostream< uart > cout;
   using pca = pca9685;
   pca::init();
   
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
