// ==========================================================================
//
// file : hwcpp-target-native.hpp
//
// HAL for native windows target
//
// ==========================================================================

#include "hwcpp-all.hpp"
#include <Windows.h>
#include <iostream>

namespace hwcpp {
    
template< uint64_t clock = 0 >
struct target_native {
    
// ==========================================================================
//
// PUBLIC
//
// initialization
//
// ==========================================================================

static void init(){}


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// UART
//
// ==========================================================================


struct _uart_foundation {

   static void init(){
      target_native< clock >::init();       
   }   

   static bool write_blocks(){
      return false;
   }

   static void write( char c ){
      ::std::cout << c; // << ::std::cout::flush;
   }
};

using uart = formatter< _stream_builder< _uart_foundation >>;


// ==========================================================================
//
// PUBLIC
//
// timing
//
// ==========================================================================

struct _clocking_foundation :
   _timing_clocking_foundation< std::ratio< 1'000'000 , 1 > >
{
   using chip = target_native< clock >;      
	
   static void init(){
      chip::init();
   }	

   static ticks_type HWCPP_INLINE now_ticks(){
      // https://stackoverflow.com/questions/1695288/getting-the-current-time-in-milliseconds-from-the-system-clock-in-windows	 
      FILETIME ft_now;
      GetSystemTimeAsFileTime( &ft_now );
      auto ll_now = (LONGLONG)ft_now.dwLowDateTime + ((LONGLONG)(ft_now.dwHighDateTime) << 32LL);   
      return ll_now / 10;
   }

   static void HWCPP_NO_INLINE  wait_ticks_function( ticks_type n ){     
      ticks_type t = now_ticks() + n;
      while( now_ticks() < t ){}
   } 
   
   template< ticks_type t >
   static void HWCPP_INLINE wait_ticks_template(){
      wait_ticks_function( t );         
   };	  
};

// ========= services
  
using clocking = _timing_clocking_builder< _clocking_foundation >;   
using timing   = clocking;   


}; // template<...> struct target_native
	
template< uint64_t clock = 0 >
using target = target_native< clock >; 
   
}; // namespace hwcpp




