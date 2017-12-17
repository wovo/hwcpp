// ==========================================================================
//
// file : hwcpp-pin-utilities.hpp
//
// various declarations for pins
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
// fixed-value output pins
//
// these are not real pins, because they offer only the init function
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
// create one pin that rules them all
//
// ==========================================================================

template< can_pin_out... pins >
struct fanout :
   _pin_out_root,
   _box_no_inline< _box_fanout< pin_out, pins... > >
{}; 


// ==========================================================================
//
// dummy (do-nothing) pins
//
// ==========================================================================

struct _pin_in_out_dummy : 
   _pin_in_out_root 
{   
   static void HWLIB_INLINE set_direct( bool v ){ 
      (void) v; }      
	  
   static bool HWLIB_INLINE get_direct(){ 
      return 0; }      
	  
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      (void) d; }
};

using pin_out_dummy     = pin_out<     _box_creator< _pin_in_out_dummy > >;
using pin_in_dummy      = pin_in<      _box_creator< _pin_in_out_dummy > >;
using pin_in_out_dummy  = pin_in_out<  _box_creator< _pin_in_out_dummy > >;
using pin_oc_dummy      = pin_oc<      _box_creator< _pin_in_out_dummy > >;


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
 
 