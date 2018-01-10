// ==========================================================================
//
// file : hwcpp-port-fanout.hpp
//
// create one port that rules them all: 
// an operation on this port will perform that operation 
// on all the subject ports.
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

template< can_port_out first, can_port_out... ports >
struct pfanout :
   _port_out_root< first::n_pins >,
   _no_inline_wrapper< _bs_fanout< port_out, first, ports... > >
{};  

