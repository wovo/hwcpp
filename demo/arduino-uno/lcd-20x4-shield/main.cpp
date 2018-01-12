#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using shield = hwcpp::shields::lcd_buttons< target, timing >;

int main( void ){

   shield::init();
   shield::backlight::set( 1 );

   shield::lcd::write( 
      "\fLine 1 ======== end.\n"
      "And line 2 likewise.\n"
      "This is line 3;\n"
      "And finally line 4!\n";
   );

}