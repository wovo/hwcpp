#include "hwcpp.hpp"

void wait( int n ){
   for( volatile int i = 0; i < n; i++ ){} 
}

template< typename pin >
void blink(){
   using led = hwcpp::pin_out< pin >;    
   led::init();
   for(;;){    
      led::set( 1 );
      wait(  50'000 );  
      led::set( 0 );
      wait( 200'000 );
   }
}

int main(){ 
   blink< hwcpp::target::led >();
}