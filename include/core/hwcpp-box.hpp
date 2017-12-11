// ============================================================================
//
// file : hwcpp-box.hpp
//
// declarations for box classes
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


// ============================================================================
//
// PUBLIC
//
// box root classes
//
// ============================================================================

template< typename T >
struct box_root :
   not_instantiable
{
   using value_type = T;  
};

template< typename T >
struct box_source_root :
   box_root< T >
{
   static constexpr bool is_box_source = true;
};

template< typename T >
struct box_sink_root :
   box_root< T >
{
   static constexpr bool is_box_sink = true;
};

template< typename T >
struct box_source_sink_root :
   box_root< T >
{
   static constexpr bool is_box_source_sink = true;
};


// ============================================================================
//
// LIBRARY-INTERNAL
//
// box concepts
//
// ============================================================================

template< typename T >
concept bool _has_box_sink_functions = requires( 
   typename T::value_type v
){  
   { T::set( v ) } -> void;
   { T::set_direct( v ) } -> void;
   { T::set_buffered( v ) } -> void;
   { T::flush() } -> void;
};

template< typename T >
concept bool _has_box_source_functions = requires {  
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> void;   
};

template< typename T >
concept bool _has_box_direction_functions = requires( 
   typename T::value_type v,
   pin_direction d 
){   
   { T::direction_set( d ) } -> void;
   { T::direction_set_direct( d ) } -> void;
   { T::direction_set_buffered( d ) } -> void;
   { T::direction_flush() } -> void;
}; 




// ============================================================================
//
// LIBRARY-INTERNAL
//
// buffer 
//
// ============================================================================

/*
direct

sink only

source only

fixed value

variable / reference ?

select

combine

moving_average

average

limit

add

multiply

scale

- must indicate whether it is numeric or bitwise => can invert!
*/	