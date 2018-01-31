// ==========================================================================
//
// file : hwcpp-port-adapters.hpp
//
// adapters that transform a port to another kind of port
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
// adapters that creates a port from another port
//
// ==========================================================================

template< can_port_out port > 
struct port_out< port > :
   _port_out_root< port::n_pins >,
   _box_out< port >
{};
  

template< can_port_in port > 
struct port_in< port > :
   _port_in_root< port::n_pins >,
   _box_in< port >
{};

template< can_port_in_out port > 
struct port_in_out< port > :
   _port_in_out_root< port::n_pins >,
   _box_in_out< port >
{};

template< can_port_oc port > 
struct port_oc< port > :
   _port_oc_root< port::n_pins >,
   _box_out< port >,
   _box_in< port >
{};
