#include "lpc810.hpp"

// ==========================================================================
//
// LPC810M021FN8 target
//
// ==========================================================================

namespace hwcpp {

template< unsigned int frequency = 12 * MHz >
struct lpc810m021fn8 : public lpc810_base< 1 * Kib, 4 * Kib, frequency > {

   typedef lpc810_base< 1 * Kib, 4 * Kib, frequency > t;
  
   typedef typename t::template pin_in_out< 0,  0 > gpio_0_0;
   typedef typename t::template pin_in_out< 0,  1 > gpio_0_1;
   typedef typename t::template pin_in_out< 0,  2 > gpio_0_2;
   typedef typename t::template pin_in_out< 0,  3 > gpio_0_3;
   typedef typename t::template pin_in_out< 0,  4 > gpio_0_4;
   typedef typename t::template pin_in_out< 0,  5 > gpio_0_5;
   
   
   typedef waiting_implementation< 
      typename t::waiting_32 
   > waiting;      
   
};

}; // namespace hwcpp
