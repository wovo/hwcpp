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

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::ms< 1000>::wait();
   cout << "NRF24L01 test - receive\n";
    
   timing::init();
   led::init();
   
   std::array< uint8_t, 5 > tx_addr = { 0xE7, 0xE7, 0xE7, 0xE7, 0xE7 };
   nrf::air_configuration air_conf = { 
      nrf::channel{ 70 },
      nrf::rate::r1Mb,
      nrf::crc::two_bytes,
      nrf::power::p_18dbm,
      nrf::lna::high,
      nrf::address_length::five_bytes
   };    
   
   nrf::init();
   nrf::configure( air_conf );
   nrf::write( nrf::reg::feature, 0x00 );
   nrf::write( nrf::reg::en_aa, 0x00 );
   nrf::write( nrf::reg::dynpd, 0x3F );
   nrf::write( nrf::reg::en_rxaddr, 0x3F );   
   nrf::write( nrf::reg::setup_retr, 0x00 );   
   nrf::write( nrf::reg::tx_addr, tx_addr );
   nrf::write( nrf::reg::rx_addr_p0, tx_addr );
   nrf::write( nrf::reg::rx_addr_p1, tx_addr );
   
   nrf::mode_receive();
   for(;;){
      std::array< uint8_t, 32 > msg;
      uint8_t p, n;
      if( nrf::receive( n, msg, p )){
         cout << "\n********** rx=" << (char) msg[ 0 ] << "\n\n";
      }          
      
      // log some info
      cout 
         << "config (F) = " 
         << hwcpp::hex << nrf::read( nrf::reg::config )
         << "\n"
         << "status (E) = " 
         << hwcpp::hex << nrf::read( nrf::reg::status )
         << "\n"
         << "fifo_status (11) = " 
         << hwcpp::hex << nrf::read( nrf::reg::fifo_status )
         << "\n\n";      
         
      nrf::interrupts_clear();
      timing::ms< 1'000 >::wait();
   }      
}

