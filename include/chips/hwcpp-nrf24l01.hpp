// ==========================================================================
//
// file : hwcpp-nrf24l01.hpp
//
// ==========================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


// ==========================================================================
//
// PUBLIC
//
// interface for an nrf24l01 transciever
//
// ==========================================================================

// inclusion start marker ##cto
template<
   typename bus,         // the SPI bus
   can_pin_out  _ce,     // the CE (Chip Enable) pin
   can_pin_out  _csn,    // the SPI Chip Select (Negative) pin
   is_waiting   timing   // the timing service
>
struct nrf24l01_spi_ce_csn {
// inclusion end marker ##cto

   using ce  = pin_out< _ce >;
   using csn = pin_out< _csn >;
   
// ========== low-level (SPI commands & registers) interface
   
   // inclusion start marker ##commands
   enum class cmd : uint8_t {
      read_reg           = 0x00, // read a register
      write_reg          = 0x20, // write a register
      r_rx_payload       = 0x61, // read a received payload
      w_tx_payload       = 0xa0, // write a payload to be sent
      flush_tx           = 0xe1, // empty the transmit queue
      flush_rx           = 0xe2, // empty the receive queue
      reuse_tx_pl        = 0xe3, // start continuous retransmission
      activate           = 0x50, // toggle register bank or extended functions
      r_rx_pl_wid        = 0x60, // read length of fifo top payload
      w_ack_payload      = 0xa8, // write payload to be transmitted with ack
      w_tx_payload_noack = 0xb0, // write payload to be sent without auto-ack
      nop                = 0xff  // no action, can be used to read the status
   };
   // inclusion end marker ##commands

   // inclusion start marker ##registers
   enum class reg : uint8_t {
      config             = 0x00, // configuration register
      en_aa              = 0x01, // enable auto ack on pipes
      en_rxaddr          = 0x02, // enable receive pipes
      setup_aw           = 0x03, // set address length
      setup_retr         = 0x04, // retransmission settings
      rf_ch              = 0x05, // rf channel (frequency)
      rf_setup           = 0x06, // data rate, transmit power, lna
      status             = 0x07, // status register
      observe_tx         = 0x08, // lost and retransmitted packets
      cd                 = 0x09, // carrier detect
      rx_addr_p0         = 0x0a, // receive address pipe 0, 5 bytes
      rx_addr_p1         = 0x0b, // receive address pipe 1, 5 bytes
      rx_addr_p2         = 0x0c, // receive address pipe 2, 1 byte
      rx_addr_p3         = 0x0d, // receive address pipe 2, 1 byte
      rx_addr_p4         = 0x0e, // receive address pipe 2, 1 byte
      rx_addr_p5         = 0x0f, // receive address pipe 2, 1 byte
      tx_addr            = 0x10, // transmit adress, 5 bytes
      rx_pw_p0           = 0x11, // number of bytes in pipe 0 package
      rx_pw_p1           = 0x12, // number of bytes in pipe 1 package
      rx_pw_p2           = 0x13, // number of bytes in pipe 2 package
      rx_pw_p3           = 0x14, // number of bytes in pipe 3 package
      rx_pw_p4           = 0x15, // number of bytes in pipe 4 package
      rx_pw_p5           = 0x16, // number of bytes in pipe 5 package
      fifo_status        = 0x17, // receive and transmit fifo status (RO)
      dynpd              = 0x1c, // dynamic payload flags
      feature            = 0x1d  // special features flags
   };
   // inclusion end marker ##registers

   //interrupt status
   static const uint8_t status_rx_dr  = 0x40;
   static const uint8_t status_tx_ds  = 0x20;
   static const uint8_t status_max_rt = 0x10;

   static const uint8_t status_tx_full = 0x01;

   //fifo_status
   static const uint8_t fifo_status_tx_reuse = 0x40;
   static const uint8_t fifo_status_tx_full  = 0x20;
   static const uint8_t fifo_status_tx_empty = 0x10;

   static const uint8_t fifo_status_rx_full  = 0x02;
   static const uint8_t fifo_status_rx_empty = 0x01;

   // inclusion marker ##command 1 line
   static uint_fast8_t command( cmd c ){
      const std::array< uint8_t, 1 >  write_data = { (uint8_t) c };
	  std::array< uint8_t, 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );	   
      return read_data[ 0 ];
   }

   // inclusion marker ##command 1 line
   static uint_fast8_t command( cmd c, uint8_t d ){
      const std::array< uint8_t, 2 >  write_data = { (uint8_t) c, d };
	  std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
      return read_data[ 0 ];
   }

   // inclusion marker ##command 2 line
   template< size_t n >
   static uint_fast8_t command( cmd c, const std::array< uint8_t, n > d ){
      std::array< uint8_t, n + 1 > write_data = {  
         (uint8_t) ( (uint8_t) c ) };
      for( int i = 0; i < n; ++i ){
         write_data[ i + 1 ] = d[ i ];
      }   
	  std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
      return read_data[ 0 ];
   }
   
   // inclusion marker ##read 1 line
   static uint8_t read( reg r ){
      const std::array< uint8_t, 2 > write_data = { 
         (uint8_t) ( (uint8_t) cmd::read_reg | (uint8_t) r ), 
         0 };
	  std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
	  return read_data[ 1 ];
   }
   
   // inclusion marker ##read 1 line
   static void write( reg r, uint8_t d ){
      const std::array< uint8_t, 2 >  write_data = {  
         (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ), 
         d };
	  std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );	   
   }

   // inclusion marker ##read 2 line
   template< size_t n >
   static void write( reg r, const std::array< uint8_t, n > d ){
      std::array< uint8_t, n + 1 > write_data = {  
         (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ) };
      for( int i = 0; i < n; ++i ){
         write_data[ i + 1 ] = d[ i ];
      }   
	  std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );	   
   }

   static void init(){
      bus::init();
      ce::init();
      csn::init();
      ce::set( 0 );
      csn::set( 1 );	
      timing:: template ms< 50 >::wait();	  
   }

// ========== mid-level (individual features) interface
 
   static void extensions_toggle(){
      (void) command( cmd::activate, 0x73 );       	   
   }
   
   static uint_fast8_t status(){
      return command( cmd::nop );  
   }   

   static void interrupts_clear(){
      uint8_t value = read( reg::status );
      write( reg::status, value ); 
   }   

   static void channel( uint8_t ch ){
     // MSB must be 0
     write( reg::rf_ch, ch & 0x7E );
   }

   static void air_data_rate( uint_fast8_t rate ){
      ce::set( 0 );
      uint8_t value = read( reg::setup );
      value &= 0xF7;
      if( rate > 1 ){
         value |= 0x08;  
      }
      write( reg::setup, value );
      ce::set( 1 );
   }

   static void crc_length( uint8_t len ){
      len = std::max( len, (uint8_t) 2 );
      uint8_t val = read( reg::config );
      if( len == 0 ){
         val &= 0xF3;
         write( reg::en_aa, 0 );
      } else {
         write( reg::en_aa, 0x3F );
         val &= 0xFB;
         if( val == 2 ){
            val |= 0x04; 
         }   
      }  
      write( reg::config, val );
   }

   static void address_length( uint8_t len ){
      len = std::clamp( len, (uint8_t) 3, (uint8_t) 5 );
      write( reg::setup_aw, len - 2  );   
   }

   static bool transmit_fifo_full(){
      uint8_t s = read( reg::fifo_status );
      return ( s & fifo_status_tx_full ) != 0;
   }
    
   static bool receive_fifo_empty(){
      uint8_t s = read( reg::fifo_status );
      return ( s & fifo_status_rx_empty ) != 0;
   }

   static void receive_address_p0( const std::array< uint8_t, 5 > address ){
      write( reg::rx_addr_p0, address );  
   }

   static void receive_address_p1( const std::array< uint8_t, 5 > address ){
      write( reg::rx_addr_p1, address );  
   }

   static void receive_address_pn( uint8_t channel, uint8_t address ){
      write( reg::rx_addr_p0 + channel, address ); 
   }

   static void transmit_address( const std::array< uint8_t, 5 > address ){
      write( reg::tx_addr, address );   
   } 

   static uint_fast8_t retransmit_count(){
      return read( reg::observe_tx ) & 0x0F;   
   }

   static uint_fast8_t lost_packets_count(){
      return ( read( reg::observe_tx ) >> 4 ) & 0x0F;   
   }

   static void pipe_autoack( uint8_t pipe, bool enabled ){
      uint8_t val = read( reg::en_aa ); 
      pipe = std::max( pipe, (uint8_t) 5 );   
      if( enabled ){
         val |= 1 << pipe;
      } else {
         val &= ~ ( 1 << pipe );
      }
      write( reg::en_aa, val ); 
   }

   static void pipe_enable( uint8_t pipe, bool enabled ){
      uint8_t val = read( reg::en_rxaddr ); 
      pipe = std::max( pipe, (uint8_t) 5 ); 
      if( enabled ){
         val |= 1 << pipe;
      } else {
         val &= ~ ( 1 << pipe );
      }
      write( reg::en_rxaddr, val ); 
   }

   static void lost_packets_reset(){
      uint8_t val = read( reg::rf_ch );  
      write( reg::rf_ch, val );    
   }

   static void retransmit_delay_attempts( uint8_t d, uint8_t n ){
      write( reg::setup_retr, ( n & 0x0F ) | (( d & 0x0F ) << 4 ));
   }

   static void lna_high(){
      uint8_t val = read( reg::setup ); 
      val |= 0x01;
      write( reg::setup, val ); 
   }

   static void lna_low(){
      uint8_t val = read( reg::setup ); 
      val &= 0xFE;
      write( reg::setup, val ); 
   }

   static void power( uint8_t level ){
      level = std::max( level, (uint8_t) 3 );
      ce::set( 0 );
      uint8_t val = read( reg::setup ); 
      val &= 0xF9; 
      val |= ( level << 1 );
      write( reg::setup, val ); 
      ce::set( 1 );
   }

   static void channel_payload_size( uint8_t channel, uint8_t size ){
      size = std::max( size, (uint8_t) 32 );
      uint8_t val = read( reg::dynpd );  
      if( size == 0 ){
         val |= 1 << channel;
      } else {
         val &= ~ ( 1 << channel );
      }    
      write( reg::dynpd, val );
      write( reg::rx_pw_p0 + channel, size );  
   }

   template< size_t n >
   static void transmit_message( std::array< uint8_t, n > data ){
      write( cmd::w_tx_payload, data );
   }
   
   template< size_t n >
   static void transmit_message_once( std::array< uint8_t, n > data ){
      write( cmd::w_tx_payload_noack, data );
   }
    
   static uint_fast8_t receive_next_pipe(){
      uint_fast8_t status = read( reg::status ); 
      return ( status >> 1 ) & 0x07;
   }

   static uint_fast8_t receive_next_length(){
      return read( cmd::r_rx_pl_wid );
   }

// ========== high-level (use cases) interface

   static void mode_receive(){
   
      // flush receive queue 
      write( cmd::flush_tx );
      interrupts_clear();
   
      // switch to receive mode
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value |= 0x01; // set RX bit
      value |= 0x02; // set PWR_UP bit
      write( reg::config, value );
      ce::set( 1 );
   }

   static void mode_transmit(){
   
      // flush transmit queue
      write( cmd::flush_rx );
      interrupts_clear();
   
      // switch to transmit mode
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value &= 0xFE; // clear RX bit
      value |= 0x02; // set PWR_UP bit
      write( reg::config, value );
      ce::set( 1 );
   }

   static void mode_standby(){
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value |= 0x02; // set PWR_UP bit
      write( reg::config, value );
   }

   static void mode_powerdown(){
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value &= 0xFD; // clear PWR_UP bit
      write( reg::config, value );
   }

   struct configuration {
      uint_fast8_t channel;
      uint_fast8_t air_data_rate;
      uint_fast8_t crc_length;
      uint_fast8_t address_length;
      std::array< uint8_t, 5 > rxa_p0;
      std::array< uint8_t, 5 > rxa_p1;
      std::array< uint8_t, 4 > rxa_p2345;
      std::array< bool, 6 > rxa_auto_ack;
      std::array< bool, 6 > rxa_variable_length;
   };

   template< size_t n >
   static bool receive(
      uint8_t & pipe,
      std::array< uint8_t, n > & buf,
      uint8_t & length = n
   ){
      uint8_t p = receive_next_pipe();
      if( p == 0x07 ){
         return 0;
      }   
      pipe = p;
      length = receive_next_length();
      read( cmd::r_rx_payload, buf, length );
      return 1;
   }


}; //struct nrf24l01