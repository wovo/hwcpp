#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::timing;
using pin = target::d54;
   
void servo( int us ){
   pin::set( 1 );
   timing::wait_us( us );
   pin::set( 0 );      
   timing::wait_us( 20'000 );
}

int main(){ 
   pin::init();
   pin::direction_set( hwcpp::pin_direction::output );
   for(;;){
      for( int t = 500; t < 2'500; t += 20 ){
         servo( t );   
      }
      for( int t = 2'500; t > 500; t -= 20 ){
         servo( t );   
      }
   }
   
}
