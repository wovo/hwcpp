// ==========================================================================
//
// file : hwcpp-pin-dummies.hpp
//
// dummy (do-nothing) pins
//
// PUBLIC
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

struct _pin_in_out_dummy_foundation : 
   _pin_in_out_root 
{   
   static void HWCPP_INLINE init(){}
	  
   static void HWCPP_INLINE set_direct( bool v ){ 
      (void) v; 
   }      
	  
   static bool HWCPP_INLINE get_direct(){ 
      return 0; 
   }      
	  
   static void HWCPP_INLINE direction_set_direct( pin_direction d ){
      (void) d; 
   }
};

using pin_in_out_dummy  = _box_builder< _pin_in_out_dummy_foundation >;
using pin_in_dummy      = pin_in<      pin_in_out_dummy >;
using pin_out_dummy     = pin_in_out<  pin_in_out_dummy >;
using pin_oc_dummy      = pin_oc<      pin_in_out_dummy >;
