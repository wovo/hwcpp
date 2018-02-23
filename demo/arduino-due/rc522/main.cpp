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

void show_registers() {
   hwcpp::ostream< uart > cout;    
   cout << "cmd=" << hwcpp::hex << rfid::read( rfid::reg::CommandReg ) << "\n";
   cout << "irq=" << hwcpp::hex << rfid::read( rfid::reg::ComIrqReg ) << "\n";
   cout << "err=" << hwcpp::hex << rfid::read( rfid::reg::ErrorReg ) << "\n";
   cout << "fif=" << hwcpp::hex << rfid::read( rfid::reg::FIFOLevelReg ) << "\n"; 
}

void show_card(){
   hwcpp::ostream< uart > cout;    
   if(0) if( ! rfid::tag_present() ){
      cout << "no tag\n";
      return;
   }
   cout << "\ntag detected\n";
   
   std::array< uint8_t, 4 > id;
   if( ! rfid::tag_id_get( id ) ){
      cout << "get id failed\n";
      show_registers();
      return;
   }
   for( const auto d : id ){
      cout << hwcpp::hex << d << " ";
   }
   cout << "\n";   
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
         show_card();
      };
   } else {
      cout << "no chip\n";              
   }
}
