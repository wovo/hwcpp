#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::scl, target::sda, timing >;
using lcd      = hwcpp::shields::i2c_lcd< i2c_bus, 20, 4, timing >;

int main(){ 
   hwcpp::ostream< lcd > cout;
   int n  = 0;
   
   for(;;){
      timing::ms< 1000 >::wait();
	  cout << "\v" << (int32_t)  ++n << "\a\n\n";
      cout << "t";
      auto t1 = timing::now_ticks();
      cout << "=";
      auto t2 = timing::now_ticks();
      cout << (int32_t) ( timing::ns_from_ticks( t2 - t1 ) / 1'000 ) << "us";
   }
}

/*
 * timing analysis
 * 
 * writing a single char requires
 *    set data
 *    2 x write4
 *       set port (4 bit)
 *       set e
 *       clear e
 *    100 us (extra )delay
 *    = 13 pin-sets + 100 us
 * 
 *  an I2C bus write to the PCF8574A at 100 kHz requires
 *     2 x 8 data bits
 *     start, ack, ack stop
 *     = 20 x 10 us = 200 us
 * 
 * without buffering: 
 *     (needs tweeking of port-from-pins)
 *     13 x 200 us + 100 us = 2700 us
 *     measured t = 2510 us
 * 
 * with (only) buffering inherent in port
 *    7 x 200 us + 100 us = 1500 us
 *    measured t = 1410 us 
 * 
 * sharing port & rs write
 *    6 x 200 us + 100 us = 1300 us
 *    measured t = 1226 us 
 * 
 */