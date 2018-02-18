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
// interface for an nRF24L01 transciever
//
// ==========================================================================

// quote ##rx-address-01 1
template< size_t n > concept bool range_1_5 = ( ( n >0 ) && ( n < 6 ) );

// quote ##transmit 1
template< size_t n > concept bool range_1_32 = ( ( n > 0 ) && ( n < 33 ) );

// quote ##cto 7
template<
   typename     _bus,    // the SPI bus (MOSI, MISO, SCK)
   can_pin_out  _ce,     // the CE (Chip Enable) pin
   can_pin_out  _csn,    // the SPI Chip Select (Negative) pin
   is_waiting   timing   // the timing service
>
struct nrf24l01_spi_ce_csn {

   // quote ##hw-interface 3
   using bus  = _bus;
   using ce   = pin_out< _ce >;
   using csn  = pin_out< _csn >;

   static void init(){
      bus::init();
      ce::init();
      csn::init();
      ce::set( 0 );
      csn::set( 1 );   
	  timing::init();
      timing:: template ms< 50 >::wait();     
   }
   
// ========== low-level (SPI commands & registers) interface
   
   // quote ##commands
   enum class cmd : uint8_t {
      read_reg           = 0x00, // read a register
      write_reg          = 0x20, // write a register
      r_rx_payload       = 0x61, // read a received payload
      w_tx_payload       = 0xa0, // write a payload to be sent
      flush_tx           = 0xe1, // empty the transmit queue
      flush_rx           = 0xe2, // empty the receive queue
      reuse_tx_pl        = 0xe3, // start continuous retransmission
      activate           = 0x50, // toggle extended functions
      r_rx_pl_wid        = 0x60, // read length of fifo head payload
      w_ack_payload      = 0xa8, // write payload to be transmitted with ack
      w_tx_payload_noack = 0xb0, // write payload to be sent without auto-ack
      nop                = 0xff  // no action, can be used to read the status
   };
   // quote ##commands

   // quote ##fcommand 1 
   static uint_fast8_t write( const cmd c ){
      const std::array< uint8_t, 1 >  write_data = { (uint8_t) c };
      std::array< uint8_t, 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );      
      return read_data[ 0 ];
   }

   // quote ##fcommand 1 
   static uint_fast8_t write( const cmd c, const uint8_t d ){
      const std::array< uint8_t, 2 >  write_data = { (uint8_t) c, d };
      std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
      return read_data[ 0 ];
   }

   // quote ##fcommand 2 
   template< range_1_32 n >
   static uint_fast8_t write( const cmd c, const std::array< uint8_t, n > & d ){
      std::array< uint8_t, n + 1 > write_data = { (uint8_t) c };
      for( uint_fast8_t i = 0; i < n; ++i ){
         write_data[ i + 1 ] = d[ i ];
      }   
      std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
      return read_data[ 0 ];
   }
   
   // quote ##read-write 1
   template< range_1_32 n >
   static void read( const cmd c, std::array< uint8_t, n > & d ){
      const std::array< uint8_t, n + 1 > write_data = { (uint8_t) c };
      std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
      for( uint_fast8_t i = 0; i < n; ++i ){
         d[ i ] = read_data[ i + 1 ];
      }   
   }

   // quote ##registers
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
   // quote ##registers

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

   // quote ##read-write 1
   static uint8_t read( const reg r ){
      const std::array< uint8_t, 2 > write_data = { 
         (uint8_t) ( (uint8_t) cmd::read_reg | (uint8_t) r ), 
         0 };
     std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );
     return read_data[ 1 ];
   }

   // quote ##read-write 2 
   template< size_t n >
   static void read( const reg r, std::array< uint8_t, n > & d ){
      std::array< uint8_t, n + 1 > write_data = {  
         (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ) };
      std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );      
      for( uint_fast8_t i = 0; i < n; ++i ){
         d[ i ] = read_data[ i + 1 ];
      }   
   }
   
   // quote ##read-write 1
   static void write( const reg r, uint8_t d ){
      const std::array< uint8_t, 2 >  write_data = {  
         (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ), 
         d };
      std::array< uint8_t, 2 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );      
   }

   // quote ##read-write 2 
   template< size_t n >
   static void write( const reg r, const std::array< uint8_t, n > & d ){
      std::array< uint8_t, n + 1 > write_data = {  
         (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ) };
      for( uint_fast8_t i = 0; i < n; ++i ){
         write_data[ i + 1 ] = d[ i ];
      }   
      std::array< uint8_t, n + 1 > read_data;
      bus:: template write_and_read< csn >( write_data, read_data );      
   }

// ========== mid-level (individual register fields) interface
 
   // ========= status register

   // quote ##status 1
   static uint_fast8_t status(){
      return write( cmd::nop );  
   }   
      
   // quote ##interrupts 1   
   static void interrupts_clear(){
      uint8_t value = read( reg::status );
      write( reg::status, value ); 
   }   
   
   // quote ##crc-length 2
   enum class crc { none, one_byte, two_bytes }; 
   static void configure( const crc x ){
      uint8_t val = read( reg::config );
      val &= 0xF3;
      if( x != crc::none ){
		 val |= 0x08;
         if( x == crc::two_bytes ){
            val |= 0x04; 
         }   
      }  
      write( reg::config, val );
   }

   // ========= en_aa register

   // quote ##pipe-autoack 1
   static void pipe_autoack( const bool enabled ){
      write( reg::en_aa, enabled ? 0x7F : 0x00  ); 
   }

   // quote ##pipe-autoack 1
   static void pipe_autoack( const uint8_t pipe, const bool enabled ){
      if( pipe <= 5 ){
	     uint8_t val = read( reg::en_aa ); 
         if( enabled ){
            val |= 1 << pipe;
         } else {
            val &= ~ ( 1 << pipe );
         }
         write( reg::en_aa, val ); 
      }
   }

   // ========= en_rx_rxaddr register
   
   // quote ##pipe-enable 1
   static void pipe_enable( const bool enabled ){
      write( reg::en_rxaddr, enabled ? 0x7F : 0x00  ); 	    
   }

   // quote ##pipe-enable 1
   static void pipe_enable( const uint8_t pipe, const bool enabled ){
      if( pipe <= 5 ){	   
      uint8_t val = read( reg::en_rxaddr ); 
         if( enabled ){
            val |= 1 << pipe;
         } else {
            val &= ~ ( 1 << pipe );
         }
         write( reg::en_rxaddr, val ); 
      }		 
   }
   
   // ========= setup_aw register

   // quote ##address-length 3
   enum class address_length : uint8_t{ 
      three_bytes = 1, four_bytes = 2, five_bytes = 3 };
   static void configure( const address_length x ){
      write( reg::setup_aw, (uint8_t) x  );   
   }

   // ========= setup_retr register
   
   // quote ##retransmit 2
   struct retransmission_attempts { uint8_t v; };
   static void configure( const retransmission_attempts x ){
      uint8_t value = read( reg::setup_retr );
      value &= 0xF0;
      value |= std::min( x.v, (uint8_t) 15 );
      write( reg::setup_retr, value  );	  
   }
   
   // quote ##retransmit 2
   struct retransmission_delay_250us { uint8_t v; };
   static void configure( const retransmission_delay_250us x ){
      uint8_t value = read( reg::setup_retr );
      value &= 0x0F;
      value |= std::min( (uint8_t) ( x.v - 1 ), (uint8_t) 15 ) << 4;
      write( reg::setup_retr, value  );	  
   }

   // ========= rf_ch register
   
   // quote ##channel 2
   struct channel { uint8_t v; };   
   static void configure( const channel ch ){
     // MSB must be 0
     write( reg::rf_ch, std::min( ch.v, (uint8_t) 0x7F ));
   }   

   // ========= rf_setup register
   
   // quote ##air-data-rate 2
   enum class rate { r1Mb, r2Mb };
   static void configure( rate x ){
      uint8_t value = read( reg::rf_setup );
      value &= 0xF7;
      if( x == rate::r2Mb ){
         value |= 0x08;  
      }
      write( reg::rf_setup, value );
   }
   
   // quote ##power 2
   enum class power :uint8_t { p_18dbm = 0, p_12dbm = 1, p_6dbm = 2, p_0dbm = 3 };   
   static void configure( const power v ){
      uint8_t val = read( reg::rf_setup ); 
      val &= 0xF9; 
      val |= ( (uint8_t) v << 1 );
      write( reg::rf_setup, val ); 
   }

   // quote ##lna 2
   enum class lna { low, high };
   static void configure( const lna v ){
      uint8_t val = read( reg::rf_setup ); 
      if( v == lna::low ){ 
         val &= 0xFE; 
      } else { 
         val |= 0x01; 
      }
      write( reg::rf_setup, val ); 
   }

   // ========= 
   
   // quote ##retransmit-count 1
   static uint_fast8_t retransmitted_packets_count(){
      return read( reg::observe_tx ) & 0x0F;   
   }

   // quote ##lost-packets-count 1
   static uint_fast8_t lost_packets_count(){
      return ( read( reg::observe_tx ) >> 4 ) & 0x0F;   
   }

   // quote ##lost-packets-reset 1
   static void lost_packets_reset(){
      uint8_t val = read( reg::rf_ch );  
      write( reg::rf_ch, val );    
   }
   
   // ========= 

   

   // quote ##tx-fifo-full 1
   static bool transmit_fifo_full(){
      uint8_t s = read( reg::fifo_status );
      return ( s & fifo_status_tx_full ) != 0;
   }
    
   // quote ##rx-fifo-empty 1
   static bool receive_fifo_empty(){
      uint8_t s = read( reg::fifo_status );
      return ( s & fifo_status_rx_empty ) != 0;
   }

   // quote ##rx-address-01 2
   template< range_1_5 n >
   static void receive_address_p0( const std::array< uint8_t, n > address ){
      write( reg::rx_addr_p0, address );  
   }

   // quote ##rx-address-01 2
   template< range_1_5 n >
   static void receive_address_p1( const std::array< uint8_t, n > address ){
      write( reg::rx_addr_p1, address );  
   }

   // quote ##rx-address-n 1
   static void receive_address_pn( uint8_t channel, uint8_t address ){
      write( reg::rx_addr_p0 + channel, address ); 
   }

   // quote ##tx-address 2
   template< range_1_5 n >
   static void transmit_address( const std::array< uint8_t, n > address ){
      write( reg::tx_addr, address );   
   } 



/*
- needs enaa_x
- needs feature eanbled
   static void channel_payload_size( uint8_t channel, uint8_t size ){
      size = std::min( size, (uint8_t) 32 );
      uint8_t val = read( reg::dynpd );  
      if( size == 0 ){
         val |= 1 << channel;
      } else {
         val &= ~ ( 1 << channel );
      }    
      write( reg::dynpd, val );
      write( reg::rx_pw_p0 + channel, size );  
   }
*/

   // quote ##next-pipe 1
   static uint_fast8_t receive_next_pipe(){
      uint_fast8_t status = read( reg::status ); 
      return ( status >> 1 ) & 0x07;
   }

   // quote ##next-length 1
   static uint_fast8_t receive_next_length(){
      return write( cmd::r_rx_pl_wid );
   }

   // quote ##transmit 2
   template< range_1_32 n >
   static void transmit_message( std::array< uint8_t, n > data ){
      write( cmd::w_tx_payload, data );
   }
   
   // quote ##transmit 2
   template< range_1_32 n >
   static void transmit_message_once( std::array< uint8_t, n > data ){
      write( cmd::w_tx_payload_noack, data );
   }
   
      // quote ##extensions 1
   static void extensions_toggle(){
      (void) write( cmd::activate, 0x73 );             
   }
   

    
// ========== high-level (use cases) interface

   // quote ##modes 1
   static void mode_receive(){
   
      // flush receive queue 
      write( cmd::flush_rx );
      interrupts_clear();
   
      // switch to receive mode
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value |= 0x01; // set RX bit
      value |= 0x02; // set PWR_UP bit
      write( reg::config, value );
      ce::set( 1 );
   }

   // quote ##modes 1
   static void mode_transmit(){
   
      // flush transmit queue
      write( cmd::flush_tx );
      interrupts_clear();
   
      // switch to transmit mode
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value &= 0xFE; // clear RX bit
      value |= 0x02; // set PWR_UP bit
      write( reg::config, value );
      ce::set( 1 );
   }

   // quote ##modes 1
   static void mode_standby(){
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value |= 0x02; // set PWR_UP
      write( reg::config, value );
   }

   // quote ##modes 1
   static void mode_powerdown(){
      ce::set( 0 );
      uint8_t value = read( reg::config );
      value &= 0xFD; // clear PWR_UP bit
      write( reg::config, value );
   }

   // quote ##air-configuration 8
   struct air_configuration {
      channel         ch;
      rate            adr;
      crc             c;
      power           pwr;
      lna             l;
      address_length  al;
   };

   // quote ##air-configuration 1
   static void configure( const air_configuration conf ){
      ce::set( 0 );      
      configure( conf.ch );
      configure( conf.adr );
      configure( conf.c );
      configure( conf.pwr );
      configure( conf.l );
      configure( conf.al );
	  ce::set( 1 );
   }

   struct configuration {
      std::array< uint8_t, 5 > rxa_p0;
      std::array< uint8_t, 5 > rxa_p1;
      std::array< uint8_t, 4 > rxa_p2345;
      std::array< bool, 6 > rxa_auto_ack;
      std::array< bool, 6 > rxa_variable_length;
   };

   // quote ##receive 6
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
      length = std::min( length, (uint8_t) n );
      read( cmd::r_rx_payload, buf ); // length??
      return 1;
   }


}; //struct nrf24l01