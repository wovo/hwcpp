// ==========================================================================
//
// file : hwcpp-rc522.hpp
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
// interface for an rc522 RFID reader
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
      Idle              = 0x00,
      Mem               = 0x01,
      GenerateRandomID  = 0x02,
      CalcCRC           = 0x03,
      Transmit          = 0x04,
      NoCmdChange       = 0x07,
      Receive           = 0x08,
      Transceive        = 0x0C,
      MFAuthent         = 0x0E,
      SoftReset         = 0x0F
   };
   // quote ##commands   

   template< size_t n >
   static void read( reg r, std::array< uint8_t, n > & data ){
      std::array< uint8_t, n + 1 > output;
      std::array< uint8_t, n + 1 > input = { 42 };
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
   
   // ==========
   
   static uint8_t last_command(){
      return read( reg::CommandReg ) & 0x0F;
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
   
   static void generate_random_id( std::array< uint8_t, 10 > & output ){
      write( cmd::Idle );
      timing:: template ms< 50 >::wait();  
      write( cmd::GenerateRandomID );
      timing:: template ms< 50 >::wait();  
      write( cmd::Mem );
      timing:: template ms< 50 >::wait();  
      read( reg::FIFODataReg, output ); 
   }
   
   template< size_t n, size_t m >
   static bool communicate(
      cmd command,
      const std::array< uint8_t, n > & output,
      std::array< uint8_t, m > & input                     
   ){
 
      write( cmd::Idle );
      write( reg::FIFOLevelReg, 0x80 );
      //write( reg::FIFODataReg, output );
      //write( reg::BitFramingReg, command == cmd::Transceive ? 0x87 : 0x07 );
      //write( reg::CollReg, 0x00 );  
      //write( reg::ComIrqReg, 0x7F );              
      //write( command );
      write( cmd::GenerateRandomID );
      
      timing:: template ms< 50 >::wait();  
        
      (void)command;
      (void)input;
      (void)output;

/*
        if(0) for (int i = 2000; i > 0;) {
            n = read( reg::ComIrqReg );
            if (n & waitIRq ) {
                break;
            }
            if (n & 0x01 ) {
                return 0;
            }
            if (--i == 0 ) {
                return 0;
            }
        }
*/
        
//        auto errorRegValue = read( reg::ErrorReg );
//        if (errorRegValue & 0x13) {
//            return false;
//        }

/*
        if (backData && backLen) {
            n = ReadReg(FIFOLevelReg);
            if (n > *backLen || n == 0) {
                return 0;
            }
            *backLen = n;
            ReadReg(FIFODataReg, n, backData);
            _validBits = (byte) (ReadReg(ControlReg) & 0x07);
            if (validBits) {
                *validBits = _validBits;
            }
        }

        if (errorRegValue & 0x08) {
            return 0;
        }

        if (backData && backLen && checkCRC) {
            byte controlBuffer[2];
            if (!calculate_crc(&backData[0], (byte) (*backLen - 2), &controlBuffer[0])) {
                return 0;
            }
            if ((backData[*backLen - 2] != controlBuffer[0]) || (backData[*backLen - 1] != controlBuffer[1])) {
                return 0;
            }
        }
*/
        return true;
    }   
   
   static bool tag_present() {
        //byte buffer[2];
        //byte len = sizeof(buffer);
        //byte validBits = 7;

        std::array< uint8_t, 1 > output = { 0x26 };
        std::array< uint8_t, 2 > input = { 0x26 };
        if( !communicate( cmd::Transceive, output, input ) ){
            return false;
        }
        //if( len != 2 || validBits != 0 ) {
        //    return 0;
        //}
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

      write( reg::TModeReg, 0x80 );
      write( reg::TPrescalerReg, 0x9A );
      write( reg::TReloadRegH, 0x03 );
      write( reg::TReloadRegL, 0xE8 );
      write( reg::TxASKReg, 0x40 );
      write( reg::ModeReg, 0x3D );

      //auto value = read( TxControlReg );
      //if ((value & 0x03) != 0x03) {
      //   SetBitMask(TxControlReg, 0x03);
      //}   
   }

}; //struct rc522_spi_ss_rst