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

int error_count = 0;

#define check( x, y, z ) check_function( __LINE__, x, y, z )
void check_function( int line, const char *s, int a, int b ){
   hwcpp::ostream< uart > cout;
   cout << s << " ";
   if( a == b ){
      cout << "0x" << hwcpp::hex << a << " OK";
   } else {
      error_count++;
      cout 
         << " ERROR @ " << hwcpp::dec << line << "\n"
         << "   expected 0x" << hwcpp::hex << a
         << "  got 0x" << hwcpp::hex << b;
   }
   cout << "\n";
}

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::ms< 1000 >::wait();
   cout << "NRF24L01 test \n";
    
   timing::init();
   led::init();
   
   nrf::init();
   
   cout << "\nconfig register manipulation\n";
   nrf::write( nrf::reg::config, 0x00 );
   nrf::mode_receive();
   check( "receive config", 0x03, nrf::read( nrf::reg::config ) );
   nrf::mode_transmit();
   check( "transmit config", 0x02, nrf::read( nrf::reg::config ) );
   nrf::mode_powerdown();
   check( "powerdown config", 0x00, nrf::read( nrf::reg::config ) );
   nrf::mode_standby();
   check( "standby config", 0x02, nrf::read( nrf::reg::config ) );
   nrf::configure( nrf::crc::one_byte );
   check( "crc 1 config", 0x0A, nrf::read( nrf::reg::config ) );
   nrf::configure( nrf::crc::two_bytes );
   check( "crc 2 config", 0x0E, nrf::read( nrf::reg::config ) );
   nrf::configure( nrf::crc::none );
   check( "crc 0 config", 0x02, nrf::read( nrf::reg::config ) );
   
   cout << "\nwrite to en_aa register\n";   
   nrf::write( nrf::reg::en_aa, 0x00 );
   check( "en_aa clear", 0x00, nrf::read( nrf::reg::en_aa ) );
   nrf::write( nrf::reg::en_aa, 0x3A );
   check( "en_aa half-bits", 0x3A, nrf::read( nrf::reg::en_aa ) );
   nrf::write( nrf::reg::en_aa, 0x00 );
   nrf::pipe_autoack( true );
   check( "en_aa all on", 0x3F, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( false );
   check( "en_aa all off", 0x00, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( 6, true );
   check( "en_aa still all off", 0x00, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( 1, true );
   check( "en_aa one more on", 0x02, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( 3, true );
   check( "en_aa one more on", 0x0A, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( 5, true );
   check( "en_aa one more on", 0x2A, nrf::read( nrf::reg::en_aa ) );
   nrf::pipe_autoack( 5, false );
   check( "en_aa one more off", 0x0A, nrf::read( nrf::reg::en_aa ) );
   
   cout << "\nwrite to en_rxaddr register\n";   
   nrf::write( nrf::reg::en_rxaddr, 0x00 );
   check( "en_rxaddr clear", 0x00, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::write( nrf::reg::en_rxaddr, 0x3A );
   check( "en_rxaddr half-bits", 0x3A, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::write( nrf::reg::en_rxaddr, 0x00 );
   nrf::pipe_enable( true );
   check( "en_rxaddr all on", 0x3F, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( false );
   check( "en_rxaddr all off", 0x00, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( 6, true );
   check( "en_rxaddr still all off", 0x00, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( 1, true );
   check( "en_rxaddr one more on", 0x02, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( 3, true );
   check( "en_rxaddr one more on", 0x0A, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( 5, true );
   check( "en_rxaddr one more on", 0x2A, nrf::read( nrf::reg::en_rxaddr ) );
   nrf::pipe_enable( 5, false );
   check( "en_rxaddr one more off", 0x0A, nrf::read( nrf::reg::en_rxaddr ) );
   
   cout << "\nwrite to setup_aw register\n";   
   nrf::write( nrf::reg::setup_aw, 0x00 );
   check( "setup_aw 0", 0x00, nrf::read( nrf::reg::setup_aw ) );
   nrf::configure( nrf::pipe_address_length::three_bytes );
   check( "setup_aw 1", 0x01, nrf::read( nrf::reg::setup_aw ) );
   nrf::configure( nrf::pipe_address_length::four_bytes );
   check( "setup_aw 1", 0x02, nrf::read( nrf::reg::setup_aw ) );
   nrf::configure( nrf::pipe_address_length::five_bytes );
   check( "setup_aw 1", 0x03, nrf::read( nrf::reg::setup_aw ) );
   
   cout << "\nwrite to setup_retr register\n";   
   nrf::write( nrf::reg::setup_retr, 0x00 );
   check( "setup_retr 0", 0x00, nrf::read( nrf::reg::setup_retr ) );
   nrf::configure( nrf::retransmission_attempts{ 20 } );
   check( "setup_retr 0", 0x0f, nrf::read( nrf::reg::setup_retr ) );
   nrf::configure( nrf::retransmission_attempts{ 5 } );
   check( "setup_retr 0", 0x05, nrf::read( nrf::reg::setup_retr ) );
   nrf::configure( nrf::retransmission_attempts{ 0 } );
   check( "setup_retr 0", 0x00, nrf::read( nrf::reg::setup_retr ) );
   nrf::configure( nrf::retransmission_delay_250us{ 10 } );
   check( "setup_retr 0", 0x90, nrf::read( nrf::reg::setup_retr ) );
   nrf::configure( nrf::retransmission_delay_250us{ 50 } );
   check( "setup_retr 0", 0xF0, nrf::read( nrf::reg::setup_retr ) );
   
   cout << "\nwrite to rf_ch register\n";   
   nrf::write( nrf::reg::rf_ch, 0x00 );
   check( "setup_retr 0", 0x00, nrf::read( nrf::reg::rf_ch ) );
   nrf::configure( nrf::channel{ 16 } );
   check( "setup_retr 0", 0x10, nrf::read( nrf::reg::rf_ch ) );
   nrf::configure( nrf::channel{ 255 } );
   check( "setup_retr 0", 0x7F, nrf::read( nrf::reg::rf_ch ) );
   nrf::configure( nrf::channel{ 0 } );
   check( "setup_retr 0", 0x00, nrf::read( nrf::reg::rf_ch ) );
   
   cout << "\nwrite to rf_setup register\n";   
   nrf::write( nrf::reg::rf_setup, 0x00 );
   check( "rf_setup all 0", 0x00, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::rate::r2Mb );
   check( "rf_setup a-d-r high", 0x08, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::rate::r1Mb );;
   check( "rf_setup a-d-r low", 0x00, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::rate::r2Mb );;
   check( "rf_setup a-d-r 1", 0x08, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_0dbm );
   check( "rf_setup pow 3", 0x0E, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_6dbm );
   check( "rf_setup pow 2", 0x0C, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_12dbm );
   check( "rf_setup pow 1", 0x0A, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_18dbm );
   check( "rf_setup pow 0", 0x08, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::lna::high );
   check( "rf_setup lna high", 0x09, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_0dbm );
   check( "rf_setup power high", 0x0F, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::lna::low );
   check( "rf_setup lna low", 0x0E, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_18dbm );
   nrf::configure( nrf::rate::r1Mb );
   nrf::configure( nrf::lna::high );
   check( "rf_setup lna high", 0x01, nrf::read( nrf::reg::rf_setup ) );
   nrf::configure( nrf::power::p_0dbm );
   nrf::configure( nrf::rate::r2Mb );
   nrf::configure( nrf::lna::low );
   check( "rf_setup lna low", 0x0E, nrf::read( nrf::reg::rf_setup ) );
 
   cout << "\nstatus: tx fifo while receiving\n";   
   nrf::mode_receive();
   nrf::write( nrf::cmd::flush_tx );
   nrf::write( nrf::cmd::flush_rx );
   check( "status - empty", 0x0E, nrf::read( nrf::reg::status ) );
   check( "fifo status - empty", 0x11, nrf::read( nrf::reg::fifo_status ) );
   nrf::write( nrf::cmd::w_tx_payload_noack, 0xAA );
   check( "status - 1 in tx fifo", 0x0E, nrf::read( nrf::reg::status ) );
   check( "fifo status - 1 in tx fifo", 0x01, nrf::read( nrf::reg::fifo_status ) );
   nrf::write( nrf::cmd::w_tx_payload_noack, 0xAA );
   nrf::write( nrf::cmd::w_tx_payload_noack, 0xAA );
   nrf::write( nrf::cmd::flush_rx );
   check( "status - 3 in tx fifo", 0x0F, nrf::read( nrf::reg::status ) );
   check( "fifo status - 3 in tx fifo", 0x21, nrf::read( nrf::reg::fifo_status ) );
   nrf::write( nrf::cmd::flush_tx );
   check( "status - flushed", 0x0E, nrf::read( nrf::reg::status ) );
   check( "fifo status - flushed", 0x11, nrf::read( nrf::reg::fifo_status ) );
     
   cout << "\nstatus: tx fifo while transmitting (noack)\n";   
   nrf::mode_transmit();
   nrf::write( nrf::reg::en_aa, 0x00 );
   nrf::write( nrf::cmd::flush_tx );
   nrf::write( nrf::cmd::flush_rx );
   check( "status - empty", 0x0E, nrf::read( nrf::reg::status ) );
   check( "fifo status - empty", 0x11, nrf::read( nrf::reg::fifo_status ) );
   nrf::write( nrf::cmd::w_tx_payload, 0xAA ); timing::ms< 10 >::wait();
   check( "status - TX int after tx", 0x2E, nrf::read( nrf::reg::status ) );
   check( "fifo status - empty after tx", 0x11, nrf::read( nrf::reg::fifo_status ) );
   nrf::interrupts_clear();
   check( "status - clear again", 0x0E, nrf::read( nrf::reg::status ) );

   cout << "\ntransmit without ack\n"; 
   nrf::write( nrf::reg::feature, 0x07 ); 
   nrf::write( nrf::reg::en_aa, 0x00 ); 
   nrf::write( nrf::reg::setup_retr, 0x00 ); 
   nrf::mode_transmit();  
   nrf::lost_packets_reset();
   check( "status", 0x0E, nrf::read( nrf::reg::status ) );
   check( "lost packets 0", 0x00, nrf::lost_packets_count() );
   nrf::write( nrf::cmd::w_tx_payload_noack, 0xAA ); timing::ms< 10 >::wait();
   check( "retransmitted packets 0", 0x00, nrf::retransmitted_packets_count() );
   check( "lost packets 0", 0x00, nrf::lost_packets_count() ); // should be 1?
   check( "fifo status - empty", 0x11, nrf::read( nrf::reg::fifo_status ) ); // should be non-empty?
   check( "status", 0x2E, nrf::read( nrf::reg::status ) );
   nrf::interrupts_clear();
   check( "status", 0x0E, nrf::read( nrf::reg::status ) );

   cout << "\ntransmit with ack\n"; 
   nrf::write( nrf::reg::feature, 0x07 ); 
   nrf::write( nrf::reg::en_aa, 0x3F ); 
   nrf::write( nrf::reg::setup_retr, 0x05 ); 
   nrf::mode_transmit();  
   nrf::lost_packets_reset();
   nrf::write( nrf::cmd::w_tx_payload, 0xAA ); timing::ms< 10 >::wait();
   check( "retransmitted packets 5", 0x05, nrf::retransmitted_packets_count() );
   check( "lost packets 1", 0x01, nrf::lost_packets_count() );
   check( "fifo status - empty", 0x01, nrf::read( nrf::reg::fifo_status ) ); // why??
   check( "status", 0x1E, nrf::read( nrf::reg::status ) );
   nrf::interrupts_clear();
   check( "status", 0x0E, nrf::read( nrf::reg::status ) );
   nrf::write( nrf::reg::setup_retr, 0x03 ); 
   nrf::write( nrf::cmd::w_tx_payload, 0xAA ); timing::ms< 10 >::wait();
   check( "retransmitted packets 3", 0x03, nrf::retransmitted_packets_count() );
   check( "lost packets 0", 0x02, nrf::lost_packets_count() );
   check( "fifo status - empty", 0x01, nrf::read( nrf::reg::fifo_status ) ); // why??
   check( "status", 0x1E, nrf::read( nrf::reg::status ) );
   nrf::interrupts_clear();
   check( "status", 0x0E, nrf::read( nrf::reg::status ) );
   

//   check( "initial status", 0x0E, nrf::read( nrf::reg::status ) );

   cout << "\nerrors = " << hwcpp::dec << error_count << "\n";
}

