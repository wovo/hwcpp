// ============================================================================
//
// file : hwcpp-box-fanout.hpp
//
// fanout behaviour for box classes
//
// The fanout combination of output boxes writes the same value
// to all combined boxes.
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


// base, never used
template< 
   typename value_type, 
   template< typename > class adapt, 
   typename... pins 
> struct box_fanout;

// recursion endpoint
template< 
   typename value_type, 
   template< typename > class adapt 
> struct box_fanout< value_type, adapt > {
   static void init(){}
   static void set( value_type v ){}
   static void set_direct( value_type v ){}
   static void set_buffered( value_type v ){}
   static void flush(){}
};

// handle one box and recurse
template< 
   typename value_type, 
   template< typename > class adapt, 
   typename _box, 
   typename... tail >
struct box_fanout< value_type, adapt, _box, tail... > :
   box_fanout< value_type, adapt, tail... >
{
	
   using box = adapt< _box >;	
   using tail_boxes = box_fanout< value_type, adapt, tail... >;
	
   static void init() { 
      box::init();
      tail_boxes::init(); 
   }
      
   static void set( bool v ) {
      box::set_buffered( v );
      tail_boxes::set_buffered( v );
	  flush();
   }
      
   static void set_direct( bool v ) {
      box::set_buffered( v );
      tail_boxes::set_buffered( v );
	  flush();
   }
      
   static void set_buffered( bool v ) {
      box::set_buffered( v );
      tail_boxes::set_buffered( v );
   }
      
   static void flush() {
      box::flush();
      tail_boxes::flush();
   }
   
};