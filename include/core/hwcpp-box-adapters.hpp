// ==========================================================================
//
// file : hwcpp-box-adapers.hpp
//
// adapters that transform a box to another kind of box
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
// concepts that tell whether a box can be converted to the requested box
//
// ==========================================================================

template< typename T >
concept bool _can_box_out =  
      _is_box_out< T >
   || _is_box_in_out< T >;

template< typename T >
concept bool _can_box_in =  
      _is_box_in< T >
   || _is_box_in_out< T >;

template< typename T >
concept bool _can_box_in_out =  
     _is_box_in_out< T >;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// adapt to an out box
//
// Note that to avoid ambiguity, only functions pass the filters.
// The tag and other info is lost, it is up to the using code to restore it.
//
// ==========================================================================


// ========== base template, not defined, never used  

template< _can_box_out T > struct _box_out;

// ========== adapt an out box

template< _is_box_out T >
struct _box_out< T > :
   _pass_init< T >, 	
   _pass_box_set< T >	
{};	

// ========== adapt an in out box

template< _is_box_in_out T >
struct _box_out< T > :
   _pass_box_set< T >
{
    
   static void HWLIB_INLINE init(){
      T::init(); 
      T::direction_set( pin_direction::output );
   }	
};


// ==========================================================================
//
// PUBLIC
//
// adapt to an in box
//
// ==========================================================================


// ========== base template, not defined, never used  

template< _can_box_in T > struct _box_in;

// ========== adapt an out box

// not possible

// ========== adapt an in box

template< _is_box_in T >
struct _box_in< T > :
   _pass_init< T >, 	
   _pass_box_get< T >		
{};	

// ========== adapt an in out box

template< _is_box_in_out T >
struct _box_in< T > : 
   _pass_box_get< T > 
{
    
   static void HWLIB_INLINE init(){
      T::init(); 
      T::direction_set( pin_direction::input );
   }	
};


// ==========================================================================
//
// PUBLIC
//
// adapt to an in out box
//
// ==========================================================================

template< _is_box_in_out T >
struct _box_in_out : 
   _pass_init< T >, 	
   _pass_box_get< T >, 	
   _pass_box_set< T > 	
{};
