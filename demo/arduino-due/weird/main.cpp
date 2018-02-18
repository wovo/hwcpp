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

void check( const char *s, int a, int b ){
   hwcpp::ostream< uart > cout;
   cout << s << " ";
   if( a == b ){
//      cout << hwcpp::hex << "0x" << a << " OK";
   } else {
/*
      cout 
         << " ERROR\n"
         << "   expected 0x" << hwcpp::hex << a
         << "  got 0x" << hwcpp::hex << b;
*/
 /*
     cout << " ERROR\n";
      cout << "   expected 0x";
      cout << hwcpp::hex;
      cout << a;
      cout << "  got 0x";
      //cout << hwcpp::hex;
      //cout << b;
*/
   }
   //cout << "\n";
}

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
   timing::init();
   timing::ms< 1000>::wait();
   cout << "NRF24L01 test \n";
   cout << "second line  \n";
    
 
   check( "initial status", 0x0E, 0xFF );
//   check( "fifo status", 0x11, nrf::read( nrf::reg::fifo_status ) );
}

