#include "lpc1114.hpp"

// ==========================================================================
//
// file      : lpc1114fn28.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014 .. 2015
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

namespace hwcpp {

template< typename frequency = MHz_literal< 12 > >
struct target : public lpc1114_base< 4 * Kib, 32 * Kib, frequency > {

   typedef lpc1114_base< 4 * Kib, 32 * Kib, frequency > chip;
/*       
   typename chip::template pin_in_out_pullup<    0,  0    > gpio_0_0;
   typename chip::template pin_in_out_pullup<    0,  1    > gpio_0_1;
   typename chip::template pin_in_out_pullup<    0,  2    > gpio_0_2;
   typename chip::template pin_in_out_pullup<    0,  3    > gpio_0_3;
*/
   typename chip::template pin_oc_plain<         0,  4    > gpio_0_4;
/*
   typename chip::template pin_oc_plain<         0,  5    > gpio_0_5;
   typename chip::template pin_in_out_pullup<    0,  6    > gpio_0_6;
   typename chip::template pin_in_out_pullup<    0,  7    > gpio_0_7;
   typename chip::template pin_in_out_pullup<    0,  8    > gpio_0_8;
   typename chip::template pin_in_out_pullup<    0,  9    > gpio_0_9;
   typename chip::template pin_in_out_pullup<    0, 10    > gpio_0_10;
   typename chip::template pin_in_out_ad_pullup< 0, 11, 0 > gpio_0_11;
   
   typename chip::template pin_in_out_ad_pullup< 1,  0, 1 > gpio_1_0;
   typename chip::template pin_in_out_ad_pullup< 1,  1, 2 > gpio_1_1;
   typename chip::template pin_in_out_ad_pullup< 1,  2, 3 > gpio_1_2;
   typename chip::template pin_in_out_ad_pullup< 1,  3, 4 > gpio_1_3;

   typename chip::template pin_in_out_ad_pullup< 1,  4, 5 > gpio_1_4;  
   typename chip::template pin_in_out_pullup<    1,  5    > gpio_1_5;
   typename chip::template pin_in_out_pullup<    1,  6    > gpio_1_6;
   typename chip::template pin_in_out_pullup<    1,  7    > gpio_1_7;
   typename chip::template pin_in_out_pullup<    1,  8    > gpio_1_8;
   typename chip::template pin_in_out_pullup<    1,  9    > gpio_1_9;
*/
   
   struct delay_type : public hwcpp::delay {
      void init() override {}
      template< typename D > void HWCPP_INLINE wait( D d ) override {
         // HWCPP_REQUIRE_INTERFACE( D, duration );
         chip::wait_busy( d );
      }
   };
   
   auto delay(){
      return delay_type();
   }   
   
   /*
   template< int port, int pin > struct gpio_t :    
      public t::template gpio_t< port, pin >{}; 
   */
   
   //typedef gpio_0_4 scl;
   //typedef gpio_0_5 sda;
   /*
   typedef waiting_implementation< 
      typename t::waiting_32 
   > waiting;
   
   typedef timing_implementation< 
      typename t::timer_64 
   > timing;
   
   typedef callback_implementation<
      typename t::timer_64 
   > callback;
   
   template< unsigned int baudrate = HWCPP_BAUDRATE >
   class uart : public t::template uart< baudrate >{};
   */
};

}; // namespace hwcpp

