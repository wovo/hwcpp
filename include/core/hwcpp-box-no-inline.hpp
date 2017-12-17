// ==========================================================================
//
// file : hwcpp-box-no-inline.hpp
//
// break the chain of HWLIB_INLINE 
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
// break the HWLIB_INLINE for specific sets of box functions
//
// ==========================================================================

// ========= init

template< typename T >
struct _no_inline_init : T {};

template< _has_box_out_functions T >
struct _no_inline_init< T > : T {
	
   static void init(){ 
      T::init(); 
   }	
};

// ========= out

template< typename T >
struct _no_inline_out : T {};

template< _has_box_out_functions T >
struct _no_inline_out< T > : T {
	
   using _value_type = typename T::value_type;
    
   static void set( _value_type v ){ 
      T::set( v ); 
   }
   static void set_direct( _value_type v ){ 
      T::set_direct( v ); 
   }
   
   static void set_buffered( _value_type v ){ 
      T::set_buffered( v ); 
   }
   
   static void flush(){ 
      T::flush(); 
   }	
};

// ========= in

template< typename T >
struct _no_inline_in : T {};

template< _has_box_in_functions T >
struct _no_inline_in< T > : T { 

   using _value_type = typename T::value_type;
    
   static _value_type HWLIB_INLINE get(){ 
      return T::get(); 
   }
   static _value_type HWLIB_INLINE get_direct(){ 
      return T::get_direct(); 
   }
   
   static _value_type HWLIB_INLINE get_buffered(){ 
      return T::get_buffered(); 
   }
   
   static void HWLIB_INLINE invalidate(){ 
      T::invalidate(); 
   }
}; 

// ========= direction

template< typename T >
struct _no_inline_direction : T {};

template< _has_box_direction_functions T >
struct _no_inline_direction< T > : T { 
    
   static void direction_set( pin_direction d ){ 
      T::direction_set( d ); 
   }

   static void direction_set_direct( pin_direction d ){ 
      T::direction_set_direct( d ); 
   }
   
   static void direction_set_buffered( pin_direction d ){ 
      T::direction_set_buffered( d ); 
   }
}; 


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// break the chain of HWLIB_INLINE for a box class
// 
// usage examples: _box_fanout, port-from-pins
//
// ==========================================================================

template< typename T >
using _box_no_inline = 
   _no_inline_init<
   _no_inline_out<
   _no_inline_in<
   _no_inline_direction< T > > > >;

    
