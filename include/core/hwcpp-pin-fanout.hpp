// ==========================================================================
//
// file : hwcpp-pin-fanout.hpp
//
// create one pin that rules them all: 
// an operation on this pin will perform that operation 
// on all the subject pins.
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

template< can_pin_out... pins >
struct fanout :
   _pin_out_root,
   _box_no_inline< _box_fanout< pin_out, pins... > >
{}; 

