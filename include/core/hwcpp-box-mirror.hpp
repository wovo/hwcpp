// ==========================================================================
//
// file : hwcpp-box-mirror.hpp
//
// mirroring functionality for box classes
//
// A mirrored box reads or writes the mirrored value.
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
// LIBRARY-INTERNAL
//
// mixin class and concept for mirrorable boxes
//
// a class T must be a box, and inherit from 
// mirrorable_bitwise to be accepted by mirror< T >. 
// It is the responsibility of the using class to do both.
//
// ==========================================================================

struct mirrorable {
   static constexpr bool _is_mirrorable = true;
};

template< typename T >
concept bool is_mirrorable = requires {  
   T::_is_box_tag;
   T::_is_mirrorable; 
};


// ========== mixin class for bitwise mirrorable boxes

template< uint64_t _n_bits >
struct mirrorable_bitwise :
   mirrorable
{ 
   static constexpr uint64_t n_bits = _n_bits;
  
   static constexpr auto HWCPP_INLINE mirror_value( auto v ){ 
      decltype( v ) result = 0;
	  for( uint_fast8_t i = 0; i < n_bits; ++i ){
         result = result << 1;		 
         if(( v & 0x1 ) != 0 ){
            result |= 0x1;
         }
         v = v >> 1;
   }
      return result;
   }
};

// ==========================================================================
//
// FILE-INTERNAL
//
// class wrappere that mirrors the set functions (when present)
//
// ==========================================================================

template< typename T > struct _mirror_set_wrapper : T {};

template< _has_box_out_functions T >
struct _mirror_set_wrapper< T > : T {
	
   using _vt = typename T::value_type;
    
   static void HWCPP_INLINE set( _vt v ){ 
      T::set( T::mirror_value( v ) ); }
       
   static void HWCPP_INLINE set_direct( _vt v ){ 
      T::set_direct( T::mirror_value( v ) ); }
      
   static void HWCPP_INLINE set_buffered( _vt v ){ 
      T::set_buffered( T::mirror_value( v ) ); }
};	


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that mirrors the get functions (when present)
//
// ==========================================================================

template< typename T > struct _mirror_get_wrapper : T {};

template< _has_box_in_functions T >
struct _mirror_get_wrapper< T > : T {
    
   	static auto HWCPP_INLINE get(){ 
       return T::mirror_value( T::get() ); }
       
   	static auto HWCPP_INLINE get_direct(){ 
       return T::mirror_value( T::get_direct() ); }
	   
   	static auto HWCPP_INLINE get_buffered(){ 
       return T::mirror_value( T::get_buffered() ); }
};	


// ==========================================================================
//
// PUBLIC
//
// mirror decorator
//
// ==========================================================================

template< is_mirrorable T > 
using mirror =
   _mirror_get_wrapper< 
   _mirror_set_wrapper< T > >;
