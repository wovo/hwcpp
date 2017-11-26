// ==========================================================================
//
// File      : pins.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014 .. 2015
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

// pin_out_from ports that can be port_out_from
// debounce, rising edge
// everything after blinking
// all_ones

#ifndef HWCPP_PINS
#define HWCPP_PINS

#include "core/basics.hpp"
#include "core/time.hpp"

namespace hwcpp {
      

   // =======================================================================
   //
   // Pin interfaces
   //
   // =======================================================================
   
   struct pin_in {
      typedef void has_pin_in;
      typedef pin_in interface_type;
      
      virtual void init() = 0;
      virtual bool get() = 0;
   };
   
   struct pin_out {
      typedef void has_pin_out;
      typedef pin_out interface_type;
      
      virtual void init() = 0;
      virtual void set( bool value ) = 0;
   };
   
   struct pin_in_out {
      typedef void has_pin_in_out;
      typedef pin_in_out interface_type;
      
      virtual void init() = 0;
      virtual void direction_set_input() = 0;
      virtual void direction_set_output() = 0;
      virtual bool get() = 0;
      virtual void set( bool value ) = 0;
   };
   
   struct pin_oc {
      typedef void has_pin_oc;
      typedef pin_oc interface_type;
      
      virtual void init() = 0;
      virtual bool get() = 0;
      virtual void set( bool value ) = 0;
   };
   
      
   // =======================================================================
   //
   // Configurable pin pullup and pulldown interface 
   //
   // =======================================================================
   
   struct pin_pullup {
      typedef void has_pin_pullup;
      
      virtual void pullup_enable() = 0;
      virtual void pullup_disable() = 0;
      
   };
   
   struct pin_pulldown {
      typedef void has_pin_pulldown;
      
      virtual void pulldown_enable() = 0;
      virtual void pulldown_disable() = 0;
      
   };

   
   // =======================================================================
   //
   // Analog-to-digital conversion interface type
   //
   // =======================================================================
   
   template< unsigned int n_bits >
   struct pin_ad {
      typedef void has_pin_ad;
      static constexpr int ad_bits = n_bits;  
      typedef typename uint_t< n_bits >::fast ad_value_type;      
      static constexpr ad_value_type ad_maximum = 
         int_info< ad_value_type >::maximum;
      
      virtual void ad_init() = 0;
      virtual void ad_start() = 0;
      virtual bool ad_get_will_block() = 0;
      virtual ad_value_type ad_get() = 0;
      virtual ad_value_type ad_start_get(){
         ad_start();
         return ad_get();
      }   
   };
   
   
   // =======================================================================
   //
   // Digital-to-analog conversion interface type
   //
   // =======================================================================
   
   template< unsigned int n_bits >
   struct pin_da {  
      typedef void has_pin_da;
      static constexpr int da_bits = n_bits;     
      typedef typename uint_t< n_bits >::fast da_value_type;      
      static constexpr da_value_type da_maximum = 
         int_info< da_value_type >::maximum;
      
      virtual void da_init() = 0;
      virtual void da_set( da_value_type n ) = 0;
   };   
   
   
   // =======================================================================
   //
   // Port interface types
   //
   // =======================================================================
   
   template< int n >
   struct port_in {
      typedef void has_port_in;
      typedef port_in interface_type;
      
      static constexpr int n_pins = n;
      typedef typename uint_t< n >::fast value_type;      
      
      virtual void init() = 0;
      virtual value_type get() = 0;
   };
   
   template< int n >
   struct port_out {
      typedef void has_port_out;
      typedef port_out interface_type;
      
      static constexpr int n_pins = n;
      typedef typename uint_t< n >::fast value_type;
      
      virtual void init() = 0;
      virtual void set( value_type x ) = 0;
   };
   
   template< int n >
   struct port_in_out {
      typedef void has_port_in_out;
      typedef port_in_out interface_type;
      
      static constexpr int n_pins = n;
      typedef typename uint_t< n >::fast value_type;
      
      virtual void init() = 0;
      virtual void direction_set_input() = 0;
      virtual void direction_set_output() = 0;
      virtual value_type get() = 0;
      virtual void set( value_type value ) = 0;
   };
   
   template< int n > 
   struct port_oc {
      typedef void has_port_oc;
      typedef port_oc interface_type;      
      
      static constexpr int n_pins = n;
      typedef typename uint_t< n >::fast value_type;
      
      virtual void init() = 0;
      virtual value_type get() = 0;
      virtual void set( value_type value ) = 0;
   }; 
   
   
   // =======================================================================
   //
   // Dummies
   //
   // =======================================================================
   
   struct pin_dummy_type : 
      public pin_in_out,
      public pin_pullup,
      public pin_pulldown
   {
      void init() override final {}
      bool get() override final { return false; }
      void set( bool ) override final {}
      void direction_set_input() override final {}
      void direction_set_output() override final {}
      
      void pullup_enable() override final {}
      void pullup_disable() override final {}      
      
      void pulldown_enable() override final {}
      void pulldown_disable() override final {}   
   };   
   
   pin_dummy_type pin_dummy;
   
   template< unsigned int n_bits >
   struct pin_ad_dummy_type :
      public pin_ad< n_bits >
   {
      void ad_init() override final {}
      typedef typename pin_ad< n_bits >::ad_value_type ad_value_type;
      ad_value_type ad_get() override final { return 0; }
   };   
   
//   template< unsigned int n_bits >
//   pin_ad_dummy_type< n_bits > pin_ad_dummy;
   
   template< unsigned int n_bits >
   struct pin_da_dummy_type :
      public pin_da< n_bits >
   {  
      void da_init() override final {}
      typedef typename pin_da< n_bits >::da_value_type da_value_type; 
      void da_set( da_value_type n ) override final {}
   };  

//   template< unsigned int n_bits >
//   pin_da_dummy_type< n_bits > pin_da_dummy;   
   
   template< int n >   
   struct port_dummy_type : 
      public port_in_out< n >,
      public pin_pullup,
      public pin_pulldown      
   {
      void init() override final {}
      void direction_set_input() override final {}
      void direction_set_output() override final {}
      typedef typename port_in_out< n >::value_type value_type; 
      value_type get() override final { return 0; }
      void set( value_type value ) override final {}
      
      void pullup_enable() override final {}
      void pullup_disable() override final {}      
      
      void pulldown_enable() override final {}
      void pulldown_disable() override final {}
   };   
   
//   template< unsigned int n >
//   port_dummy_type< n > port_dummy;
   
   
   // =======================================================================
   //
   // pin_in_from
   //
   // =======================================================================
   
   // fallback: compile-time error
   template< 
      class unsupported, 
      class dummy = void 
   > 
   struct pin_in_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a pin_in from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct pin_in_from_implementation < 
      P, 
      typename P::has_pin_in 
   > : 
      public pin_in
   {
      P pin;
      pin_in_from_implementation( P pin ): pin{ pin }{}
      void init() override final { pin.init(); }
      bool get() override final { return pin.get(); }
   };
   
   // from a pin_in_out: init sets the direction to input
   template< class P >
   struct pin_in_from_implementation <  
      P, 
      typename P::has_pin_in_out
   > : 
      public pin_in
   {
      P pin;
      pin_in_from_implementation( P pin ): pin{ pin }{}   
   
      void init() override final {
         pin.init();
         pin.direction_set_input();
      }   
      
      bool get() override final {
         return pin.get();
      }
   };
   
   // from a pin_oc: init sets the pin high
   template< class P >
   struct pin_in_from_implementation <  
      P, 
      typename P::has_pin_oc
   > :
      public pin_in
   {
   
      P pin;
      pin_in_from_implementation( P pin ): pin{ pin }{}
   
      void init() override final {
         pin.init();
         pin.set( 1 );
      }   
      
      bool get() override final {
         return pin.get();
      }
   };
   
   template< typename P >
   pin_in_from_implementation< P > pin_in_from( P && pin ){
       return pin_in_from_implementation< P >( pin );
   }
   
   
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
   > struct pin_out_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a pin_out from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct pin_out_from_implementation < 
      P,
      typename std::remove_reference<P>::type::has_pin_out 
   > : 
      public pin_out
   {
      P pin;
      pin_out_from_implementation( P pin ): pin{ pin }{}   
   
      void init() override final { pin.init(); }
      void set( bool x ) override final { pin.set( x ); }   
   };
   
   // from a pin_in_out: init sets the direction to output
   template< class P >
   struct pin_out_from_implementation <  
      P, 
      typename std::remove_reference<P>::type::has_pin_in_out 
   > :
      public pin_out 
   {
      P pin;
      pin_out_from_implementation( P pin ): pin{ pin }{}  
   
      void HWCPP_INLINE init() override final {
         pin.init();
         pin.direction_set_output();
      }   
   
      void HWCPP_INLINE set( bool value ) override final {
         pin.set( value );
      }
   
   };
   
   // from a pin_oc: delegate
   template< class P >
   struct pin_out_from_implementation <  
      P, 
      typename std::remove_reference<P>::type::has_pin_oc
   > : 
      public pin_out 
   {
      P pin;
      pin_out_from_implementation( P pin ): pin{ pin }{}  
   
      void init() override final {
         pin.init();
      }   
   
      void set( bool value ) override final {
         pin.set( value );
      }
   
   };
   
   // from a port_out: write to all pins
   template< class P >
   struct pin_out_from_implementation <  
      P, 
      typename P::has_port_out
   > : 
      public pin_out 
   {
      P port;
      pin_out_from_implementation( P port ): port{ port }{}    
   
      void init() override final {
         port.init();
         port.direction_set_output();
      }   
   
      void set( bool value ) override final {
         if( value ){
            port.set( all_ones< typename P::value_type >::value );
         } else {
            port.set( 0x0 );
         }  
      }   

   };  
   
/*   
   // from a port_in_out: create a port_out
   template< class P >
   struct pin_out_from <  
      P, 
      typename P::has_port_in_out
   > : 
      public pin_out_from< port_out_from< port >> 
  {};  
   
   // from a port_oc: create a port_out
   template< class port >
   struct pin_out_from <  
      port, 
      typename P::has_port_oc
   > :
      public pin_out_from< port_out_from< port >> 
   {};      
*/   

   template< typename P, typename dummy = void >
   struct pin_out_from_add_pullup : 
      public pin_out_from_implementation< P > {
      pin_out_from_add_pullup( P pin ) : 
         pin_out_from_implementation< P >{ pin }{}     
   };
   
   template< typename  P >
   struct pin_out_from_add_pullup < 
      P,
      typename std::remove_reference<P>::type::has_pin_pullup 
   > : 
      public pin_out_from_implementation< P >,
      public pin_pullup 
   {
      pin_out_from_add_pullup( P pin ) : 
         pin_out_from_implementation< P >{ pin }{}
         
      void pullup_enable() override {
         this->pin.pullup_enable();   
      }        
      
      void pullup_disable() override {
         this->pin.pullup_disable();   
      } 
   };  


   template< typename P >
   auto pin_out_from( P && pin ){
       return pin_out_from_add_pullup< P >( pin );
   }

   
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
   > struct pin_in_out_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a pin_in_out from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct pin_in_out_from_implementation < 
      P, 
      typename P::has_pin_in_out 
   > :
      public pin_in_out 
   {
      P pin;
      pin_in_out_from_implementation( P pin ): pin{ pin }{}  
      
      void init() override final { pin.init(); }
      bool get(){ return pin.get(); }   
      void set( bool x ) override final { pin.set( x ); }   
      void direction_set_input() override final { 
         pin.direction_set_input(); }
         
      void direction_set_output() override final { 
         pin.direction_set_output(); }
   };
   
   // from a pin_oc: init sets the direction to input
   template< class P >
   struct pin_in_out_from_implementation <  
      P, 
      typename P::has_pin_oc
   > :
      public pin_in_out 
   {
      P pin;
      pin_in_out_from_implementation( P pin ): pin{ pin }{}  
   
      void init() override final {
         pin.init();
      }
     
      void direction_set_input() override final {
         // setting an open-collector pin high will
         // make it float
         pin.set( 1 );
      }
      
      void direction_set_output() override final {
         // no need to do anything, setting the pin high
         // or low will do the real work
      }
      
      void set( bool b ) override final {
         pin.set( b );
      }
      
      bool get() override final {
         return pin.get();
      } 
   
   };
   
   template< typename P >
   pin_in_out_from_implementation< P > pin_in_out_from( P && pin ){
       return pin_in_out_from_implementation< P >( pin );
   }   
   
   
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
   > struct pin_oc_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a pin_oc from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct pin_oc_from_implementation < 
      P, 
      typename std::remove_reference<P>::type::has_pin_oc 
   > :
      public pin_oc
   {
      P pin;
      pin_oc_from_implementation( P pin ): pin{ pin }{}  
      
      void init() override final { pin.init(); }
      bool get() override final { return pin.get(); }   
      void set( bool x ) override final { pin.set( x ); }   
   };
   
   // from a pin_in_out
   template< class P >
   struct pin_oc_from_implementation <  
      P, 
      typename std::remove_reference<P>::type::has_pin_in_out
   > :
      public pin_oc 
   {
      P pin;
      pin_oc_from_implementation( P p ): pin{ pin }{}  
   
      void init() override final {
         pin.init();
      }
   
      void set( bool x ) override final {
      
         // to make a pin_in_out behave like a pin_oc
         if( x ){
     
             // make it float when it is set high
             pin.direction_set_input();
    
         } else {
     
            // make it output and low when it is set low
            pin.direction_set_output();
            pin.set( 0 );
         }
      } 
      
      bool get() override final {
         return pin.get();
      }    
      
   };
   
   template< typename P >
   pin_oc_from_implementation< P > pin_oc_from( P && pin ){
       return pin_oc_from_implementation< P >( pin );
   }   
     
   
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
   struct port_in_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a port_in from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct port_in_from_implementation < 
      P, 
      typename P::has_port_in 
   > 
   : public 
      port_in< P::n_pins >
   {
      P port;
      port_in_from_implementation( P p ): port{ p }{}  
   
      typedef typename P::value_type value_type;
      
      void init() override final { port.init(); }
      value_type get() override final { return port.get(); }    
   };
   
   // from a port_in_out: init sets the direction to input
   template< class P >
   struct port_in_from_implementation <  
      P, 
      typename P::has_port_in_out
   > 
   : public 
      port_in< P::n_pins > 
   {
      P port;
      port_in_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;
   
      void init() override final {
         port.init();
         port.direction_set_input();
      }   
      
      value_type get() override final { return port.get(); }
   };
   
   // from a port_oc: init sets the pins high
   template< class P >
   struct port_in_from_implementation <  
      P, 
      typename P::has_port_oc
   >  
   : public 
      port_in< P::n_pins > 
   {
      P port;
      port_in_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;
   
      void init() override final {
         port.init();
         port.set( all_ones< value_type >::value );
      }   
      
      value_type get() override final { return port.get(); }
   };
   
   template< typename P >
   port_in_from_implementation< P > port_in_from( P && port ){
       return port_in_from_implementation< P >( port );
   }   
   
   
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
   port_out_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a port_out from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct port_out_from_implementation < 
      P,
      typename P::has_port_out 
   > 
   : public 
      port_out< P::n_pins >
   {
      P port;
      port_out_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;   
      void init() override final { port.init(); }
      void set( value_type value ) override final { port.set( value ); }        
   };
   
   // from a port_in_out: init sets the direction to output
   template< class P >
   struct port_out_from_implementation <  
      P, 
      typename P::has_port_in_out
   > : public 
      port_out< P::n_pins > 
   {
      P port;
      port_out_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;
      
      void init(){
         port.init();
         port.direction_set_output();
      }   
   
      void set( value_type value ) override final { port.set( value ); }
   };
   
   // from a port_oc: delegate
   template< class P >
   struct port_out_from_implementation <  
      P, 
      typename P::has_port_oc
   >  
   : public 
      port_out< P::n_pins > 
   {
      P port;
      port_out_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;   
      
      void init() override final { port.init(); }   
      void set( value_type value ) override final { port.set( value ); }
   };
   
   template< typename P >
   port_out_from_implementation< P > port_out_from( P && port ){
       return port_out_from_implementation< P >( port );
   }  
   

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
   struct port_in_out_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a port_in_out from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct port_in_out_from_implementation < 
      P, 
      typename P::has_port_in_out 
   > 
   : public 
      port_in_out< P::n_pins > 
   {
      P port;
      port_in_out_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;   
      
      void init() override final { port.init(); }
      value_type get() override final { return port.get(); }   
      void set( value_type x ) override final { port.set( x ); }   
      void direction_set_input() override final { port.direction_set_input(); }
      void direction_set_output() override final { port.direction_set_output(); }    
   };
   
   // from a port_oc: init sets the direction to input
   template< class P >
   struct port_in_out_from_implementation <  
      P, 
      typename P::has_port_oc
   > : public 
      port_in_out< P::n_pins > 
   {
      P port;
      port_in_out_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;
      
      void init() override final { port.init(); }
     
      void direction_set_input() override final {
         // setting an open-collector port high will
   	   // make it float
         port.set( all_ones< value_type >::value );
      }
      
      void direction_set_output() override final {
         // no need to do anything, setting the port high
   	   // or low will do the real work
      }
      
      void set( value_type b ) override final { port.set( b ); }
      value_type get() override final { return port.get(); } 
   };
   
   template< typename P >
   port_in_out_from_implementation< P > port_in_out_from( P && port ){
       return port_in_out_from_implementation< P >( port );
   }     
   
   
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
   struct port_oc_from_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't create a port_oc from what you give me"
      );
   };
   
   // from itself: delegate
   template< class P >
   struct port_oc_from_implementation < 
      P, 
      typename P::has_port_oc 
   > 
   : public 
      port_oc< P::n_bits > 
   {
      P port;
      port_oc_from_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;
      
      void init() override final { port.init(); }
      void set( value_type x ) override final { port.set( x ); }      
      value_type get() override final { return port.get(); }    
   };
   
   // from a port_in_out: 
   // not possible because it would require direction control
   // on the individual pins
   
   template< typename P >
   port_oc_from_implementation< P > port_oc_from( P && port ){
       return port_oc_from_implementation< P >( port );
   }     
   
   
   // =======================================================================
   //
   // Invert
   //
   // =======================================================================
   
   // fallback: compiler error
   template< 
      class unsupported, 
      class dummy = void 
   > struct invert_implementation {
      static_assert( 
         always_false< unsupported >::value,
         "can't invert what you give me"
      );
   };
   
   // from a pin_in: invert get()	
   template< 
      class P
   >
   struct invert_implementation< 
      P, 
      typename P::has_pin_in 
   > :
      public pin_in 
   {
      P pin;
      invert_implementation( P pin ): pin{ pin }{}   
   
      void init() override final { pin.init(); }
   
      bool get() override final {
         return ! pin.get();	  
      }  
      
   };	
   
   // from a pin_out: invert set()
   template< 
      class P 
   >
   struct invert_implementation< 
      P, 
      typename P::has_pin_out 
   > :
      public pin_out 
   {
      P pin;
      invert_implementation( P pin ): pin{ pin }{} 

      void init() override final { pin.init(); }

      void set( bool x ) override final {
         pin.set( ! x );	  
      }   
      
   };	
   
   // from a pin_in_out: invert get() and set()
   template< 
      class P 
   >
   struct invert_implementation< 
      P, 
      typename P::has_pin_in_out
   > :
      public pin_in_out
   {
      P pin;
      invert_implementation( P pin ): pin{ pin }{} 

      void init() override final { pin.init(); }
      void direction_set_input() override final { pin.direction_set_input(); }
      void direction_set_output() override final { pin.direction_set_output(); }      

      void set( bool x ) override final {
         pin.set( ! x );	  
      }  
      
      bool get() override final {
         return ! pin.get();	  
      }  
      
   };	
   
   // from a pin_oc: invert get() and set()
   template< 
      class P 
   >
   struct invert_implementation< 
      P, 
      typename P::has_pin_oc
   > :
      public pin_oc 
   {
      P pin;
      invert_implementation( P pin ): pin{ pin }{} 

      void init() override final { pin.init(); }   
   
      void set( bool x ) override final {
         pin.set( ! x );	  
      }   
      
      bool get() override final {
         return ! pin.get();	  
      } 
      
   };	   
   
   // from port_in: invert get()
   template< class P >
   struct invert_implementation< 
      P, 
      typename P::has_port_in
   > :
      public port_in< P::n_pins > 
   {
      P port;
      invert_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type; 
      void init() override final { port.init(); }
      
      value_type get() override final {
         return all_ones< value_type >::value ^ port.get();	  
      } 
      
   };	
   
   // from port_out: invert set()
   template< class P >
   struct invert_implementation< 
      P, 
      typename P::has_port_out
   > : 
      public port_out< P::n_pins >
   {
      P port;
      invert_implementation( P p ): port{ p }{}
      
      void init() override final { port.init(); }
   
      void set( unsigned int x ) override final {
         port.set( x ^ all_ones< typename P::value_type >::value );	  
      }   
      
   };	
   
   // from port_in_out: invert get() and set()
   template< class P >
   struct invert_implementation< 
      P, 
      typename P::has_port_in_out
   > 
   : public 
      port_in_out< P::n_pins >
   {
      P port;
      invert_implementation( P p ): port{ p }{}
      
      typedef typename P::value_type value_type;   
      void init() override final { port.init(); }
      void direction_set_input() override final { port.direction_set_input(); }
      void direction_set_output() override final { port.direction_set_output(); }
   
      void set( unsigned int x ) override final {
         port.set( x ^ all_ones< value_type >::value );	  
      }   
      
      value_type get() override final {
         return all_ones< value_type >::value ^ port.get();	  
      } 
      
   };	
   
   // from port_in_out: invert get() and set()
   template< class P >
   struct invert_implementation< 
      P, 
      typename P::has_port_oc
   > : 
      public port_oc< P::n_pins >
   {
      P port;
      invert_implementation( P port ): port{ port }{}
      
      typedef typename P::value_type value_type;   
      void init() override final { port.init(); }

      void set( unsigned int x ) override final {
         port.set( x ^ all_ones< value_type >::value );	  
      }   
      
      unsigned int get() override final {  // unsigned int??
         return all_ones< value_type >::value ^ port.get();	  
      } 
      
   };	   
   
   template< typename P >
   invert_implementation< P > invert( P && p ){
       return invert_implementation< P >( p );
   }     

/*   
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
         always_false< unsupported >::value,
         "rising_edge<> requires a pin_in, pin_in_out, pin_oc, "
         "or a corresponding port" 
      );
   };
   
   // from a pin_in: remember the last value, return 1 iff a rising edge
   template< class P >
   struct rising_edge< 
      pin, 
      typename P::has_pin_in 
   > :
      public pin_in 
   {
      void init() override final { pin.init(); }

      bool get() override final {
         bool current = pin.get();
         bool result = current && ! last;
         last = current;
         return result;
      }  
      
   private:
      bool last;   
   };	   
   
   template< class P >
      bool rising_edge< pin, typename P::has_pin_in >::last = 0; 
   
   // from a pin_in_out: convert it to a pin_in
   template< class P >
   struct rising_edge< 
      pin, 
      typename P::has_pin_in_out
   > :
      public rising_edge< pin_in_from< pin >>
   {};

   // from a pin_oc: convert it to a pin_in
   template< class P >
   struct rising_edge< 
      pin, 
      typename P::has_pin_oc
   > : 
      public rising_edge< pin_in_from< pin >>
   {};
*/
   
   // =======================================================================
   //
   // Blinking
   //
   // =======================================================================
   
   template< typename arg_timing >
   struct waiting_from : public arg_timing {
      
      
   };
/*     
   template< 
      typename arg_pin, 
      typename timing
   > struct blink { 
     
      typedef pin_out_from< arg_pin > pin;
      // typedef waiting_from< arg_timing > timing;
      
      typedef typename timing::duration duration;
        
      void run( const duration t = duration::ms( 500 )){    
         timing::init();
         pin.init(); 
         for(;;){
            pin.set( 1 );
            timing::wait( t / 2 );
            pin.set( 0 );
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
         always_false< unsupported >::value,
         "port_in_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_in_from_pins<> 
      : public port_in< 0 > 
   {
      void init() override final {}
      value_type get() override final { return 0; }
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
      
      void init() override final { 
         _pin.init();
         tail.init(); 
      }
      
      static unsigned int get() override final {
         return ( _pin.get() ? 0x01 : 0x00 ) | ( tail.get() << 1 );
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
         always_false< unsupported >::value,
         "port_out_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_out_from_pins<> : 
      public port_out< 0 > 
   {
      template< int n > struct ppin {};
      void init() override final {}
      void set( unsigned int x ) override final {}
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
      
      void init() override final { 
         _pin.init();
         tail.init(); 
      }
      
      void set( unsigned int x ) override final {
         _pin.set( x & 0x01 );
         tail.set( x >> 1 );
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
         always_false< unsupported >::value,
         "port_in_out_from_pins<> requires "
         "pin_in_out or pin_oc arguments" 
      );
   };
   
   template<> struct port_in_out_from_pins<> 
      : public port_in_out< 0 > 
   {
      void init() override final {}
      void direction_set_input() override final {}
      void direction_set_output() override final {}
      void set( unsigned int x ) override final {}
      static unsigned int get() override final { return 0; }
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
      
      void init() override final { 
         _pin.init();
         tail.init(); 
      }
      
      void direction_set_input() override final {
         _pin.direction_set_input();
         tail.direction_set_input();
      }
      
      void direction_set_output() override final {
         _pin.direction_set_output();
         tail.direction_set_output();
      }
      
      void set( unsigned int x ) override final {
         _pin.set( x & 0x01 );
         tail.set( x >> 1 );
      }
      
      static unsigned int get() override final {
         return ( _pin.get() ? 0x01 : 0x00 ) | ( tail.get() << 1 );
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
      typename P::has_port_in 
   > : 
      public port_in< P::n_pins > 
   {
      typedef typename P::value_type value_type;
      void init() override final { port::init(); }

      value_type get() override final {
         value_type current = port::get();
         value_type result = current & ! last;
         last = current;
         return result;
      }  
      
   private:
      value_type last;   
   };	   
   
   template< class port >
      typename rising_edge< port, typename P::has_port_in >::value_type
         rising_edge< port, typename P::has_port_in >::last = 0; 
   
   // from a port_in_out: convert it to a port_in
   template< class port >
   struct rising_edge< 
      port, 
      typename P::has_port_in_out
   > 
   : public 
      rising_edge< port_in_from< port >>
   {};

   // from a port_oc: convert it to a port_in
   template< class port >
   struct rising_edge< 
      port, 
      typename P::has_port_oc
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
*/   
   
   
}; // namespace hwcpp

#endif // #ifndef HWCPP_PINS
