#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::clocking;
using uart   = target::uart;

using spi = hwcpp::spi_bus_bb_sclk_miso_mosi<
   target::d13, 
   target::d12, 
   target::d11,
   timing
>;
using nrf = hwcpp::nrf24l01_spi_ce_csn<
   spi,
   target::d9,
   target::d10,
   timing
>;  

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::ms< 1000>::wait();
   cout << "NRF24L01 test \n";
    
   timing::init();
   nrf::init();
   
   cout << "status = " << hwcpp::hex << (uint32_t) nrf::status_read() << "\n";
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::register_read( nrf::reg::feature ) << "\n";
   nrf::register_write( nrf::reg::feature, 0x07 );
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::register_read( nrf::reg::feature ) << "\n";
   nrf::extensions_toggle();
   cout << "status = " << hwcpp::hex << (uint32_t) nrf::status_read() << "\n";
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::register_read( nrf::reg::feature ) << "\n";
   nrf::register_write( nrf::reg::feature, 0x07 );
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::register_read( nrf::reg::feature ) << "\n";
   cout << "status R = " << hwcpp::hex << (uint32_t) nrf::register_read( nrf::reg::status ) << "\n";

   if(0) for(;;){
      auto x = nrf::status_read();
      (void)x;
      cout << "status = " << hwcpp::hex << (uint32_t) x << "\n";
      timing::ms< 1'000 >::wait();
   }      
}

