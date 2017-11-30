// ============================================================================
//
// file : demos.hpp
//
// ============================================================================

template< typename pin, is_interval interval >
void blink(){
   using led = hwcpp::pin_out< pin >;    
   led::init();
   interval::init();
   for(;;){    
      led::set( 1 );
	  interval::wait(); 
      led::set( 0 );
      interval::wait();  
   }
}

template< typename arg_port, is_interval interval >
void kitt(){
   using port = hwcpp::port_out< arg_port >;	
   port::init();
   interval::init();
   for(;;){
      for( uint_fast8_t  i = 0; i < port::n_pins; ++i ){
         port::set_direct( 0x01 << i );      
         interval::wait(); 
      }
      for( uint_fast8_t  i = port::n_pins - 2; i > 0; --i ){
         port::set_direct( 0x01 << i );      
         interval::wait(); 
      }
   }      
}