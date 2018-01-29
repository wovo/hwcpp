// ==========================================================================
//
// file : hwcpp-bs-no-inline.hpp
//
// wrapper for boxes and sreams that breaks a chain of forced inlining 
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
// break the HWCPP_INLINE for specific sets of functions
//
// ==========================================================================

// ========= init

template< typename T >
struct _no_inline_init_wrapper : T {};

template< _has_box_out_functions T >
struct _no_inline_init_wrapper< T > : T {
	
   static void init(){ 
      T::init(); 
   }	
};

// ========= box out

template< typename T >
struct _no_inline_box_out_wrapper : T {};

template< _has_box_out_functions T >
struct _no_inline_box_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;
    
   static void set( _vt v ){ 
      T::set( v ); 
   }
   static void set_direct( _vt v ){ 
      T::set_direct( v ); 
   }
   
   static void set_buffered( _vt v ){ 
      T::set_buffered( v ); 
   }
   
   static void flush(){ 
      T::flush(); 
   }	
};

// ========= box in

template< typename T >
struct _no_inline_box_in_wrapper : T {};

template< _has_box_in_functions T >
struct _no_inline_box_in_wrapper< T > : T { 

   using _vt = typename T::value_type;
    
   static _vt get(){ 
      return T::get(); 
   }
   static _vt get_direct(){ 
      return T::get_direct(); 
   }
   
   static _vt get_buffered(){ 
      return T::get_buffered(); 
   }
   
   static void refresh(){ 
      T::refresh(); 
   }
}; 

// ========= box direction

template< typename T >
struct _no_inline_box_direction_wrapper : T {};

template< _has_box_direction_functions T >
struct _no_inline_box_direction_wrapper< T > : T { 
    
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

// ========= stream out

template< typename T >
struct _no_inline_stream_out_wrapper : T {};

template< _has_stream_out_functions T >
struct _no_inline_stream_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;
    
   static void write( _vt v ){ 
      T::write( v ); 
   }
   static void write_direct( _vt v ){ 
      T::write_direct( v ); 
   }
   
   static void set_write( _vt v ){ 
      T::write_buffered( v ); 
   }
   
   static bool write_blocks(){
      return T::write_blocks();
   }	  
   
   static void flush(){ 
      T::flush(); 
   }	
};

// ========= stream in

template< typename T >
struct _no_inline_stream_in_wrapper : T {};

template< _has_stream_in_functions T >
struct _no_inline_stream_in_wrapper< T > : T { 

   using _vt = typename T::value_type;
    
   static _vt read(){ 
      return T::read(); 
   }
   static _vt read_direct(){ 
      return T::read_direct(); 
   }
   
   static _vt read_buffered(){ 
      return T::read_buffered(); 
   }
   
   static bool read_blocks(){
      return T::read_blocks();
   }	  
   
   static void refresh(){ 
      T::refresh(); 
   }
}; 


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// break the chain of HWCPP_INLINE for a box class
// 
// usage examples: _box_fanout, port-from-pins
//
// ==========================================================================

template< typename T >
using _no_inline_wrapper = 
   _no_inline_init_wrapper<
   _no_inline_box_out_wrapper<
   _no_inline_box_in_wrapper<
   _no_inline_box_direction_wrapper< 
   _no_inline_stream_out_wrapper<
   _no_inline_stream_in_wrapper< T > > > > > >;

