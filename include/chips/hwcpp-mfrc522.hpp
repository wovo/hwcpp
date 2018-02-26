// ==========================================================================
//
// file : hwcpp-mfrc522.hpp
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
// interface for an mfrc522 RFID reader
//
// ==========================================================================

// quote ##rx-address-01 1
template< size_t n > concept bool range_1_5 = ( ( n >0 ) && ( n < 6 ) );

// quote ##transmit 1
template< size_t n > concept bool range_1_32 = ( ( n > 0 ) && ( n < 33 ) );

// quote ##cto 7
template<
   typename     _bus,    // the SPI bus (MOSI, MISO, SCK)
   can_pin_out  _csn,    // the SPI Chip Select (Negative) pin
   can_pin_out  _rst,    // the reset pin
   is_waiting   timing   // the timing service
>
struct rc522_spi_ss_rst {

   // quote ##hw-interface 3
   using bus   = _bus;
   using cs    = invert< pin_out< _csn >>;
   using rst   = pin_out< _rst >;
   
   // quote ##registers
   enum class reg : uint8_t {
      CommandReg         = 0x01,
      ComIEnReg          = 0x02,
      DivIEnReg          = 0x03,
      ComIrqReg          = 0x04,
      DivIrqReg          = 0x05,
      ErrorReg           = 0x06,
      Status1Reg         = 0x07,
      Status2Reg         = 0x08,
      FIFODataReg        = 0x09,
      FIFOLevelReg       = 0x0A,
      WaterLevelReg      = 0x0B,
      ControlReg         = 0x0C,
      BitFramingReg      = 0x0D,
      CollReg            = 0x0E,

      ModeReg            = 0x11,
      TxModeReg          = 0x12,
      RxModeReg          = 0x13,
      TxControlReg       = 0x14,
      TxASKReg           = 0x15,
      TxSelReg           = 0x16,
      RxSelReg           = 0x17,
      RxThresholdReg     = 0x18,
      DemodReg           = 0x19,
      MfTxReg            = 0x1C,
      MfRxReg            = 0x1D,
      SerialSpeedReg     = 0x1F,

      CRCResultRegH      = 0x21,
      CRCResultRegL      = 0x22,
      ModWidthReg        = 0x24,
      RFCfgReg           = 0x26,
      GsNReg             = 0x27,
      CWGsPReg           = 0x28,
      ModGsPReg          = 0x29,
      TModeReg           = 0x2A,
      TPrescalerReg      = 0x2B,
      TReloadRegH        = 0x2C,
      TReloadRegL        = 0x2D,
      TCounterValueRegH  = 0x2E,
      TCounterValueRegL  = 0x2F,

      TestSel1Reg        = 0x31,
      TestSel2Reg        = 0x32,
      TestPinEnReg       = 0x33,
      TestPinValueReg    = 0x34,
      TestBusReg         = 0x35,
      AutoTestReg        = 0x36,
      VersionReg         = 0x37,
      AnalogTestReg      = 0x38,
      TestDAC1Reg        = 0x39,
      TestDAC2Reg        = 0x3A,
      TestADCReg         = 0x3B
   };
   // quote ##registers
   
   // quote ##commands
   enum class cmd : uint8_t {
      Idle               = 0x00,
      Mem                = 0x01,
      GenerateRandomID   = 0x02,
      CalcCRC            = 0x03,
      Transmit           = 0x04,
      NoCmdChange        = 0x07,
      Receive            = 0x08,
      Transceive         = 0x0C,
      MFAuthent          = 0x0E,
      SoftReset          = 0x0F
   };
   // quote ##commands   
   
   // quote ##mifare-commands
   enum class mcmd : uint8_t {
      REQA               = 0x26,
      WUPA               = 0x52,
      CT                 = 0x88,
      SEL_CL1            = 0x93,
      SEL_CL2            = 0x95,
      SEL_CL3            = 0x97,
      HLTA               = 0x50,
      MF_AUTH_KEY_A      = 0x60,
      MF_AUTH_KEY_B      = 0x61,
      MF_READ            = 0x30,
      MF_WRITE           = 0xA0,
      MF_DECREMENT       = 0xC0,
      MF_INCREMENT       = 0xC1,
      MF_RESTORE         = 0xC2,
      MF_TRANSFER        = 0xB0,
      UL_WRITE           = 0xA2 
   };
   // quote ##mifaire-commands   	

   // ========== register and (raw) command interface   

   template< size_t n >
   static void read( reg r, std::array< uint8_t, n > & data ){
      std::array< uint8_t, n + 1 > output;
      std::array< uint8_t, n + 1 > input;
      for( unsigned int i = 0; i < n; i++ ){
         output[ i ] = (uint8_t) ( 0x80 | ( (uint8_t) r << 1));
      }
      output[ n ] = 0x00;
      cs::set( 1 );
      bus::write_and_read( output, input );
      cs::set( 0 );
      for( unsigned int i = 0; i < n; i++ ){
         data[ i ] = input[ i + 1 ];
      }
   }

   static uint8_t read( reg r ){
      std::array< uint8_t, 1 > input; 
      read( r, input );
      return input[ 0 ];
   }

   template< size_t n >
   static void write( reg r, const std::array< uint8_t, n > & data ) {
       std::array< uint8_t, n + 1 > output;
       std::array< uint8_t, n + 1 > input;
       output[ 0 ] = (uint8_t)( (uint8_t) r << 1 );
       for( unsigned int i = 0; i < n; i++ ){
          output[ i + 1 ] = data[ i ];
       }
       cs::set( 1 );
       bus::write_and_read( output, input );
       cs::set( 0 );
   }

   static void write( reg r, uint8_t d ){
      const std::array< uint8_t, 1 > output = { d };
      write( r, output );
   }

   static void write( cmd d ){
      write( reg::CommandReg, (uint8_t) d );        
   }
   
   // ========== simple functions 
   
   static void start( cmd command ){
      write( command );
      if( command == cmd::Transceive ){
          write( 
		     reg::BitFramingReg, 
		     read( reg::BitFramingReg ) | 0x80 );
      }	   
   }
    
   static uint8_t last_command(){
      return read( reg::CommandReg ) & 0x0F;
   }
   
   static void fifo_clear(){
      write( reg::FIFOLevelReg, 0x80 );
   }
  
   static uint8_t fifo_size(){
      return read( reg::FIFOLevelReg ) & 0x7F;
   }
  
   template< size_t n >
   static void fifo_read( buffer< uint8_t, n > & data ){
      data.clear();	   
	  while( fifo_size() > 0 ){
         data.append( read( reg::FIFODataReg ));
      }	 
   }
   
   template< size_t n >
   static void fifo_write( const std::array< uint8_t, n > & data ){
      fifo_clear();
      write( reg::FIFODataReg, data );
   }
   
   static void fifo_write( uint8_t data ){
      fifo_clear();
      write( reg::FIFODataReg, data );
   }
    
   uint16_t calculate_crc(){
      start( cmd::CalcCRC );     
      timing:: template ms< 1 >::wait();
	  return 
	     ( read( reg::CRCResultRegH ) << 8 ) 
		 | read( reg::CRCResultRegL );	   
   }	   

   template< size_t n >   
   uint16_t calculate_crc( const std::array< uint8_t, n > & data ){
      fifo_write( data );
      return calculate_crc();	  
   }	   
   
   static void antenna_on(){
	   write( reg::TxControlReg, read( reg::TxControlReg ) | 0x03 );
   }	   
   
   static void antenna_off(){
	   write( reg::TxControlReg, read( reg::TxControlReg ) & ~ 0x03 );
   }	     
   
   static bool present(){
      write( cmd::Idle );
      if( last_command() != (uint8_t) cmd::Idle ){ 
         return false; 
      }
      write( cmd::GenerateRandomID );
      if( last_command() != (uint8_t) cmd::GenerateRandomID ){ 
         return false; 
      }
      write( cmd::NoCmdChange );
      if( last_command() != (uint8_t) cmd::GenerateRandomID ){ 
         return false; 
      }
      return true;
   }
   
   // ========== mifare functions   

   template< size_t n >
   static bool mifare( 
      const std::array< uint8_t, n > & output 
   ){
	    
      write( cmd::Idle );
      fifo_write( output );
      write( reg::CollReg, 0x00 );  
      write( reg::ComIrqReg, 0x7F );              
      start( cmd::Transceive );     
      timing:: template ms< 1 >::wait();  

	  // nothing received
      //if( ! ( read( reg::ComIrqReg ) & 0x20 )){ return false; }

      // some error
      //if( ( read( reg::ErrorReg ) & 0x13 ) != 0x00 ){ return false; }

      return true;
   }   

   template< size_t n >
   static bool mifare( mcmd command ){
      const std::array< uint8_t, n > output = { (uint8_t) command };
	  return mifare( output );
   }	  
   
   template< size_t n, size_t m >
   static bool mifare( 
      const std::array< uint8_t, n > & output, 
      buffer< uint8_t, m > & input 
   ){
      if( ! mifare( output ) ){  return false; }
      fifo_read( input );
      return true;
   }   

   template< size_t m >
   static bool mifare( 
      mcmd command, 
      buffer< uint8_t, m > & input 
   ){
      const std::array< uint8_t, 1 > output = { (uint8_t) command };
      return mifare( output, input );
   }   

   // ========== high-level functions   

   static bool new_card_present() {
      buffer< uint8_t, 3 > result;
      write( reg::BitFramingReg, 0x07 );
      if( !mifare( mcmd::REQA, result )){ return false; }
	  if( result.size() != 2 ){ return false; }
	  if( ( read( reg::ControlReg ) & 0x07 ) != 0 ){ return false; }
      return true;
   }
   
   static inline std::array< uint8_t, 4 > card_uid;
   
   static bool select_card(){
      std::array< uint8_t, 2 > output = { (uint8_t) mcmd::SEL_CL1, 2 << 4 };	   
      buffer< uint8_t, 5 > result;
      write( reg::BitFramingReg, 0x00 );
	  
      if( !mifare( output, result )){ return false; }
	  if( result.size() != 5 ){ return false; }
	  if( ( read( reg::ControlReg ) & 0x07 ) != 0 ){ return false; }
	  for( unsigned int i = 0; i < 4; ++i ){
         card_uid[ i ] = result[ i ];
      }		 
      return true;      	   
   }
   
   static void soft_reset() {
      write( cmd::SoftReset );
      timing:: template us< 50 >::wait();
      while( ( read( reg::CommandReg ) & 0x08 ) != 0 ) {}
   }    

   static void init(){
	  timing::init();
      bus::init();
      rst::init();
      cs::init();
      
      cs::set( 0 );
      rst::set( 0 );
      timing:: template ms< 50 >::wait();     
      rst::set( 1 ); // edge causes the chip to reset
      timing:: template ms< 50 >::wait(); 
      soft_reset(); 
	  
	  write( reg::TxModeReg,      0x00 );
	  write( reg::RxModeReg,      0x00 );
	  write( reg::ModWidthReg,    0x26 );	  
      write( reg::TModeReg,       0x8D );
      write( reg::TPrescalerReg,  0x3E );
      write( reg::TReloadRegH,    0x00 );
      write( reg::TReloadRegL,      30 );
      write( reg::TxASKReg,       0x40 );
      write( reg::ModeReg,        0x3D );
      write( reg::RFCfgReg,       0x40 );
      write( reg::TxControlReg,   0x83 ); 
	  	  
   }

}; //struct rc522_spi_ss_rst