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
 
 // ==========================================================================
//
// fixed-value output pins
//
// ==========================================================================

template< can_pin_out pin, bool v >
struct pin_fixed : pin_out< pin > {
   static void init(){
      pin_out< pin >::init();
      pin_out< pin >::set( v );
   }
};
   
template< can_pin_out pin >
using pin_low = pin_fixed< pin, 0 >;
   
template< can_pin_out pin >
using pin_high = pin_fixed< pin, 1 >;



// ==========================================================================
//
// fanout
//
// ==========================================================================

template< can_pin_out... pins >
struct fanout :
   _pin_out_root,
   _box_fanout< pin_out, pins... >
{};  