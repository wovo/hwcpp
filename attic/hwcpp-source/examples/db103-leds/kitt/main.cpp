#include "targets/lpc1114fn28.hpp"
// #include <climits>

namespace hwcpp {

template< typename P, typename T, typename D >
void blink_implementation( P p, T timing, D period, int n ){
   auto pin = pin_out_from( p );
   pin.init();
   timing.init();
   const auto delay = period / 2;
   // for( int i = 0; i != n; (n>0) && ++i ){
   for( ;; ){
      pin.set( 1 ); 
      timing.wait( delay );
      pin.set( 0 );
      timing.wait( delay );
   }
}  

template< typename P, typename T, typename D >
void blink( P && p, T && t, D && d, int n = 0 ){
   blink_implementation< P, T, D >( p, t, d, n );
}

}


int main(){	        
   auto target = hwcpp::target< hwcpp::MHz_literal< 12 >>();
   auto timing = target.delay();
/*   
   auto profile = hwcpp::i2c_profile_100kHz();
   auto scl = hwcpp::pin_oc_from( target.gpio_0_4 );
   auto sda = hwcpp::pin_oc_from( target.gpio_0_5 );
   auto i2c_bus = hwcpp::i2c_bus_master_bb(
      hwcpp::i2c_lines_from_scl_sda( scl, sda ),
      timing,
      profile 
   );
   auto chip = pcf8574a( i2c_bus, 0 );
*/
   blink( target.gpio_0_4, timing, hwcpp::ms_literal< 200 >() );
   // blink( chip.p0, timing, hwcpp::ms_literal< 200 >() );
}

