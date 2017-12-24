// ==========================================================================
//
// file : hwcpp-bs-buffering.hpp
//
// enable/disable buffering decorators for boxes and streams
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
// class filters that enable or disable buffering
// by re-directing the default set, get, read, write 
// and direction functions (when present) to the requested 
// (*_buffered or *_direct) versions.
//
// The flush and refresh functions are not affected.
// Using buffered< T > on a non-buffered T will not introduce buffering.
//
// ==========================================================================

// ========== buffer set

template< typename T >
struct _buffered_box_out_wrapper : T {};

template< _has_box_out_functions T >
struct _buffered_box_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static void HWLIB_INLINE set( _vt v ){
      T::set_buffered( v );
   }	  
};

// ========== direct set

template< typename T >
struct _direct_box_out_wrapper : T {};

template< _has_box_out_functions T >
struct _direct_box_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static void HWLIB_INLINE set( _vt v ){
      T::set_direct( v );
   }	  
};

// ========== buffer read

template< typename T >
struct _buffered_stream_out_wrapper : T {};

template< _has_stream_out_functions T >
struct _buffered_stream_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static void HWLIB_INLINE write( _vt v ){
      T::write_buffered( v );
   }	  
};

// ========== direct read

template< typename T >
struct _direct_stream_out_wrapper : T {};

template< _has_stream_out_functions T >
struct _direct_stream_out_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static void HWLIB_INLINE write( _vt v ){
      T::write_direct( v );
   }	  
};

// ========== buffer get

template< typename T >
struct _buffered_box_in_wrapper : T {};

template< _has_box_in_functions T >
struct _buffered_box_in_wrapper< T > : T {
   
   static auto HWLIB_INLINE get(){
      return T::get_buffered();
   }	  
};

// ========== direct get

template< typename T >
struct _direct_box_in_wrapper : T {};

template< _has_box_in_functions T >
struct _direct_box_in_wrapper< T > : T {
   
   static auto HWLIB_INLINE get(){
      return T::get_direct();
   }  
};

// ========== buffer read

template< typename T >
struct _buffered_stream_in_wrapper : T {};

template< _has_stream_in_functions T >
struct _buffered_stream_in_wrapper< T > : T {
	   
   static auto HWLIB_INLINE read(){
      return T::read_buffered();
   }	  
};

// ========== direct read

template< typename T >
struct _direct_stream_in_wrapper : T {};

template< _has_stream_in_functions T >
struct _direct_stream_in_wrapper< T > : T {
   
   static auto HWLIB_INLINE read(){
      return T::read_direct();
   }  
};

// ========== buffered direction

template< typename T >
struct _buffered_direction_wrapper : T {};

template< _has_box_direction_functions T >
struct _buffered_direction_wrapper< T > : T {
	
   static void HWLIB_INLINE direction_set( pin_direction d ){
      T::direction_set_buffered( d );
   }	  
};

// ========== direct direction

template< typename T >
struct _direct_direction_wrapper : T {};

template< _has_box_direction_functions T >
struct _direct_direction_wrapper< T > : T {
	
   static void HWLIB_INLINE direction_set( pin_direction d ){
      T::direction_set_direct( d );
   }
};


// ==========================================================================
//
// PUBLIC
//
// wrapper decorators that enable or disable buffering
//
// ==========================================================================

template< typename T > struct f : T {};

template< typename T >
using buffered = 
   _buffered_box_in_wrapper< 
   _buffered_box_out_wrapper< 
   _buffered_stream_in_wrapper< 
   _buffered_stream_out_wrapper< 
   _buffered_direction_wrapper< T > > > > >;
   
template< typename T >
using direct = 
   _direct_box_in_wrapper< 
   _direct_box_out_wrapper< 
   _direct_stream_in_wrapper< 
   _direct_stream_out_wrapper< 
   _direct_direction_wrapper< T > > > > >;
   