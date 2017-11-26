// ============================================================================
//
// file : target-arduino-due.hpp
//
// HAL for the arduino due board target
//
// ============================================================================

#include "sam3xa.hpp"

namespace hwcpp::arduino_due {
    
   static void HWLIB_INLINE init(){
      sam3xa::init();   
   }    
    
   using led = sam3xa::pin_out< sam3xa::pio::b, 27 >;
	
};

namespace hwcpp {
   namespace target = hwcpp::arduino_due;    
};




