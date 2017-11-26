// ==========================================================================
//
// File      : pins.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


namespace hwcpp {

   // =======================================================================
   //
   // Pin archetypes
   //
   // =======================================================================
   
   struct pin_in_archetype {
      typedef void has_pin_in;
      static void init();
      static bool get();
   };
   
   struct pin_out_archetype {
      typedef void has_pin_out;
      static void init();
      static void set( bool value );
   };
   
   struct pin_in_out_archetype {
      typedef void has_pin_in_out;
      static void init();
      static void direction_set_input();
      static void direction_set_output();
      static bool get();
      static void set( bool value );
   };
   
   struct pin_oc_archetype {
      typedef void has_pin_oc;
      static void init();
      static bool get();
      static void set( bool value );
   };
   
   // =======================================================================
   //
   // Dummy
   //
   // This is an input/out pin implementation that does absolutely nothing.
   //
   // =======================================================================

   struct pin_in_out_dummy : 
      public pin_in_out_archetype
   {
      static void init(){}
      static bool get(){ return false; }
      static void set( bool ){}
      static void direction_set_input(){}
      static void direction_set_output(){}
   };
      
   
   // =======================================================================
   //
   // configurable pin pullups
   //
   // =======================================================================
   
   struct pin_configurable_pullup_archetype {
      typedef void has_pin_configurable_pullup;
      static void pullup_enable();
      static void pullup_disable();
      
   };

   // =======================================================================
   //
   // analog-to-digital conversion
   //
   // =======================================================================
   
   template< unsigned int n_bits >
   struct pin_ad_archetype {
      typedef void has_pin_ad;
      static constexpr int ad_bits = n_bits;  
      typedef typename uint_t< n_bits >::fast ad_value_type;      
      static constexpr ad_value_type ad_maximum = ( 1 << ( n_bits + 1 )) - 1;
      static void ad_init();
      static ad_value_type ad_get(); 
   };
   
   
   // =======================================================================
   //
   // digital-to-analog conversion
   //
   // =======================================================================
   
   template< unsigned int n_bits >
   struct pin_da_archetype {  
      typedef void has_pin_da;
      static constexpr int da_bits = n_bits;     
      typedef typename uint_t< n_bits >::fast da_value_type;      
      static constexpr da_value_type da_maximum = ( 1 << ( n_bits + 1 )) - 1;
      static void da_init();
      static void da_set( da_value_type n );       
   };   
   
   // =======================================================================
   //
   // Port archetypes
   //
   // =======================================================================
   
   template< int n >
   struct port_in_archetype {
      typedef void has_port_in;
      typedef typename uint_t< n >::fast value_type;      
      static constexpr int n_pins = n;
      static void init();
      static value_type get();
   };
   
   template< int n >
   struct port_out_archetype {
      typedef void has_port_out;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static void set( value_type x );
   };
   
   template< int n >
   struct port_in_out_archetype {
      typedef void has_port_in_out;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static void direction_set_input();
      static void direction_set_output();
      static value_type get();
      static void set( value_type value );
   };
   
   template< int n > 
   struct port_oc_archetype {
      typedef void has_port_oc;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static value_type get();
      static void set( value_type value );
   }; 
   
   
   // =======================================================================
   //
   // pin_in_from
   //
   // create a pin_in from the argument (if possible)
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > 
   struct pin_in_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "pin_in_from<> requires "
         "a pin_in, pin_in_out, or pin_oc" 
      );
   };
   
   // from itself: delegate
   template< class pin >
   struct pin_in_from < 
      pin, 
      typename pin::has_pin_in 
   > : 
      public pin_in_archetype 
   {
      static void init(){ pin::init(); }
      static bool get(){ return pin::get(); }
   };
   
   // from a pin_in_out: init sets the direction to input
   template< class pin >
   struct pin_in_from <  
      pin, 
      typename pin::has_pin_in_out
   > : 
      public pin_in_archetype 
   {
   
      static void init() {
         pin::init();
         pin::direction_set_input();
      }   
      
      static bool get() {
         return pin::get();
      }
   };
   
   // from a pin_oc: init sets the pin high
   template< class pin >
   struct pin_in_from <  
      pin, 
      typename pin::has_pin_oc
   > :
      public pin_in_archetype 
   {
   
      static void init(){
         pin::init();
         pin::set( 1 );
      }   
      
      static bool get(){
         return pin::get();
      }
   };
   
   
   // =======================================================================
   //
   // pin_out_from
   //
   // create a pin_out from the argument (if possible)
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported,
      class dummy = void
   > struct pin_out_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "pin_out_from<> requires "
         "a pin_out, pin_in_out, or pin_oc" 
      );
   };
   
   // from itself: delegate
   template< class pin >
   struct pin_out_from < 
      pin,
      typename pin::has_pin_out 
   > : 
      public pin_out_archetype
   {
      static void init(){ pin::init(); }
      static void set( bool x ){ pin::set( x ); }   
   };
   
   // from a pin_in_out: init sets the direction to output
   template< class pin >
   struct pin_out_from <  
      pin, 
      typename pin::has_pin_in_out
   > :
      public pin_out_archetype 
   {
   
      static void init(){
         pin::init();
         pin::direction_set_output();
      }   
   
      static void set( bool value ){
         pin::set( value );
      }
   
   };
   
   // from a pin_oc: delegate
   template< class pin >
   struct pin_out_from <  
      pin, 
      typename pin::has_pin_oc
   > : 
      public pin_out_archetype 
   {
   
      static void init(){
         pin::init();
      }   
   
      static void set( bool value ){
         pin::set( value );
      }
   
   };
   
   
   // =======================================================================
   //
   // pin_in_out_from
   //
   // create a pin_in_out from the argument (if possible)
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > struct pin_in_out_from{
      static_assert( 
         sizeof( unsupported ) == 0, 
         "pin_in_out_from<> requires "
         "a pin_in_out, or pin_oc" 
      );
   };
   
   // from itself: delegate
   template< class pin >
   struct pin_in_out_from < 
      pin, 
      typename pin::has_pin_in_out 
   > :
      public pin_in_out_archetype 
   {
      static void init(){ pin::init(); }
      static bool get(){ return pin::get(); }   
      static void set( bool x ){ pin::set( x ); }   
      static void direction_set_input(){ pin::direction_set_input(); }
      static void direction_set_output(){ pin::direction_set_output(); }
   };
   
   // from a pin_oc: init sets the direction to input
   template< class pin >
   struct pin_in_out_from <  
      pin, 
      typename pin::has_pin_oc
   > :
      public pin_in_out_archetype 
   {
   
      static void init(){
         pin::init();
      }
     
      static void direction_set_input(){
         // setting an open-collector pin high will
   	     // make it float
         pin::set( 1 );
      }
      
      static void direction_set_output(){
         // no need to do anything, setting the pin high
   	    // or low will do the real work
      }
      
      static void set( bool b ){
         pin::set( b );
      }
      
      static bool get(){
         return pin::get();
      } 
   
   };
   
   
   // =======================================================================
   //
   // pin_oc_from
   //
   // create a pin_oc from the argument (if possible)
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > struct pin_oc_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "pin_oc_from<> requires "
         "a pin_oc, or pin_in_out" 
      );
   };
   
   // from itself: delegate
   template< class pin >
   struct pin_oc_from < 
      pin, 
      typename pin::has_pin_oc 
   > :
      public pin_oc_archetype
   {
      static void init(){ pin::init(); }
      static bool get(){ return pin::get(); }   
      static void set( bool x ){ pin::set( x ); }   
   };
   
   // from a pin_in_out
   template< class pin >
   struct pin_oc_from <  
      pin, 
      typename pin::has_pin_in_out
   > :
      public pin_oc_archetype 
   {
   
      static void init(){
         pin::init();
      }
   
      static void set( bool x ){
      
         // to make a pin_in_out behave like a pin_oc
         if( x ){
   	  
   	       // make it float when it is set high
   	       pin::direction_set_input();
   		 
         } else {
   	  
   	       // make it output and low when it is set low
            pin::direction_set_output();
            pin::set( 0 );
         }		 
      }  	  
      
      static bool get(){
         return pin::get();
      }    
      
   };
   
   // =======================================================================
   //
   // Port archetypes
   //
   // =======================================================================
   
   template< int n >
   struct port_in {
      typedef void has_port_in;
      typedef typename uint_t< n >::fast value_type;      
      static constexpr int n_pins = n;
      static void init();
      static value_type get();
   };
   
   template< int n >
   struct port_out {
      typedef void has_port_out;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static void set( value_type x );
   };
   
   template< int n >
   struct port_in_out {
      typedef void has_port_in_out;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static void direction_set_input();
      static void direction_set_output();
      static value_type get();
      static void set( value_type value );
   };
   
   template< int n > 
   struct port_oc {
      typedef void has_port_oc;
      typedef typename uint_t< n >::fast value_type;
      static constexpr int n_pins = n;
      static void init();
      static value_type get();
      static void set( value_type value );
   }; 
   
   
   // =======================================================================
   //
   // All
   //
   // write to all argument pins, which must be valid for pin_out_from<>
   //
   // =======================================================================
   
   // fallback: compiler error
   template< 
      typename... arguments
   > 
   struct all {
      static_assert( 
         sizeof...( arguments ) == 0, 
         "all<> requires "
         "pin_out, pin_in_out, pin_oc, "
         "or corresponding ports" 
      );
   };
   
   // dummy: write to no pin
   template<>
   struct all<> : 
      public pin_out_archetype, 
      public port_out_archetype< 0 >
   {         
      static void init(){}
      static void set( bool b ){}
      // static void set( unsigned int x ){}
   };
   
   // write to one more pin
   template< 
      typename arg_pin, 
      typename... tail_args 
   >
   struct all< 
      arg_pin, 
      tail_args... 
   > :
      public pin_out_archetype 
   {
      
      typedef pin_out_from< arg_pin > pin;
   
      typedef all< tail_args... > tail;
   
      static void init(){
         pin::init();
         tail::init();
      }
      
      static void set( bool b ){
         pin::set( b );
         tail::set( b );   
      }   
   };   
   
   
   // =======================================================================
   //
   // Invert
   //
   // =======================================================================
   
   // fallback: compiler error
   template< 
      class unsupported, 
      class dummy = void 
   > struct invert {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "invert<> requires "
         "a pin_out, pin_in_out, pin_oc, "
         "or a corresponding port" 
      );
   };
   
   // fromm a pin_in: invert get()	
   template< 
      class pin 
   >
   struct invert< 
      pin, 
      typename pin::has_pin_in 
   > :
      public pin_in_archetype 
   {
      static void init(){ pin::init(); }
   
      static bool get(){
         return ! pin::get();	  
      }  
      
   };	
   
   // from a pin_out: invert set()
   template< 
      class pin 
   >
   struct invert< 
      pin, 
      typename pin::has_pin_out 
   > :
      public pin_out_archetype 
   {
      static void init(){ pin::init(); }

      static void set( bool x ){
         pin::set( ! x );	  
      }   
      
   };	
   
   // from a pin_in_out: invert get() and set()
   template< 
      class pin 
   >
   struct invert< 
      pin, 
      typename pin::has_pin_in_out
   > :
      public pin_in_out_archetype
   {
      static void init(){ pin::init(); }
      static void direction_set_input(){ pin::direction_set_input(); }
      static void direction_set_output(){ pin::direction_set_output(); }      

      static void set( bool x ){
         pin::set( ! x );	  
      }  
      
      static bool get(){
         return ! pin::get();	  
      }  
      
   };	
   
   // from a pin_oc: invert get() and set()
   template< 
      class pin 
   >
   struct invert< 
      pin, 
      typename pin::has_pin_oc
   > :
      public pin_oc_archetype 
   {
      static void init(){ pin::init(); }   
   
      static void set( bool x ){
         pin::set( ! x );	  
      }   
      
      static bool get(){
         return ! pin::get();	  
      } 
      
   };	   

   
   // =======================================================================
   //
   // debounce
   //
   // =======================================================================
   
   template< 
      class t, 
      class dummy = void 
   > struct debounce;
   
   
   // =======================================================================
   //
   // rising_edge
   //
   // report a 1 once for each (detected) rising edge
   //
   // =======================================================================
   
   // fallback: compiler error
   template< 
      class unsupported, 
      class dummy = void 
   > struct rising_edge {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "rising_edge<> requires a pin_in, pin_in_out, pin_oc, "
         "or a corresponding port" 
      );
   };
   
   // from a pin_in: remember the last value, return 1 iff a rising edge
   template< class pin >
   struct rising_edge< 
      pin, 
      typename pin::has_pin_in 
   > :
      public pin_in_archetype 
   {
      static void init(){ pin::init(); }

      static bool get(){
         bool current = pin::get();
         bool result = current && ! last;
         last = current;
         return result;
      }  
      
   private:
      static bool last;   
   };	   
   
   template< class pin >
      bool rising_edge< pin, typename pin::has_pin_in >::last = 0; 
   
   // from a pin_in_out: convert it to a pin_in
   template< class pin >
   struct rising_edge< 
      pin, 
      typename pin::has_pin_in_out
   > :
      public rising_edge< pin_in_from< pin >>
   {};

   // from a pin_oc: convert it to a pin_in
   template< class pin >
   struct rising_edge< 
      pin, 
      typename pin::has_pin_oc
   > : 
      public rising_edge< pin_in_from< pin >>
   {};

   
   // =======================================================================
   //
   // Blinking
   //
   // =======================================================================
   
   template< typename arg_timing >
   struct waiting_from : public arg_timing {
      
      
   };
     
   template< 
      typename arg_pin, 
      typename timing
   > struct blink { 
     
      typedef pin_out_from< arg_pin > pin;
      // typedef waiting_from< arg_timing > timing;
      
      typedef typename timing::duration duration;
        
      static void run( const duration t = duration::ms( 500 )){    
         timing::init();
         pin::init(); 
         for(;;){
            pin::set( 1 );
            timing::wait( t / 2 );
            pin::set( 0 );
            timing::wait( t / 2 );
         }
      }
   };
   

   // =======================================================================
   //
   // ...
   //
   // =======================================================================
     
   // used to select a pin from a port
   template< class port, unsigned int n > 
      struct _pin_select : public _pin_select< 
         typename port::tail, n - 1 > {};
   template< class port >
      struct _pin_select< port, 0 > : public port::_pin {};   
      
   // the maximum value (all bits 1) of an unsigned integer
   template< class t, int n > 
      struct _all_ones { 
         static constexpr t value = 
            ( _all_ones< t, n - 1 >::value << 8 ) | 0xFF; };
   template< class t > 
      struct _all_ones< t, 0 > {
         static constexpr t value = 0x00; };
   template< class t > 
      struct all_ones : public _all_ones< t, sizeof( t ) >{};
    
   
   // =======================================================================
   //
   // port_in_from
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > 
   struct port_in_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "port_in_from<> requires "
         "a port_in, port_in_out, or port_oc" 
      );
   };
   
   // from itself: delegate
   template< class port >
   struct port_in_from < 
      port, 
      typename port::has_port_in 
   > 
   : public 
      port_in< port::n_pins >
   {
      typedef typename port::value_type value_type;
      static void init(){ port::init(); }
      static value_type get(){ return port::get(); }    
   };
   
   // from a port_in_out: init sets the direction to input
   template< class port >
   struct port_in_from <  
      port, 
      typename port::has_port_in_out
   > 
   : public 
      port_in< port::n_pins > 
   {
      typedef typename port::value_type value_type;
   
      static void init(){
         port::init();
         port::direction_set_input();
      }   
      
      static value_type get(){ return port::get(); }
   };
   
   // from a port_oc: init sets the pins high
   template< class port >
   struct port_in_from <  
      port, 
      typename port::has_port_oc
   >  
   : public 
      port_in< port::n_pins > 
   {
      typedef typename port::value_type value_type;
   
      static void init(){
         port::init();
         port::set( all_ones< value_type >::value );
      }   
      
      static value_type get(){ return port::get(); }
   };
   
   
   // =======================================================================
   //
   // port_out_from
   //
   // =======================================================================
   
   // fallback: produce a compile-time error
   template< 
      class unsupported,
      class dummy = void
   > struct 
   port_out_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "port_out_from<> arguments must be "
         "port_out, port_in_out, or port_oc" 
      );
   };
   
   // from itself: delegate
   template< class port >
   struct port_out_from < 
      port,
      typename port::has_port_out 
   > 
   : public 
      port_out< port::n_pins >
   {
      typedef typename port::value_type value_type;   
      static void init(){ port::init(); }
      static void set( value_type value ){ port::set( value ); }        
   };
   
   // from a port_in_out: init sets the direction to output
   template< class port >
   struct port_out_from <  
      port, 
      typename port::has_port_in_out
   > : public 
      port_out< port::n_pins > 
   {
      typedef typename port::value_type value_type;
      
      static void init(){
         port::init();
         port::direction_set_output();
      }   
   
      static void set( value_type value ){ port::set( value ); }
   };
   
   // from a port_oc: delegate
   template< class port >
   struct port_out_from <  
      port, 
      typename port::has_port_oc
   >  
   : public 
      port_out< port::n_pins > 
   {
      typedef typename port::value_type value_type;   
      static void init(){ port::init(); }   
      static void set( value_type value ){ port::set( value ); }
   };
   
   
   // =======================================================================
   //
   // port_in_out_from
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > 
   struct port_in_out_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "port_in_out_from<> requires "
         "a port_in_out, or port_oc" 
      );
   };
   
   // from itself: delegate
   template< class port >
   struct port_in_out_from < 
      port, 
      typename port::has_port_in_out 
   > 
   : public 
      port_in_out< port::n_pins > 
   {
      typedef typename port::value_type value_type;   
      static void init(){ port::init(); }
      static value_type get(){ return port::get(); }   
      static void set( value_type x ){ port::set( x ); }   
      static void direction_set_input(){ port::direction_set_input(); }
      static void direction_set_output(){ port::direction_set_output(); }    
   };
   
   // from a port_oc: init sets the direction to input
   template< class port >
   struct port_in_out_from <  
      port, 
      typename port::has_port_oc
   > : public 
      port_in_out< port::n_pins > 
   {
      typedef typename port::value_type value_type;
      static void init(){ port::init(); }
     
      static void direction_set_input(){
         // setting an open-collector port high will
   	   // make it float
         port::set( all_ones< value_type >::value );
      }
      
      static void direction_set_output(){
         // no need to do anything, setting the port high
   	   // or low will do the real work
      }
      
      static void set( value_type b ){ port::set( b ); }
      static value_type get(){ return port::get(); } 
   };
   
   
   // =======================================================================
   //
   // port_oc_from
   //
   // =======================================================================
   
   // fallback: produce a compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > 
   struct port_oc_from {
      static_assert( 
         sizeof( unsupported ) == 0, 
         "port_oc_from<> requires "
         "a port_oc, or port_in_out" 
      );
   };
   
   // from itself: delegate
   template< class port >
   struct port_oc_from < 
      port, 
      typename port::has_port_oc 
   > 
   : public 
      port_oc< port::n_bits > 
   {
      typedef typename port::value_type value_type;
      static void init(){ port::init(); }
      static void set( value_type x ){ port::set( x ); }      
      static value_type get(){ return port::get(); }    
   };
   
   // from a port_in_out: 
   // not possible because it would require direction control
   // on the individual pins
   
   
   // =======================================================================
   //
   // port_in_from_pins
   //
   // =======================================================================
   
   
   // fallback: produce a compile-time error
   template< 
      typename... arguments
   > 
   struct port_in_from_pins {
      static_assert( 
         sizeof...( arguments ) > 0, 
         "port_in_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_in_from_pins<> 
      : public port_in< 0 > 
   {
      static void init(){}
      static value_type get(){ return 0; }
   };
   
   template< 
      typename arg_pin, 
      typename... tail_args 
   > struct port_in_from_pins< 
      arg_pin, 
      tail_args...  
   > : public 
      port_in< 
         port_in_from_pins< tail_args... >::n_pins + 1 
   > {
   
      static_assert( 
         sizeof( pin_in_from< arg_pin > ),
   	    "port_in_from_pins_pins requires "
          "pin_in_out or a pin_oc"
      );
   
      typedef port_in_from_pins< tail_args... > tail;
      typedef pin_in_from< arg_pin > _pin;
      
      template< unsigned int n >
      struct pin : public _pin_select <
         port_in_from_pins< 
             arg_pin, 
             tail_args...
         >, n    
      > {}; 
      
      static void init(){ 
         _pin::init();
         tail::init(); 
      }
      
      static unsigned int get(){
         return ( _pin::get() ? 0x01 : 0x00 ) | ( tail::get() << 1 );
      }
   
   };
   
      
   // =======================================================================
   //
   // port_out_from_pins
   //
   // =======================================================================    
   
   
   // fallback: produce a compile-time error
   template< 
      typename... arguments
   > 
   struct port_out_from_pins {
      static_assert( 
         sizeof...( arguments ) > 0, 
         "port_out_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_out_from_pins<> : 
      public port_out< 0 > 
   {
      template< int n > struct ppin {};
      static void init(){}
      static void set( unsigned int x ){}
   };
   
   template< 
      typename arg_pin, 
      typename... tail_args 
   > struct port_out_from_pins< 
      arg_pin, 
      tail_args...  
   > : public 
      port_out< 
         port_out_from_pins< tail_args... >::n_pins + 1 
   > {
   
      static_assert( 
         sizeof( pin_out_from< arg_pin > ),
   	    "port_out_from_pins_pins requires "
          "pin_out, pin_in_out or a pin_oc"
      );
   
      typedef port_out_from_pins< tail_args... > tail;
      typedef pin_out_from< arg_pin > _pin;
    
      template< unsigned int n >
      struct pin : public _pin_select<
         port_out_from_pins< 
             arg_pin, 
             tail_args...
         >, n    
      > {};
      
      static void init(){ 
         _pin::init();
         tail::init(); 
      }
      
      static void set( unsigned int x ){
         _pin::set( x & 0x01 );
         tail::set( x >> 1 );
      }
      
   };

   
   // =======================================================================
   //
   // port_in_out_from_pins
   //
   // =======================================================================
   
   
   // fallback: produce a compile-time error
   template< 
      typename... arguments
   > 
   struct port_in_out_from_pins {
      static_assert( 
         sizeof...( arguments ) > 0, 
         "port_in_out_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_in_out_from_pins<> 
      : public port_in_out< 0 > 
   {
      static void init(){}
      static void direction_set_input(){}
      static void direction_set_output(){}
      static void set( unsigned int x ){}
      static unsigned int get(){ return 0; }
   };
   
   template< 
      typename arg_pin, 
      typename... tail_args 
   > struct port_in_out_from_pins< 
      arg_pin, 
      tail_args...  
   > : public port_in_out< 
      port_in_out_from_pins< tail_args... >::n_pins + 1 
   > {
   
      static_assert( 
         sizeof( pin_out_from< arg_pin > ),
   	    "port_in_out_from_pins_pins requires "
          "pin_out, pin_in_out or a pin_oc"
      );
   
      typedef port_in_out_from_pins< tail_args... > tail;
      typedef pin_in_out_from< arg_pin > _pin;
      
      template< unsigned int n >
      struct pin : public _pin_select<
         port_in_out_from_pins< 
             arg_pin, 
             tail_args...
         >, n    
      > {};      
      
      static void init(){ 
         _pin::init();
         tail::init(); 
      }
      
      static void direction_set_input(){
         _pin::direction_set_input();
         tail::direction_set_input();
      }
      
      static void direction_set_output(){
         _pin::direction_set_output();
         tail::direction_set_output();
      }
      
      static void set( unsigned int x ){
         _pin::set( x & 0x01 );
         tail::set( x >> 1 );
      }
      
      static unsigned int get(){
         return ( _pin::get() ? 0x01 : 0x00 ) | ( tail::get() << 1 );
      }
   
   };
   
   
   // =======================================================================
   //
   // pin_out_from
   //
   // =======================================================================
   
   // in pins.hpp:
   // fallback: compile-time error
   // template< 
   //   class unsupported,
   //   class dummy = void
   // > struct { . . . };
   
   // from a port_out: write to all pins
   template< class port >
   struct pin_out_from <  
      port, 
      typename port::has_port_in
   > : 
      public pin_out_archetype 
   {
   
      static void init(){
         port::init();
         port::direction_set_output();
      }   
   
      static void set( bool value ){
         if( value ){
            port::set( all_ones< typename port::value_type >::value );
         } else {
            port::set( 0x0 );
         }  
      }   

   };  
   
   // from a port_in_out: create a port_out
   template< class port >
   struct pin_out_from <  
      port, 
      typename port::has_port_in_out
   > :
      public pin_out_from< port_out_from< port >> 
  {};  
   
   // from a port_oc: create a port_out
   template< class port >
   struct pin_out_from <  
      port, 
      typename port::has_port_oc
   > :
      public pin_out_from< port_out_from< port >> 
   {};   
   
      
   // =======================================================================
   //
   // invert
   //
   // =======================================================================
   
   // in pins.hpp:
   // fallback: compile time error   
   // template< 
   //   class unsupported, 
   //   class dummy = void 
   // > struct invert{ . . . }
   
   // from port_in: invert get()
   template< class port >
   struct invert< 
      port, 
      typename port::has_port_in
   > :
      public port_in_archetype< port::n_pins > 
   {
      typedef typename port::value_type value_type; 
      static void init(){ port::init(); }
      
      static value_type get(){
         return all_ones< value_type >::value ^ port::get();	  
      } 
      
   };	
   
   // from port_out: invert set()
   template< class port >
   struct invert< 
      port, 
      typename port::has_port_out
   > : 
      public port_out_archetype< port::n_pins >
   {
      static void init(){ port::init(); }
   
      static void set( unsigned int x ){
         port::set( x ^ all_ones< typename port::value_type >::value );	  
      }   
      
   };	
   
   // from port_in_out: invert get() and set()
   template< class port >
   struct invert< 
      port, 
      typename port::has_port_in_out
   > 
   : public 
      port_in_out_archetype< port::n_pins >
   {
      typedef typename port::value_type value_type;   
      static void init(){ port::init(); }
      static void direction_set_input(){ port::direction_set_input(); }
      static void direction_set_output(){ port::direction_set_output(); }
   
      static void set( unsigned int x ){
         port::set( x ^ all_ones< value_type >::value );	  
      }   
      
      static value_type get(){
         return all_ones< value_type >::value ^ port::get();	  
      } 
      
   };	
   
   // from port_in_out: invert get() and set()
   template< class port >
   struct invert< 
      port, 
      typename port::has_port_oc
   > : 
      public port_oc_archetype< port::n_pins >
   {
      typedef typename port::value_type value_type;   
      static void init(){ port::init(); }

      static void set( unsigned int x ){
         port::set( x ^ all_ones< value_type >::value );	  
      }   
      
      static unsigned int get(){
         return all_ones< value_type >::value ^ port::get();	  
      } 
      
   };	
   
   // =======================================================================
   //
   // rising_edge
   //
   // report, on each pin, a 1 once for each (detected) rising edge
   //
   // =======================================================================
   
   // in pins.hpp:
   // fallback: compiler error
   // template< 
   //    class unsupported, 
   //    class dummy = void 
   // > struct rising_edge { . .  . }; 
   
   // from a port_in: remember the last value, return 1 iff a rising edge
   template< class port >
   struct rising_edge< 
      port, 
      typename port::has_port_in 
   > : 
      public port_in_archetype< port::n_pins > 
   {
      typedef typename port::value_type value_type;
      static void init(){ port::init(); }

      static value_type get(){
         value_type current = port::get();
         value_type result = current & ! last;
         last = current;
         return result;
      }  
      
   private:
      static value_type last;   
   };	   
   
   template< class port >
      typename rising_edge< port, typename port::has_port_in >::value_type
         rising_edge< port, typename port::has_port_in >::last = 0; 
   
   // from a port_in_out: convert it to a port_in
   template< class port >
   struct rising_edge< 
      port, 
      typename port::has_port_in_out
   > 
   : public 
      rising_edge< port_in_from< port >>
   {};

   // from a port_oc: convert it to a port_in
   template< class port >
   struct rising_edge< 
      port, 
      typename port::has_port_oc
   > 
   : public 
      rising_edge< port_in_from< port >>
   {};
    
   
   // =======================================================================
   //
   // kitt
   //
   // =======================================================================
   
   template< 
      typename arg_port,
      typename timing 
   > void kitt( typename timing::duration t = timing::duration::ms( 100 )){
     
      typedef port_out_from< arg_port > port;
      
      timing::init();
      port::init();
      for(;;){
      
         // walk the light from the 0th pin to the highest
         for( int i = 0; i < port::n_pins; i++ ){
            port::set( 0x01 << i );
            timing::wait( t );
         }   
   	  
   	  // walk the light back from the highest-minus-1 to the 1st
         for( int i = port::n_pins - 2; i > 0; i-- ){
            port::set( 0x01 << i );
            timing::wait( t );
         }   
      }	
   }
   
   
}; // namespace hwcpp
