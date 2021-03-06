// ==========================================================================
//
// file : hwcpp-port-from-pins.hpp
//
// create different kinds of ports from appropriate pins
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
// FILE-INTERNAL
//
// filters that adds the various function groups
//
// ==========================================================================

// ========== add init

template< typename pin, typename tail >
struct _port_recurse_init : tail {
	
  static void HWCPP_INLINE init() { 
      pin::init();
      tail::init(); 
  }	
};

// ========= add the output (set) functions

template< typename pin, typename tail >
struct _port_recurse_set : tail {
	
   using _vt = typename tail::value_type;
	
   static void HWCPP_INLINE set( _vt v ) {
      pin::set_buffered( ( v & 0x01 ) != 0 );
      tail::set( (_vt) ( v >> 1 ) );
	  pin::flush();
   }
      
   static void HWCPP_INLINE set_direct( _vt v ) {
      set( v );	   
   }
      
   static void HWCPP_INLINE set_buffered( _vt v ) {
      pin::set_buffered( ( v & 0x01 ) != 0 );
      tail::set_buffered( (_vt) ( v >> 1 ) );
   }
      
   static void HWCPP_INLINE flush() {
      pin::flush();
      tail::flush();
   }
};


// ========= add the input (get) functions

template< typename pin, typename tail >
struct _port_recurse_get : tail {
	
   using _vt = typename tail::value_type;
	
   static _vt HWCPP_INLINE get() {
      pin::refresh();	    
      return (_vt)
	     pin::get_buffered()
         | ( tail::get_buffered() << 1 );
   }
      
   static _vt HWCPP_INLINE get_direct() {
      return (_vt)
	     ( pin::get_direct()
            | ( tail::get_direct() << 1 ) );
   }
      
   static _vt HWCPP_INLINE get_buffered() {
      return (_vt)
	     ( pin::get_buffered()
            | ( tail::get_buffered() << 1 ) );
   }
      
   static void HWCPP_INLINE refresh() {
      pin::refresh();
      tail::refresh();
   }
};

// ========= add the direction functions

template< typename pin, typename tail >
struct _port_recurse_direction : tail {
	
   static void HWCPP_INLINE direction_set( pin_direction d ){
      pin::direction_set_buffered( d );
      tail::direction_set_buffered( d ); 
      pin::direction_flush();
   }    
   
   static void HWCPP_INLINE direction_direct( pin_direction d ){
      pin::direction_set_direct( d );
      tail::direction_set_direct( d );         
   }    

   static void HWCPP_INLINE direction_set_buffered( pin_direction d ){
      pin::direction_set_buffered( d );
      tail::direction_set_buffered( d );    
   }    
   
   static void HWCPP_INLINE direction_flush(){
      pin::direction_flush();
      tail::direction_flush();   
   } 
};


// ==========================================================================
//
// PUBLIC
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
    
// add one pin and recurse
template< int n, typename pin, typename... tail >
struct _port_out_from_pins< n, pin, tail... > :
   _port_recurse_set< pin_out< pin >, 
   _port_recurse_init< pin_out< pin >, 
      _port_out_from_pins< n, tail... > > >
{};

// determine the number of arguments, break the forced inlining, 
// and defer to the recursive template
template< _can_pin_out_list... Ts > 
struct port_out< Ts... > :
   _no_inline_wrapper<
      _port_out_from_pins< sizeof...( Ts ), Ts... > >
{};


// ==========================================================================
//
// PUBLIC
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
    
// add one pin and recurse
template< int n, typename pin, typename... tail >
struct _port_in_from_pins< n, pin, tail... > :
   _port_recurse_get< pin_in< pin >, 
   _port_recurse_init< pin_in< pin >, 
      _port_in_from_pins< n, tail... > > >
{};

// determine the number of arguments, break the forced inlining, 
// and defer to the recursive template
template< _can_pin_in_list... Ts > 
struct port_in< Ts... > :
   _no_inline_wrapper<
      _port_in_from_pins< sizeof...( Ts ), Ts... > >
{};

      
// ==========================================================================
//
// PUBLIC
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
    
// add one pin and recurse
template< int n, typename pin, typename... tail >
struct _port_in_out_from_pins< n, pin, tail... > :
   _port_recurse_set< pin_in_out< pin >, 
   _port_recurse_get< pin_in_out< pin >, 
   _port_recurse_direction< pin_in_out< pin >, 
   _port_recurse_init< pin_in_out< pin >, 
      _port_in_out_from_pins< n, tail... > > > > >
{};

// determine the number of arguments, break the forced inlining, 
// and defer to the recursive template
template< _can_pin_in_out_list... Ts > 
struct port_in_out< Ts... > :
   _no_inline_wrapper<
      _port_in_out_from_pins< sizeof...( Ts ), Ts... > >
{};
   
   
// ==========================================================================
//
// PUBLIC
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
    
// add one pin and recurse
template< int n, typename pin, typename... tail >
struct _port_oc_from_pins< n, pin, tail... > :
   _port_recurse_set< pin_oc< pin >, 
   _port_recurse_get< pin_oc< pin >, 
   _port_recurse_init< pin_oc< pin >, 
      _port_oc_from_pins< n, tail... > > > >
{};

// determine the number of arguments, break the forced inlining, 
// and defer to the recursive template
template< _can_pin_oc_list... Ts > 
struct port_oc< Ts... > :
   _no_inline_wrapper<
      _port_oc_from_pins< sizeof...( Ts ), Ts... > >
{};