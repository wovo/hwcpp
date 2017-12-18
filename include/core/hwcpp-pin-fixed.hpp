// ==========================================================================
//
// file : hwcpp-pin-fixed.hpp
//
// fixed-value output pins
//
// these are not real pins, because they offer only the init function
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

