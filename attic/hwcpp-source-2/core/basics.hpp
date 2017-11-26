// ==========================================================================
//
// File      : basics.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#include <climits>

namespace hwcpp {

   // =======================================================================
   //
   // hardware library version
   //
   // =======================================================================
   
   const char version[] = "V0.1 2014-02-19 work-in-progress";


   // =======================================================================
   //
   // some convenient constants
   //
   // =======================================================================
  
   // for expressing memory sizes
   constexpr int Kib  = 1024;
   constexpr int Mib  = 1024 * 1024;
   
   // for expressing frequencies
   constexpr int Hz   = 1;
   constexpr int kHz  = 1000;
   constexpr int MHz  = 1000 * 1000;
   
   
   // =======================================================================
   //
   // Inheriting this class makes it impossoble to create
   // an instance (object) of the subclass.
   //
   // =======================================================================

   class noninstantiable {
      noninstantiable();
   };
   
   
   // =======================================================================
   //
   // Inheriting this class makes it impossible to copy
   // or assign the subclass.
   //
   // =======================================================================

   struct noncopyable {
        noncopyable(){}
        noncopyable( const noncopyable& ) = delete;
        noncopyable& operator=( const noncopyable& ) = delete;
   };
   
   
   // =======================================================================
   //
   // determine the (unsigend) integer needed to hold n bits
   // and fast to use
   //
   // =======================================================================
   
   // if no exact match, get something bigger
   template< unsigned int n > struct uint_t {
      // but we have to draw a line somewhere
      static_assert( 
         n < 130,
         "ports, a/d and d/a pins, etc. must fit in an unsigned integer type" 
      );
      typedef typename uint_t< n + 1 >::fast fast;
   }; 
   
   template<> struct uint_t< 8 * sizeof( unsigned char ) > {
      typedef unsigned char fast;
   };   

   template<> struct uint_t< 8 * sizeof( unsigned int ) > {
      typedef unsigned int fast;
   };   

   template<> struct uint_t< 8 * sizeof( unsigned long long int ) > {
      typedef unsigned long long int fast;
   };   
   
   
   // =======================================================================
   //
   // The maximum value that fits in a given type
   //
   // =======================================================================   
   
   template< class base >
   struct int_info {};

   template<> struct int_info< unsigned long long int > {
      static constexpr unsigned long long int maximum = ULLONG_MAX;
   };
   template<> struct int_info< int > {
      static constexpr int maximum = INT_MAX;
   };
   

   // =======================================================================
   //
   // HARDWARE_HERE : file-name & line-number macro
   //
   // The macro HARDWARE_HERE transates to a newline, the file-name, ":",
   // and the line-number of the place where the BMPTK_HERE macro
   // appears. This is usefull for debug logging.
   //
   // TRACE : cout replacement for debugging
   //
   // The macro TRACE can be used instead of std::cout. 
   // It prepend what is written to it with HARDWARE_HERE.
   //
   // =======================================================================   
   
   #define HWCPP_HERE_STR( X ) #X
   #define HWCPP_HERE2( F, L ) ( "\n" F ":" HARDWARE_HERE_STR( L ) " " )
   #define HWCPP_HERE HARDWARE_HERE2( __FILE__, __LINE__ )

   #define HWCPP_TRACE ( \\
      hwcpp::io::cout << HARDWARE_HERE << " " << hwcpp::io::flush )
 
   
   // =======================================================================
   //
   // Archetype checking macro
   //
   // The macro invocation HARDWARE_ASSERT( V, T ) can be placed in a
   // template to assure that the parameter T has a static void type
   // V in it, which by convention indicates that it implements the 
   // interface with that name.
   //
   // =======================================================================   
         
   // assert that type T has a type V in it
   // (which should imply that it provides the corresponding interface)      
   #define HARDWARE_REQUIRE_ARCHETYPE( T, V ) class _test_##T##V {  \
      template< class t, class x = void > struct _##V               \
         { static constexpr bool value = false; };                  \
      template< class t > struct _##V< t, typename t::V >           \
         { static constexpr bool value = true; };                   \
      static_assert(                                                \
         _##V< T >::value,                                          \
         "the " #T " template argument doesn't provide " #V         \
      );                                                            \
   };   
   
   
   // =======================================================================
   //
   // the archetype of a (very minimalistic) target
   //
   // A real target will probably provide one or more timing services,
   // and likely some I/O pins.
   //
   // =======================================================================
   
   template< 
      int arg_ram_size, 
      int arg_rom_size, 
      int arg_clock_frequency 
   >
   struct target_archetype {
      typedef void has_target;
      static constexpr int ram_size = arg_ram_size;
      static constexpr int rom_size = arg_rom_size;
      static constexpr int clock_frequency = arg_clock_frequency;
   };    
   

   // =======================================================================
   //
   // the default asynchronous baudrate
   //
   // =======================================================================
   
   #ifndef HWCPP_BAUDRATE
      #ifdef BMPTK_BAUDRATE
         #define HWCPP_BAUDRATE BMPTK_BAUDRATE
      #else
         #define HWCPP_BAUDRATE 19200
      #endif   
   #endif      
      
      
}; // namespace hwcpp