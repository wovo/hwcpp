// ==========================================================================
//
// file : hwcpp-nrf24l01.hpp
//
// ==========================================================================

template<
   typename bus,
   can_pin_out  _ce,
   can_pin_out  _csn,
   is_waiting   timing
>
struct nrf24l01_spi_ce_csn {

   using ce  = pin_out< _ce >;
   using csn = pin_out< _csn >;
   
   // ========== low-level (SPI & register) interface
   
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
      nop                = 0xff  // can be used to read the status
   };

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
      tx_addr            = 0x10, // tranmsit adress, 5 bytes
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

   static void register_write( reg r, uint8_t d ){
      uint8_t write_data[ 2 ] = { (uint8_t) ( (uint8_t) cmd::write_reg | (uint8_t) r ), d };
	  uint8_t read_data[ 2 ];
      bus:: template write_and_read< csn >( write_data, read_data, 2 );	   
   }

   static uint8_t register_read( reg r ){
      uint8_t write_data[] = { (uint8_t) ( (uint8_t) cmd::read_reg | (uint8_t) r ), 0 };
	  uint8_t read_data[ 2 ];
      bus:: template write_and_read< csn >( write_data, read_data, 2 );
	  return read_data[ 1 ];
   }
   
   // ========== higher-level interface
   
   static void extensions_toggle(){
      uint8_t write_data[] = { (uint8_t) cmd::activate, 0x73 };
	  uint8_t read_data[ 2 ];
      bus::template write_and_read< csn >( write_data, read_data, 2 );	   
   }
   
   static uint8_t status_read(){
      uint8_t write_data[] = { (uint8_t) cmd::nop };
	  uint8_t read_data[ 1 ];
      bus:: template write_and_read< csn >( write_data, read_data, 1 );
      return read_data[ 0 ];
   }   
   
   static bool extensions_activated(){
      return status_read() != 0;	
   }
   
   static bool is_present(){
      return true;       
   }
   
   // ========== init
   
   static void init(){
      bus::init();
      ce::init();
      csn::init();
      ce::set( 0 );
      csn::set( 1 );	
      timing:: template ms< 50 >::wait();	  
   }

}; //struct nrf24l01