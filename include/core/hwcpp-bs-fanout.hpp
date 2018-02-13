// ==========================================================================
//
// file : hwcpp-bs-fanout.hpp
//
// fanout behavior for box and stream classes
//
// A fanout combination of output boxes writes the same value
// to all boxes.
// 
// Fanout functionality for a specific type is provided
// by that type by deferring to _box_fanout< adapter, list... >,
// check the pins for an example.
//
// It is the responsibility of that specific type to provide only
// pins that are valid for the adapt<>, and to break the HWCPP_INLINE 
// chain by using _box_no_inline<>.
//
// LIBRARY-INTERNAL
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


// ========== base, not implemented, never used


template< 
   template< typename > class adapt, 
   typename... minions 
> struct _bs_fanout;


// ========== recursion endpoint

template< 
   template< typename > class adapt 
> struct _bs_fanout< adapt > {
   
   static void HWCPP_INLINE init(){}
   
   static void HWCPP_INLINE set( auto v ){ 
      (void) v;
   }
   
   static void HWCPP_INLINE set_direct( auto v ){ 
      (void) v; 
   }
   
   static void HWCPP_INLINE set_buffered( auto v ){ 
      (void) v; 
   }
   
   static void HWCPP_INLINE write( auto v ){ 
      (void) v; 
   }
   
   static void HWCPP_INLINE write_direct( auto v ){ 
      (void) v; 
   }
   
   static void HWCPP_INLINE write_buffered( auto v ){ 
      (void) v; 
   }
   
   static void HWCPP_INLINE flush(){}
};


// ========== handle one minion and recurse

template<  
   template< typename > class adapt, 
   typename _minion, 
   typename... _tail >
struct _bs_fanout< adapt, _minion, _tail... > :
   _bs_fanout< adapt, _tail... >
{
	
   using _vt = typename _minion::value_type;	
   using minion = adapt< _minion >;	
   using tail = _bs_fanout< adapt, _tail... >;
   
   // ========= init   
	
   static void HWCPP_INLINE init() { 
      minion::init();
      tail::init(); 
   }
   
   // ========= set
      
   static void HWCPP_INLINE set( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
	  minion::flush();
   }
      
   static void HWCPP_INLINE set_direct( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
	  minion::flush();
   }
      
   static void HWCPP_INLINE set_buffered( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
   }
   
   // ========= write
      
   static void HWCPP_INLINE write( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
	  minion::flush();
   }
      
   static void HWCPP_INLINE write_direct( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
	  minion::flush();
   }
      
   static void HWCPP_INLINE write_buffered( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
   }
   
   // ========= flush
      
   static void HWCPP_INLINE flush() {
      minion::flush();
      tail::flush();
   }
   
};


// ==========================================================================
//
// fanout<> concepts and implementation
//
// ==========================================================================


template< typename ... Ts >
concept bool _is_fanoutable_pins = 
   ( sizeof...( Ts ) > 0 )
   && ( can_pin_out< Ts > && ... );

template< typename ... Ts >
concept bool _is_fanoutable_ports = 
   ( sizeof...( Ts ) > 0 ) 
   && ( can_port_out< Ts > && ... );  

template< typename ... Ts > requires 
    _is_fanoutable_pins< Ts... > 
    || _is_fanoutable_ports< Ts... >
struct fanout;

template< can_pin_out first, can_pin_out... pins >
struct fanout< first, pins...  > :
   _pin_out_root,
   _no_inline_wrapper< _bs_fanout< pin_out, first, pins... > >
{};

template< can_port_out first, can_port_out... ports >
struct fanout< first, ports... > :
   _port_out_root< first::n_pins >,
   _no_inline_wrapper< _bs_fanout< port_out, first, ports... > >
{};
