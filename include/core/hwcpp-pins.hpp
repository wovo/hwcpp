// ==========================================================================
//
// file : hwcpp-pins.hpp
//
// declarations for out, in, in_out and oc pins
//
// root classes : what every pin inhertits from
// concepts     : to constrain template parameters
// decorators   : to complete a partial implementation
// dummies      : do-nothing pins
// variables    : pins that write to or read from a variable
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
// PUBLIC
//
// pin root classes : pin_ [ in | out | in_out ] _root
//
// pin classes derive from these root classes
//
// ==========================================================================


// ========= common =========

struct pin_common_root :
   not_instantiable,
   invertible_bitwise< bool >
{
   using value_type = bool;  
};

// ========= pin out =========

struct pin_out_root :
   pin_common_root
{
   static constexpr bool is_pin_out = true;
};

// ========= pin in =========

struct pin_in_root :
   pin_common_root
{
   static constexpr bool is_pin_in = true;
};

// ========= pin in out =========

struct pin_in_out_root :
   pin_common_root
{
   static constexpr bool is_pin_in_out = true;
};

// ========= pin oc =========

struct pin_oc_root :
   pin_common_root
{
   static constexpr bool is_pin_oc = true;
};


// ==========================================================================
//
// FILE-INTERNAL
//
// concepts that check for the pin function categories
//
// These concepts are used to build the concpets that check for the 
// four types of pins.
//
// ==========================================================================

template< typename T >
concept bool _has_pin_init_function = requires {  
   { T::init() } -> void; 
};

template< typename T >
concept bool _has_pin_out_functions = requires( 
   bool v 
){  
   { T::set( v ) } -> void;
   { T::set_direct( v ) } -> void;
   { T::set_buffered( v ) } -> void;
   { T::flush() } -> void;
};

template< typename T >
concept bool _has_pin_in_functions = requires {  
   { T::get() } -> bool;
   { T::get_direct() } -> bool;
   { T::get_buffered() } -> bool;
   { T::invalidate() } -> void;   
};

template< typename T >
concept bool _has_pin_direction_functions = requires( 
   bool v, 
   pin_direction d 
){   
   { T::direction_set( d ) } -> void;
   { T::direction_set_direct( d ) } -> void;
   { T::direction_set_buffered( d ) } -> void;
   { T::direction_flush() } -> void;
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


// ========= pin out =========

template< typename T >
concept bool is_pin_out = requires {
   T::is_pin_out;
   _has_pin_init_function< T >;
   _has_pin_out_functions< T >;
};

// ========= pin in =========

template< typename T >
concept bool is_pin_in = requires {
   T::is_pin_in;
   _has_pin_init_function< T >;
   _has_pin_in_functions< T >;  
};

// ========= pin in out =========

template< typename T >
concept bool is_pin_in_out = requires {   
   T::is_pin_in_out;
   _has_pin_init_function< T >;
   _has_pin_direction_functions< T >;    
   _has_pin_out_functions< T >;    
   _has_pin_in_functions< T >;    
};

// ========= pin oc =========

template< typename T >
concept bool is_pin_oc = requires {
   T::is_pin_oc;
   _has_pin_init_function< T >;  
   _has_pin_out_functions< T >;    
   _has_pin_in_functions< T >;  	  
};



// ==========================================================================
//
// dummy (do-nothing) pins
//
// ==========================================================================

/*
struct _pin_in_out_dummy : pin_in_out_root {    
   static void HWLIB_INLINE set_direct( bool v ){}    
   static bool HWLIB_INLINE get_direct(){ return 0; }    
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){}
};

using pin_out_dummy     = _box_creator< _pin_in_out_dummy >;
using pin_in_dummy      = _box_creator< _pin_in_out_dummy >;
using pin_in_out_dummy  = _box_creator< _pin_in_out_dummy >;
using pin_oc_dummy      = _box_creator< _pin_in_out_dummy >;
*/

// ==========================================================================
//
// variable-coupled (store or retrieve from variable) pins
//
// ==========================================================================

/*
// ========== pin out ==========

template< bool & value >
struct _pin_out_value {
   
   static void HWLIB_INLINE set_direct( bool v ){ 
      value = v; 
   }    
};

template< bool & value >
struct pin_out_value :
   _pin_out_from_direct< _pin_out_value< value > >
{};   

// ========== pin in ==========

template< bool & value >
struct _pin_in_value { 
   
   static bool HWLIB_INLINE get_direct(){ 
      return value; 
   }    
};

template< bool & value >
struct pin_in_value :
   _pin_in_from_direct< _pin_in_value< value > >
{};  

// ========== pin in out ==========

template< bool & value, pin_direction direction_value >
struct _pin_in_out_value : 
   _pin_out_value< value >,
   _pin_in_value< value >
{    
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      direction_value = d;
   }
};

template< bool & value, pin_direction & direction_value >
struct pin_in_out_value :
   _pin_in_out_from_direct< _pin_in_out_value< value, direction_value > >
{};   

// ========== pin oc ==========

template< bool & value >
struct _pin_oc_value : 
   _pin_out_value< value >,
   _pin_in_value< value >
{};

template< bool & value >
struct pin_oc_value :
   _pin_oc_from_direct< _pin_oc_value< value > >
{};   

 * */

