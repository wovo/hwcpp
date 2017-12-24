// ==========================================================================
//
// file : hwcpp-bs-fanout.hpp
//
// fanout behaviour for box and stream classes
//
// A fanout combination of output boxes writes the same value
// to all boxes.
// 
// Fanout functionality for a specific type is provided
// by that type by deferring to _box_fanout< adapter, list... >,
// check the pins for an example.
//
// It is the responsibility of that specific type to provide only
// pins that are valid for the adapt<>, and to break the HWLIB_INLINE 
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
   
   static void HWLIB_INLINE init(){}
   
   static void HWLIB_INLINE set( auto v ){}
   static void HWLIB_INLINE set_direct( auto v ){}
   static void HWLIB_INLINE set_buffered( auto v ){}
   
   static void HWLIB_INLINE write( auto v ){}
   static void HWLIB_INLINE write_direct( auto v ){}
   static void HWLIB_INLINE write_buffered( auto v ){}
   
   static void HWLIB_INLINE flush(){}
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
	
   static void HWLIB_INLINE init() { 
      minion::init();
      tail::init(); 
   }
   
   // ========= set
      
   static void HWLIB_INLINE set( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
	  flush();
   }
      
   static void HWLIB_INLINE set_direct( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
	  flush();
   }
      
   static void HWLIB_INLINE set_buffered( _vt v ) {
      minion::set_buffered( v );
      tail::set_buffered( v );
   }
   
   // ========= write
      
   static void HWLIB_INLINE write( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
	  flush();
   }
      
   static void HWLIB_INLINE write_direct( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
	  flush();
   }
      
   static void HWLIB_INLINE write_buffered( _vt v ) {
      minion::write_buffered( v );
      tail::write_buffered( v );
   }
   
   // ========= flush
      
   static void HWLIB_INLINE flush() {
      minion::flush();
      tail::flush();
   }
   
};