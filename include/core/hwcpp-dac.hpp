// ==========================================================================
//
// file : hwcpp-dac.hpp
//
// declarations for digital-to-analog conversion outputs
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
struct _dac_root :
   _box_out_interval_root< 
      typename uint_t< _n_bits >::fast,
	  value_min,
	  value_max
   >
{
   static constexpr bool is_dac = true;		
}; 

template< typename T >
concept bool is_dac = requires(
   typename T::value_type v   
){  
   T::is_dac;
   
   { T::init() } -> void; 
   { T::set( v ) } -> void;
   { T::set_direct( v ) } -> void;
   { T::set_buffered( v ) } -> void;
   { T::flush() } -> void;    
};

template< typename T >
struct _dac_builder : 
   _box_builder< T >  
{};
