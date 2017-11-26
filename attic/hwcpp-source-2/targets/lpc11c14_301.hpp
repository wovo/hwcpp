#include "lpc1114_base.hpp"

// ==========================================================================
//
// LPC11C14FBD48/301 target
//
// ==========================================================================

namespace hwcpp {

struct target : public lpc1114_base< 8 * Kib, 32 * Kib, 48 * MHz > {
       
   typedef pin_in_out_pullup<    0,  0    > gpio_0_0;
   typedef pin_in_out_pullup<    0,  1    > gpio_0_1;
   typedef pin_in_out_pullup<    0,  2    > gpio_0_2;
   typedef pin_in_out_pullup<    0,  3    > gpio_0_3;
   typedef pin_oc<               0,  4    > gpio_0_4;
   typedef pin_oc<               0,  5    > gpio_0_5;
   typedef pin_in_out_pullup<    0,  6    > gpio_0_6;
   typedef pin_in_out_pullup<    0,  7    > gpio_0_7;
   typedef pin_in_out_pullup<    0,  8    > gpio_0_8;
   typedef pin_in_out_pullup<    0,  9    > gpio_0_9;
   typedef pin_in_out_pullup<    0, 10    > gpio_0_10;
   typedef pin_in_out_ad_pullup< 0, 11, 0 > gpio_0_11;
   
   typedef pin_in_out_ad_pullup< 1,  0, 1 > gpio_1_0;
   typedef pin_in_out_ad_pullup< 1,  1, 2 > gpio_1_1;
   typedef pin_in_out_ad_pullup< 1,  2, 3 > gpio_1_2;
   typedef pin_in_out_ad_pullup< 1,  3, 4 > gpio_1_3;
   typedef pin_in_out_ad_pullup< 1,  4, 5 > gpio_1_4;  
   typedef pin_in_out_pullup<    1,  5    > gpio_1_5;
   typedef pin_in_out_pullup<    1,  6    > gpio_1_6;
   typedef pin_in_out_pullup<    1,  7    > gpio_1_7;
   typedef pin_in_out_pullup<    1,  8    > gpio_1_8;
   typedef pin_in_out_pullup<    1,  9    > gpio_1_9;
   typedef pin_in_out_pullup<    1, 10    > gpio_1_10;
   typedef pin_in_out_pullup<    1, 11    > gpio_1_11;
   
   typedef pin_in_out_pullup<    2,  0    > gpio_2_0;
   typedef pin_in_out_pullup<    2,  1    > gpio_2_1;
   typedef pin_in_out_pullup<    2,  2    > gpio_2_2;
   typedef pin_in_out_pullup<    2,  3    > gpio_2_3;
   typedef pin_in_out_pullup<    2,  4    > gpio_2_4;
   typedef pin_in_out_pullup<    2,  5    > gpio_2_5;
   typedef pin_in_out_pullup<    2,  6    > gpio_2_6;
   typedef pin_in_out_pullup<    2,  7    > gpio_2_7;
   typedef pin_in_out_pullup<    2,  8    > gpio_2_8;
   typedef pin_in_out_pullup<    2,  9    > gpio_2_9;
   typedef pin_in_out_pullup<    2, 10    > gpio_2_10;
   typedef pin_in_out_pullup<    2, 11    > gpio_2_11;
   
   typedef pin_in_out_pullup<    3,  0    > gpio_3_0;
   typedef pin_in_out_pullup<    3,  1    > gpio_3_1; 
   typedef pin_in_out_pullup<    3,  2    > gpio_3_2;
   typedef pin_in_out_pullup<    3,  3    > gpio_3_3;
   
   typedef gpio_0_4 scl;
   typedef gpio_0_5 sda; 

   struct timing : archetypes::timing< timer_64 > {};
   
};

typedef target lpc1114fbd48_301;
//typedef target::timing timing;

}; // namespace hwcpp