// ==========================================================================
//
// file : hwcpp-demos.hpp
//
// ==========================================================================

template< can_pin_out pin, is_duration interval >
[[noreturn]] void HWCPP_INLINE blink(){
   using led = pin_out< pin >;    
   led::init();
   interval::init();
   for(;;){    
      led::set( 1 );
      interval::wait(); 
      led::set( 0 );
      interval::wait();  
   }
}

template< can_pin_out pin, is_duration interval_high, is_duration interval_low >
[[noreturn]] void HWCPP_INLINE blink(){
   using led = pin_out< pin >;    
   led::init();
   interval_high::init();
   interval_low::init();
   for(;;){    
      led::set( 1 );
	  interval_high::wait(); 
      led::set( 0 );
      interval_low::wait();  
   }
}

template< can_port_out _port, is_duration interval >
[[noreturn]] void HWCPP_INLINE walk(){
   using port = hwcpp::port_out< _port >;	
   port::init();
   interval::init();
   for(;;){
      for( uint_fast8_t  i = 0; i < port::n_pins; ++i ){
         port::set( (typename port::value_type) ( 0x01 << i ) );      
         interval::wait(); 
      }
   }      
}

template< can_port_out _port, is_duration interval >
[[noreturn]] void HWCPP_INLINE kitt(){
   using port = hwcpp::port_out< _port >;	
   port::init();
   interval::init();
   for(;;){
      for( uint_fast8_t  i = 0; i < port::n_pins; ++i ){
         port::set( (typename port::value_type) ( 0x01 << i ) );      
         interval::wait(); 
      }
      for( uint_fast8_t  i = port::n_pins - 2; i > 0; --i ){
         port::set( (typename port::value_type) ( 0x01 << i ) );      
         interval::wait(); 
      }
   }      
}