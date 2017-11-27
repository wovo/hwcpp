#include "hwcpp.hpp"

using target = hwcpp::target<>;

void wait( long long int n ){
   for( volatile long long int i = 0; i < 50'000; i++ ){} 
}

template< typename pin >
void blink(){
   using led = hwcpp::pin_out< pin >;    
   led::init();
   for(;;){    
      led::set( 1 );
      wait( 50'00 );  
      led::set( 0 );
      wait( 50'00 );
   }
}

int main(){ 
   blink< target::led >();
}