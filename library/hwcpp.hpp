// ==========================================================================
//
// File      : hwcpp.hpp
// Part of   : C++ hwlib library for close-to-the-hardware OO programming
// Copyright : wouter@voti.nl 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#ifndef HWCPP_H
#define HWCPP_H

#ifdef BMPTK_TARGET_db103
   #include "hwcpp-db103.hpp"
#endif

#ifndef BMPTK_TARGET
   #include "hwlib-all.hpp"
#endif

#endif // HWCPP_H