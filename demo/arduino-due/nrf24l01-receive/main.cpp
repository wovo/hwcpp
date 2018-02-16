#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::clocking;
using uart   = target::uart;
using led    = target::led;

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

void test_status(){
   hwcpp::ostream< uart > cout;
   cout << "status = " << hwcpp::hex << (uint32_t) nrf::status() << "\n";
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::read( nrf::reg::feature ) << "\n";
   nrf::write( nrf::reg::feature, 0x07 );
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::read( nrf::reg::feature ) << "\n";
   nrf::extensions_toggle();
   cout << "status = " << hwcpp::hex << (uint32_t) nrf::status() << "\n";
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::read( nrf::reg::feature ) << "\n";
   nrf::write( nrf::reg::feature, 0x07 );
   cout << "feature=" << hwcpp::hex << (uint32_t) nrf::read( nrf::reg::feature ) << "\n";
   cout << "status R = " << hwcpp::hex << (uint32_t) nrf::read( nrf::reg::status ) << "\n";
}

nrf::air_configuration air_conf = { 
    channel         : 0,
    air_data_rate   : 1,
    crc_length      : 2,
    power           : 3,
    lna             : 1,
    address_length  : 5
};    

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::ms< 1000>::wait();
   cout << "NRF24L01 test \n";
    
   timing::init();
   led::init();
   nrf::init();
   nrf::configure( air_conf );
   nrf::mode_receive();
   
   test_status();

   for(;;){
      std::array< uint8_t, 32 > msg;
      uint8_t p, n;
      if( nrf::receive( n, msg, p )){
         cout << "rx=" << (char) msg[ 0 ] << "\n";
      }          
      timing::ms< 1'00 >::wait();
   }      
}

