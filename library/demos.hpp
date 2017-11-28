// ============================================================================
//
// file : demos.hpp
//
// ============================================================================

void wait(){
   for( volatile int i = 0; i < 200'000; i++ ){} 
}

template< typename pin, typename interval >
void blink(){
   using led = hwcpp::pin_out< pin >;    
   led::init();
   interval::init();
   for(;;){    
      led::set( 1 );
      //wait();
	  interval::wait(); 
      led::set( 0 );
	  //wait();
      interval::wait(); 
   }
}