// ==========================================================================
//
// file : hwcpp-pins.hpp
//
// roots and concepts for out, in, in_out and oc pins
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
// pin root classes : _pin_ [ in | out | in_out ] _root
//
// pin classes derive from these root classes
//
// ==========================================================================

// ========= common 

struct _pin_common_root :
   invertible_bitwise< bool >
{};

// ========= pin out 

struct _pin_out_root :
   _box_out_root< bool >,
   _pin_common_root
{
   static constexpr bool is_pin_out_tag = true;
};

// ========= pin in 

struct _pin_in_root :
   _box_in_root< bool >,
   _pin_common_root
{
   static constexpr bool is_pin_in_tag = true;
};

// ========= pin in out 

struct _pin_in_out_root :
   _box_in_out_root< bool >,
   _pin_common_root
{
   static constexpr bool is_pin_in_out_tag = true;
};

// ========= pin oc 

struct _pin_oc_root :
   _box_out_root< bool >,
   _box_in_root< bool >,
   _pin_common_root
{
   static constexpr bool is_pin_oc_tag = true;
};


// ==========================================================================
//
// PUBLIC
//
// pin concepts : is_pin_ [ in | out | in_out ]
//
// These concepts check for the marker and the interface elements 
// of each pin class.
// These concepts define the required interface elements of each pin class,
// and can be used to verify that a class does provide these.
//
// ==========================================================================  

// ========= pin out 

template< typename T >
concept bool is_pin_out = requires {
   T::is_pin_out_tag;
   _has_init_function< T >;
   _has_box_out_functions< T >;
};

// ========= pin in 

template< typename T >
concept bool is_pin_in = requires {
   T::is_pin_in_tag;
   _has_init_function< T >;
   _has_box_in_functions< T >;  
};

// ========= pin in out 

template< typename T >
concept bool is_pin_in_out = requires {   
   T::is_pin_in_out_tag;
   _has_init_function< T >;
   _has_box_direction_functions< T >;    
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;    
};

// ========= pin oc 

template< typename T >
concept bool is_pin_oc = requires {
   T::is_pin_oc_tag;
   _has_init_function< T >;  
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;  	  
};
