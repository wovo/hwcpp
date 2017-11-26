#include "lpc1114.hpp"

// ==========================================================================
//
// LPC1114FN28 target
//
// ==========================================================================

namespace hwcpp {

template< unsigned int frequency = 12 * MHz >
struct lpc1114fn28 : public lpc1114_base< 4 * Kib, 32 * Kib, frequency > {

   typedef lpc1114_base< 4 * Kib, 32 * Kib, frequency > t;
       
   typedef typename t::template pin_in_out_pullup<    0,  0    > gpio_0_0;
   typedef typename t::template pin_in_out_pullup<    0,  1    > gpio_0_1;
   typedef typename t::template pin_in_out_pullup<    0,  2    > gpio_0_2;
   typedef typename t::template pin_in_out_pullup<    0,  3    > gpio_0_3;
   typedef typename t::template pin_oc<               0,  4    > gpio_0_4;
   typedef typename t::template pin_oc<               0,  5    > gpio_0_5;
   typedef typename t::template pin_in_out_pullup<    0,  6    > gpio_0_6;
   typedef typename t::template pin_in_out_pullup<    0,  7    > gpio_0_7;
   typedef typename t::template pin_in_out_pullup<    0,  8    > gpio_0_8;
   typedef typename t::template pin_in_out_pullup<    0,  9    > gpio_0_9;
   typedef typename t::template pin_in_out_pullup<    0, 10    > gpio_0_10;
   typedef typename t::template pin_in_out_ad_pullup< 0, 11, 0 > gpio_0_11;
   
   typedef typename t::template pin_in_out_ad_pullup< 1,  0, 1 > gpio_1_0;
   typedef typename t::template pin_in_out_ad_pullup< 1,  1, 2 > gpio_1_1;
   typedef typename t::template pin_in_out_ad_pullup< 1,  2, 3 > gpio_1_2;
   typedef typename t::template pin_in_out_ad_pullup< 1,  3, 4 > gpio_1_3;
   typedef typename t::template pin_in_out_ad_pullup< 1,  4, 5 > gpio_1_4;  
   typedef typename t::template pin_in_out_pullup<    1,  5    > gpio_1_5;
   typedef typename t::template pin_in_out_pullup<    1,  6    > gpio_1_6;
   typedef typename t::template pin_in_out_pullup<    1,  7    > gpio_1_7;
   typedef typename t::template pin_in_out_pullup<    1,  8    > gpio_1_8;
   typedef typename t::template pin_in_out_pullup<    1,  9    > gpio_1_9;
   
   typedef gpio_0_4 scl;
   typedef gpio_0_5 sda;
   
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
};

}; // namespace hwcpp

