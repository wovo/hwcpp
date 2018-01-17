// ==========================================================================
//
// file : hwcpp-target-native.hpp
//
// HAL for native target
//
// ==========================================================================

#include "hwcpp-all.hpp"

namespace hwcpp {
    
template< uint64_t dummy = 0 >
struct target_native {

// ========= uart

struct uart {

   static void init(){}   

   static bool write_blocks(){
      return false;
   }

   static void write( char c ){
      std::cout << c << std::cout::flush;
   }
};

using uart = formatter< _stream_builder< _uart_foundation >>;

}; // template<...> struct target_native
	
using target = target_native; 
   
}; // namespace hwcpp




