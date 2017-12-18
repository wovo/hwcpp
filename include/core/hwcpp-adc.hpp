// ==========================================================================
//
// file : hwcpp-adc.hpp
//
// declarations for anlog-to-digital conversion inputs
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

template< 
   uint64_t _n_bits,
   uint64_t value_min = 0,
   uint64_t value_max = ( 1ULL << _n_bits ) - 1
>
struct _adc_root :
   _box_in_interval_root< 
      typename uint_t< _n_bits >::fast,
	  value_min,
	  value_max
   >
{
   static constexpr bool is_adc = true;		
}; 

template< typename T >
concept bool is_adc = requires {  
   T::is_adc;
   
   { T::init() } -> void; 
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> void;    
};

template< typename T >
struct _adc_creator : 
   _box_creator< T >  
{};
