// ==========================================================================
//
// file : hwcpp-box-buffereing.hpp
//
// enable/disable buffering decorators for box classes
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
//
// ==========================================================================

// ========== buffer set

template< typename T >
struct _buffered_out_filter : T {};

template< _has_box_out_functions T >
struct _buffered_out_filter< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static void set( _value_type v ){
      T::set_buffered( v );
   }	  
};

// ========== direct set

template< typename T >
struct _direct_out_filter : T {};

template< _has_box_out_functions T >
struct _direct_out_filter< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static void set( _value_type v ){
      T::set_buffered( v );
   }	  
};

// ========== buffer get

template< typename T >
struct _buffered_in_filter : T {};

template< _has_box_in_functions T >
struct _buffered_in_filter< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static _value_type get(){
      return T::get_buffered();
   }	  
};

// ========== direct get

template< typename T >
struct _direct_in_filter : T {};

template< _has_box_out_functions T >
struct _direct_in_filter< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static _value_type get(){
      return T::get_direct();
   }  
};

// ========== buffer direction

template< typename T >
struct _buffered_direction_filter : T {};

template< _has_box_direction_functions T >
struct _buffered_direction_filter< T > : T {
	
   static void direction_set( pin_direction d ){
      T::direction_set_buffered( d );
   }	  
};

// ========== direct direction

template< typename T >
struct _direct_direction_filter : T {};

template< _has_box_direction_functions T >
struct _direct_direction_filter< T > : T {
	
   static void direction_set( pin_direction d ){
      T::direction_set_direct( d );
   }
};


// ==========================================================================
//
// PUBLIC
//
// decorators that enable or disable buffering
//
// ==========================================================================

template< typename T >
using buffered = 
   _buffered_in_filter< 
   _buffered_out_filter< 
   _buffered_direction_filter< T > > >;
   
template< typename T >
using direct = 
   _direct_in_filter< 
   _direct_out_filter< 
   _direct_direction_filter< T > > >;
   