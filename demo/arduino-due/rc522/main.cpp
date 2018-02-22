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

void show_random_id(){
   hwcpp::ostream< uart > cout;    
   std::array< uint8_t, 10 > id = { 0 };
   rfid::generate_random_id( id );
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
   
   cout << "cmd=" << hwcpp::hex << rfid::read( rfid::reg::CommandReg ) << "\n";
   cout << "int=" << hwcpp::hex << rfid::read( rfid::reg::ComIrqReg ) << "\n";
   cout << "err=" << hwcpp::hex << rfid::read( rfid::reg::ErrorReg ) << "\n";
   cout << "fif=" << hwcpp::hex << rfid::read( rfid::reg::FIFOLevelReg ) << "\n";
   
} 

int main(){ 
   hwcpp::ostream< uart > cout;
   timing::init();
   timing::ms< 1'000 >::wait(); 
   rfid::init();
   
   cout << "RC522 RFID demo\n";
   if( rfid::present() ){
      cout << "chip detected\n";   
      for(;;){
         timing::ms< 1'000 >::wait();
         show_random_id();
         show_card();
      };
   } else {
      cout << "no chip\n";              
   }
}
