#include "hwcpp.hpp"

using target = hwcpp::target<>;
using sw     = hwcpp::pin_in< target::d7 >;
using led    = target::led;

int main(){ 
   hwcpp::ostream< target::uart > cout;    
   led::init();
   sw::init();
   for(;;){
      if( sw::get() ){
         cout << "1\n";
      } else { 
         cout << "0\n";
      }
       
      led::set( sw::get() );
   }
}