// ==========================================================================
//
// file : hwcpp-box.hpp
//
// declarations for box classes
//
// A box is a static class that represents something that can accept and/or 
// provide a value. The declarations in this file are used by the library
// to create concrete boxes.
//
// Exaples are a GPIO pin, a port, an ADC, a DAC, a PWM.
//
// An sink box has set functions, an source box has get functions.
// For these functions, there are default, buffered and direct versions,
// and flush (for set) and/or refresh (for get) functions that work with
// the buffered versions. 
//
// When a box is both sink and source, it has functions for switching
// bewteen source (input) mode and sink (output) mode.
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
// box root classes
//
// ==========================================================================

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
   static constexpr bool is_box_source_tag = true;
};

template< typename T >
struct box_sink_root :
   box_root< T >
{
   static constexpr bool is_box_sink_tag = true;
};

template< typename T >
struct box_source_sink_root :
   box_root< T >
{
   static constexpr bool is_box_source_sink_tag = true;
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// box concepts
//
// these concepts are used in box filters, 
// that decorate specific fubnctions when present
//
// ==========================================================================

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
   { T::refresh() } -> void;   
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


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// interval box root classes
//
// An interval box is a subtype of box, where the value
// is numeric and limited to a subrange of the values 
// allowed by the datatype.
//
// ==========================================================================

template< typename T, T _lowest, T _highest >
struct box_interval_root {
   static constexpr bool is_interval_tag = true;
   static constexpr T lowest  = _lowest;
   static constexpr T highest = _highest;
};

template< typename T, T _lowest, T _highest >
struct box_source_interval_root :
   box_source_root< T >, 
   box_interval_root< T, _lowest, _highest >
{};

template< typename T, T _lowest, T _highest >
struct box_sink_interval_root :
   box_sink_root< T >, 
   box_interval_root< T, _lowest, _highest >
{};

template< typename T, T _lowest, T _highest >
struct box_source_sink_interval_root :
   box_source_sink_root< T >, 
   box_interval_root< T, _lowest, _highest >
{};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// buffer 
//
// ==========================================================================

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

linear_transform

- must indicate whether it is numeric or bitwise => can invert!
*/	