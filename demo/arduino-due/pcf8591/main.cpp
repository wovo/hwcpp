#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;
using uart     = target::uart;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::scl, target::sda, timing >;
using pcf      = hwcpp::pcf8591< i2c_bus >;

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::init();
   pcf::adc0::init();
   pcf::adc1::init();
   pcf::adc2::init();
   pcf::adc3::init();
   
   for(;;){
	  timing::ms< 2000 >::wait();
      cout 
         << hwcpp::setw( 10 ) << pcf::adc0::get() << "  " // ldr
         << hwcpp::setw( 10 ) << pcf::adc1::get() << "  " // nc?
         << hwcpp::setw( 10 ) << pcf::adc2::get() << "  " // ntc?
         << hwcpp::setw( 10 ) << pcf::adc3::get() << "  " // pot
         << "\n";
   }
}