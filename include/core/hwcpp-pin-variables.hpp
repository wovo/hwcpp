// ==========================================================================
//
// file : hwcpp-pin-variables.hpp
//
// pins that write to or read from a variable
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
// variable-coupled (store or retrieve from variable) pins
//
// ==========================================================================

/*
// ========== pin out ==========

template< bool & value >
struct _pin_out_value {
   
   static void HWCPP_INLINE set_direct( bool v ){ 
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
   
   static bool HWCPP_INLINE get_direct(){ 
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
   static void HWCPP_INLINE direction_set_direct( pin_direction d ){
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
 
 