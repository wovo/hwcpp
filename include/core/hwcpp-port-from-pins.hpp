// ==========================================================================
//
// file : hwcpp-port-from-pins.hpp
//
// create deiffrent kinds of port from appropriate pins
//
// ==========================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


// ==========================================================================
//
// create a port_out from pins
//
// ==========================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_out_from_pins {};

// recursion endpoint
template< int n > 
struct _port_out_from_pins< n > : 
   port_out_dummy< n >
{};
    
// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_out_from_pins< n, arg_pin, arg_tail... > :
   _port_out_from_pins< n, arg_tail... >
{

   using _value_type = typename 
      _port_out_from_pins< n, arg_tail... >::value_type;
	  
   using pin = pin_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_out_from_pins< n, arg_tail... >::init(); 
   }
      
   static void set( _value_type v ) {
      pin::set_buffered( ( v & 0x01 ) != 0 );
      _port_out_from_pins< n, arg_tail... >::set_buffered( v >> 1 );
	  flush();
   }
      
   static void set_direct( _value_type v ) {
      pin::set_direct( ( v & 0x01 ) != 0 );
      _port_out_from_pins< n, arg_tail... >::set_direct( v >> 1 );
   }
      
   static void set_buffered( _value_type v ) {
      pin::set_buffered( ( v & 0x01 ) != 0 );
      _port_out_from_pins< n, arg_tail... >::set_buffered( v >> 1 );
   }
      
   static void flush() {
      pin::flush();
      _port_out_from_pins< n, arg_tail... >::flush();
   }
};

// determine the number of arguments and defer to the implementation
template< _can_pin_out_list... Ts > 
struct port_out< Ts... > :
   _port_out_from_pins< sizeof...( Ts ), Ts... >
{};


// ==========================================================================
//
// create a port_in from pins
//
// ==========================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_from_pins {};

// recursion endpoint
template< int n > 
struct _port_in_from_pins< n > : 
   port_in_dummy< n >
{};
    

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_from_pins<  n, arg_pin, arg_tail... > :
   _port_in_from_pins< n, arg_tail... >
{

   using value_type = 
      typename _port_in_from_pins< n, arg_tail... >::value_type;
   using pin = pin_in< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_from_pins< n, arg_tail... >::init(); 
   }
      
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_from_pins< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< _can_pin_in_list... Ts > 
struct port_in< Ts... > :
   _port_in_from_pins< sizeof...( Ts ), Ts... >
{};

      
// ==========================================================================
//
// create a port_in_out from pins
//
// ==========================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_out_from_pins {};

// recursion endpoint
template< int n > 
struct _port_in_out_from_pins< n > : 
   port_in_out_dummy< n >
{};
    
// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_out_from_pins<  n, arg_pin, arg_tail... > :
   _port_in_out_from_pins< n, arg_tail... >
{

   using value_type = 
      typename _port_in_out_from_pins< n, arg_tail... >::value_type;
   using pin = pin_in_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_out_from_pins< n, arg_tail... >::init(); 
   }
      
   static void direction_set_direct( pin_direction d ) {
      pin::direction_set_direct( d );
      _port_in_out_from_pins< n, arg_tail... >::direction_set_direct( d );
   }
   
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_in_out_from_pins< n, arg_tail... >::set_direct( v >> 1 );
   }
   
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_out_from_pins< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< _can_pin_in_out_list... Ts > 
struct port_in_out< Ts... > :
   _port_in_out_from_pins< sizeof...( Ts ), Ts... >
{};
   
   
// ==========================================================================
//
// create a port_oc from pins
//
// ==========================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_oc_from_pins {};

// recursion endpoint
template< int n > 
struct _port_oc_from_pins< n > : 
   port_oc_dummy< n >
{};
    
// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_oc_from_pins<  n, arg_pin, arg_tail... > :
   _port_oc_from_pins< n, arg_tail... >
{

   using value_type = 
      typename _port_oc_from_pins< n, arg_tail... >::value_type;
   using pin = pin_oc< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_oc_from_pins< n, arg_tail... >::init(); 
   }
      
   static void direction_set_direct( pin_direction d ) {
      pin::direction_set_direct( d );
      _port_oc_from_pins< n, arg_tail... >::direction_set_direct( d );
   }
   
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_oc_from_pins< n, arg_tail... >::set_direct( v >> 1 );
   }
   
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_oc_from_pins< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< _can_pin_oc_list... Ts > 
struct port_oc< Ts... > :
   _port_oc_from_pins< sizeof...( Ts ), Ts... >
{};