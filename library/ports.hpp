// ============================================================================
//
// file : ports.hpp
//
// declarations for out, in, in_out and oc ports
//
// root classes : what every port inhertits from
// concepts     : to constrain template parameters
// decorators   : to complete a partial implementation
// dummies      : do-nothing ports
// variables    : ports that write to or read from a variable
//
// ============================================================================
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
// ============================================================================


// ============================================================================
//
// PUBLIC
//
// port root class templates : port_ [ in | out | in_out ] _root
//
// pin classes derive from these root classes
//
// ============================================================================


// ========= common =========

template< int n >
struct port_common_root :
   not_instantiable
{
   static constexpr int n_pins = n;
   using value_type = typename uint_t< n >::fast;  
};

// ========= out =========

template< int n >
struct port_out_root :
   port_common_root< n >
{
   static constexpr bool is_port_out = true;
};

// ========= in =========

template< int n >
struct port_in_root :
   port_common_root< n >
{
   static constexpr bool is_port_in = true;    
};

// ========= in_out =========

template< int n >
struct port_in_out_root :
   port_common_root< n >
{
   static constexpr bool is_port_in_out = true;
};

// ========= oc =========

template< int n >
struct port_oc_root :
   port_common_root< n >
{
   static constexpr bool is_port_oc = true;
};


// ============================================================================
//
// PUBLIC
//
// port concepts : is_port_ [ in | out | in_out ]
//
// These concepts check for the marker and the interface elements 
// of each port class.
// These concepts define the required interface elements of each port class,
// and can be used to verify that a class does provide these.
//
// ============================================================================


// ========= out =========

template< typename T >
concept bool is_port_out = requires {
   T::is_port_out;
   
   { T::init() } -> void;
	  
   { T::set( T::value_type ) } -> void;
   { T::set_direct( T::value_type ) } -> void;
   { T::set_buffered( T::value_type ) } -> void;
   { T::flush() } -> void;
};

// ========= in =========

template< typename T >
concept bool is_port_in = requires {
   T::is_port_in;
  
   { T::init() } -> void;
	  
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> typename T::value_type; 
};

// ========= in_out =========

template< typename T >
concept bool is_port_in_out = requires( direction d ) {
   T::is_port_in_out;
  
   { T::init() } -> void;
   
   { T::direction_set( d ) } -> void;
   { T::direction_set_direct( d ) } -> void;
   { T::direction_set_buffered( d ) } -> void;
   { T::direction_flush() } -> void;   
   
   { T::set( T::value_type ) } -> void;
   { T::set_direct( T::value_type ) } -> void;
   { T::set_buffered( T::value_type ) } -> void;
   { T::flush() } -> void;   
	  
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> typename T::value_type; 
};

// ========= oc =========

template< typename T >
concept bool is_port_oc = requires {
   T::is_port_in_out;
  
   { T::init() } -> void; 
   
   { T::set( T::value_type ) } -> void;
   { T::set_direct( T::value_type ) } -> void;
   { T::set_buffered( T::value_type ) } -> void;
   { T::flush() } -> void;   
	  
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> typename T::value_type; 
};


// ============================================================================
//
// create a port_out
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_out_implementation {};

// recursion endpoint
template< int n > 
struct _port_out_implementation< n > : 
   port_out_root< n > 
{
   using value_type = typename port_out_root< n >::value_type;
   static void init(){}
   static void set_direct( value_type v ){}
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_out_implementation<  n, arg_pin, arg_tail... > :
   _port_out_implementation< n, arg_tail... >
{

   using value_type = typename _port_out_implementation< n, arg_tail... >::value_type;
   using pin = pin_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_out_implementation< n, arg_tail... >::init(); 
   }
      
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_out_implementation< n, arg_tail... >::set_direct( v >> 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_out :
   _port_out_implementation< sizeof...( arguments ), arguments... >
{};
  
   
// ============================================================================
//
// create a port_in
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_implementation {};

// recursion endpoint
template< int n > 
struct _port_in_implementation< n > : 
   public port_in_root< n > 
{
   using value_type = typename port_in_root< n >::value_type;
   static void init(){}
   static value_type get_direct(){ return 0; }
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_implementation<  n, arg_pin, arg_tail... > :
   _port_in_implementation< n, arg_tail... >
{

   using value_type = typename _port_in_implementation< n, arg_tail... >::value_type;
   using pin = pin_in< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_implementation< n, arg_tail... >::init(); 
   }
      
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_implementation< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_in :
   _port_in_implementation< sizeof...( arguments ), arguments... >
{};

      
// ============================================================================
//
// create a port_in_out
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_out_implementation {};

// recursion endpoint
template< int n > 
struct _port_in_out_implementation< n > : 
   public port_in_out_root< n > 
{
   using value_type = typename port_in_out_root< n >::value_type;
   static void init() {}
   static void direction_set_direct( direction d ) {}
   static void set_direct( value_type v ) {}
   static value_type get_direct(){ return 0; }
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_out_implementation<  n, arg_pin, arg_tail... > :
   _port_in_out_implementation< n, arg_tail... >
{

   using value_type = typename _port_in_out_implementation< n, arg_tail... >::value_type;
   using pin = pin_in_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_out_implementation< n, arg_tail... >::init(); 
   }
      
   static void direction_set_direct( direction d ) {
      pin::direction_set_direct( d );
      _port_in_out_implementation< n, arg_tail... >::direction_set_direct( d );
   }
   
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_in_out_implementation< n, arg_tail... >::set_direct( v >> 1 );
   }
   
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_out_implementation< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_in_out :
   _port_in_out_implementation< sizeof...( arguments ), arguments... >
{};
   
// ============================================================================
//
// create a port_oc
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_oc_implementation {};

// recursion endpoint
template< int n > 
struct _port_oc_implementation< n > : 
   public port_oc_root< n > 
{
   using value_type = typename port_oc_root< n >::value_type;
   static void init() {}
   static void set_direct( value_type v ) {}
   static value_type get_direct(){ return 0; }
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_oc_implementation<  n, arg_pin, arg_tail... > :
   _port_oc_implementation< n, arg_tail... >
{

   using value_type = typename _port_oc_implementation< n, arg_tail... >::value_type;
   using pin = pin_oc< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_oc_implementation< n, arg_tail... >::init(); 
   }
      
   static void direction_set_direct( direction d ) {
      pin::direction_set_direct( d );
      _port_oc_implementation< n, arg_tail... >::direction_set_direct( d );
   }
   
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_oc_implementation< n, arg_tail... >::set_direct( v >> 1 );
   }
   
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_oc_implementation< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_oc :
   _port_oc_implementation< sizeof...( arguments ), arguments... >
{};

template< typename base, int n >
struct port_oc_buffered_base :
   port_oc_root< n >
{
   using value_type = typename port_oc_root< n >::value_type;	
   
   static void init(){
      base::init();	   
   }	   
	
   // inherit the buffered ones
   
   static void set_direct( value_type v ){  	
      base::set( v );
      base::flush();     	   
   }
   
};