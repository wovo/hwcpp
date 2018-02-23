#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;
using uart     = target::uart;

using spi = hwcpp::spi_bus_bb_sclk_miso_mosi<
   target::d13, 
   target::d12, 
   target::d11,
   timing
>;
using rfid = hwcpp::rc522_spi_ss_rst<
   spi,
   target::d10,
   target::d9,
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

void show_random_id(){
   hwcpp::ostream< uart > cout;    
   std::array< uint8_t, 10 > id = { 1,2,3,4,5,6,7,8,9,0 };
   rfid::generate_random_id( id );

   cout << "ver=" << hwcpp::hex << rfid::read( rfid::reg::VersionReg ) << "\n";
   cout << "cmd=" << hwcpp::hex << rfid::read( rfid::reg::CommandReg ) << "\n";
   cout << "int=" << hwcpp::hex << rfid::read( rfid::reg::ComIrqReg ) << "\n";
   cout << "err=" << hwcpp::hex << rfid::read( rfid::reg::ErrorReg ) << "\n";
   cout << "fif=" << hwcpp::hex << rfid::read( rfid::reg::FIFOLevelReg ) << "\n";
   
   for( auto x : id ){
      cout << hwcpp::hex << x << " ";
   }
   cout << "\n";
}

void show_card(){
   hwcpp::ostream< uart > cout;    
   if( ! rfid::tag_present() ){
      cout << "no tag\n";
      return;
   }
   cout << "\ntag detected\n";
   
   cout << "irq=" << hwcpp::hex << rfid::read( rfid::reg::ComIrqReg ) << "\n";
   cout << "ver=" << hwcpp::hex << rfid::read( rfid::reg::VersionReg ) << "\n";
   cout << "cmd=" << hwcpp::hex << rfid::read( rfid::reg::CommandReg ) << "\n";
   cout << "err=" << hwcpp::hex << rfid::read( rfid::reg::ErrorReg ) << "\n";
   cout << "fif=" << hwcpp::hex << rfid::read( rfid::reg::FIFOLevelReg ) << "\n";
   
} 

int main(){ 
   timing::init();
   timing::ms< 1000 >::wait();
   hwcpp::ostream< uart > cout;
   cout << "MFRC522 test\n";    
    
   rfid::init();
   
   cout << "\nversion register\n";
   cout 
      << "version= 0x" 
      << hwcpp::hex << rfid::read( rfid::reg::VersionReg ) 
      << "\n"; 
   
   cout << "\ncommand register\n";
   rfid::write( rfid::cmd::Idle ); 
   check( "Idle", 0x00, rfid::read( rfid::reg::CommandReg ) );   
   rfid::write( rfid::cmd::SoftReset ); 
   timing::ms< 50 >::wait();
   // causes analog parts to switch off
   check( "SoftReset", 0x20, rfid::read( rfid::reg::CommandReg ) );   
   rfid::write( rfid::cmd::NoCmdChange ); 
   timing::ms< 50 >::wait();
   // causes analog parts to switch on
   check( "NoCmdChange", 0x00, rfid::read( rfid::reg::CommandReg ) );   
   rfid::write( rfid::cmd::CalcCRC ); 
   check( "CalcCRC", 0x03, rfid::read( rfid::reg::CommandReg ) );   
   rfid::write( rfid::cmd::NoCmdChange ); 
   check( "NoCmdChange", 0x03, rfid::read( rfid::reg::CommandReg ) );   
   rfid::write( rfid::cmd::Idle ); 
   check( "NoCmdChange", 0x00, rfid::read( rfid::reg::CommandReg ) );   
   
   cout << "\nFIFO\n";   
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   check( "one", 0x01, rfid::read( rfid::reg::FIFOLevelReg ) );   
   check( "readback", 0xA1, rfid::read( rfid::reg::FIFODataReg ) );   
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xB2 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xC3 ); 
   check( "tree", 0x03, rfid::read( rfid::reg::FIFOLevelReg ) );   
   check( "readback", 0xA1, rfid::read( rfid::reg::FIFODataReg ) );   
   check( "readback", 0xB2, rfid::read( rfid::reg::FIFODataReg ) );   
   check( "readback", 0xC3, rfid::read( rfid::reg::FIFODataReg ) );   
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   
   cout << "\nFIFO - read multiple\n";   
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xB2 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xC3 ); 
   std::array< uint8_t, 3 > data3 = { 42, 42, 42 };
   check( "3", 0x03, rfid::read( rfid::reg::FIFOLevelReg ) );   
   rfid::read( rfid::reg::FIFODataReg, data3 ); 
   check( "0", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   check( "0", 0xA1, data3[ 0 ] );   
   check( "0", 0xB2, data3[ 1 ] );   
   check( "0", 0xC3, data3[ 2 ] );   
   
   cout << "\nFIFO - write multiple\n";   
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   std::array< uint8_t, 2 > data2 = { 42, 99 };
   rfid::write( rfid::reg::FIFODataReg, data2 ); 
   check( "readback", 42, rfid::read( rfid::reg::FIFODataReg ) );   
   check( "readback", 99, rfid::read( rfid::reg::FIFODataReg ) );  
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   
   cout << "\nWaterlevels\n";      
   rfid::write( rfid::reg::FIFOLevelReg, 0x00 ); 
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   rfid::write( rfid::reg::WaterLevelReg, 0x00 ); 
   check( "low", 0x21, rfid::read( rfid::reg::Status1Reg ) );   
   rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   check( "not low", 0x20, rfid::read( rfid::reg::Status1Reg ) );   
   rfid::write( rfid::reg::WaterLevelReg, 20 ); 
   for( int i = 0; i < 19; ++i ){
      rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   }
   check( "20", 20, rfid::read( rfid::reg::FIFOLevelReg ) );   
   check( "low", 0x21, rfid::read( rfid::reg::Status1Reg ) );   
   rfid::write( rfid::reg::FIFODataReg, 0xA1 );
   check( "not low", 0x20, rfid::read( rfid::reg::Status1Reg ) );   
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   check( "empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );   
   for( int i = 0; i < 43; ++i ){
      rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
      //check( "N", i + 1, rfid::read( rfid::reg::FIFOLevelReg ) );   
   }
   check( "43", 43, rfid::read( rfid::reg::FIFOLevelReg ) );   
   check( "none", 0x20, rfid::read( rfid::reg::Status1Reg ) );   
   rfid::write( rfid::reg::FIFODataReg, 0xA1 );
   check( "high", 0x22, rfid::read( rfid::reg::Status1Reg ) );   

   cout << "\nInterrupts\n";      
   rfid::write( rfid::reg::WaterLevelReg, 0x00 );
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   rfid::write( rfid::reg::FIFODataReg, 0xA1 ); 
   check( "high", 0x20, rfid::read( rfid::reg::Status1Reg ) );
   rfid::write( rfid::reg::ComIrqReg, 0x7F ); 
   check( "none", 0x00, rfid::read( rfid::reg::ComIrqReg ) );   
   rfid::write( rfid::reg::ComIrqReg, 0xFF ); 
   check( "all", 0x7F, rfid::read( rfid::reg::ComIrqReg ) );   
   rfid::write( rfid::reg::ComIrqReg, 0x7F ); 
   check( "none", 0x00, rfid::read( rfid::reg::ComIrqReg ) );   
   rfid::write( rfid::reg::FIFOLevelReg, 0x80 ); 
   check( "lo alert", 0x04, rfid::read( rfid::reg::ComIrqReg ) );   
 
   cout << "\nRandom\n";      
   rfid::write( rfid::cmd::GenerateRandomID ); 
   check( "generate running", 0x02, rfid::read( rfid::reg::CommandReg ) );   
   timing::ms< 1 >::wait();
   check( "generate done", 0x00, rfid::read( rfid::reg::CommandReg ) );   
   check( "fifo empty", 0x00, rfid::read( rfid::reg::FIFOLevelReg ) );      
   rfid::write( rfid::cmd::Mem ); 
   check( "mem done", 0x00, rfid::read( rfid::reg::CommandReg ) );   
   check( "fifo 25", 0x19, rfid::read( rfid::reg::FIFOLevelReg ) );      
   for( int i = 0; i < 5; ++i ){
      std::array< uint8_t, 10 > data;
      rfid::read( rfid::reg::FIFODataReg, data ); 
      for( auto x : data ){ cout << hwcpp::hex << x << " "; } cout << "\n";
      rfid::write( rfid::cmd::GenerateRandomID ); 
      timing::ms< 1 >::wait();
      rfid::write( rfid::reg::FIFOLevelReg, 0x80 );
      rfid::write( rfid::cmd::Mem );
   }
   
   cout << "\nerrors = " << hwcpp::dec << error_count << "\n";
}

