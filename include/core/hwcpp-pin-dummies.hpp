// ==========================================================================
//
// file : hwcpp-pin-utilities.hpp
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
