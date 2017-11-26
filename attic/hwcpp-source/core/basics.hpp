// ==========================================================================
//
// File      : basics.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2015
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#ifndef HWCPP_BASICS
#define HWCPP_BASICS

#include <climits>
#include <cstddef>
#include <type_traits>

namespace hwcpp {

   // =======================================================================
   //
   // hardware library version
   //
   // =======================================================================
   
   constexpr char version[] = "V0.2 2015-06-01 work-in-progress";


   // =======================================================================
   //
   // some convenient constants
   //
   // =======================================================================
  
   // for expressing memory sizes
   constexpr size_t Kib  = 1024;
   constexpr size_t Mib  = 1024 * 1024;
   
   
   // =======================================================================
   //
   // Inheriting this class makes it impossible to create
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
   // determine the smallest of the (unsigned) integers 
   // that can hold n bits and are fast to use
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
   // the maximum value (all bits 1) of an unsigned integer
   //
   // =======================================================================   
   
   template< class t, int n > 
      struct hwcpp_all_ones { 
         static constexpr t value = 
            ( hwcpp_all_ones< t, n - 1 >::value << 8 ) | 0xFF; };
   template< class t > 
      struct hwcpp_all_ones< t, 0 > {
         static constexpr t value = 0x00; };
   template< class t > 
      struct all_ones : public hwcpp_all_ones< t, sizeof( t ) >{};    
   
   
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
   template<> struct int_info< unsigned int > {
      static constexpr int maximum = UINT_MAX;
   };
   template<> struct int_info< int > {
      static constexpr int maximum = INT_MAX;
   };
   

   // =======================================================================
   //
   // The macro HWCPP_HERE translates to a newline, the file-name, ":",
   // and the line-number of the place where the macro
   // appears. This can be useful for debug logging.
   //
   // The macro TRACE can be used instead of std::cout. 
   // It prepends what is written to it with HWCPP_HERE, and flushes.
   //
   // =======================================================================   
      
   #define HWCPP_STRINGYFY( X ) #X
   #define HWCPP_HERE2( F, L ) ( "\n" F ":" HWCPP_STRINGYFY( L ) " " )
   #define HWCPP_HERE HWCPP_HERE2( __FILE__, __LINE__ )

   #define HWCPP_TRACE ( \
      hwcpp::io::cout << HWCPP_HERE << " " << hwcpp::io::flush )
 
 
   // =======================================================================
   //
   // An 'always false', mainly for use in static_assert
   //
   // =======================================================================  
   
   template< typename T > 
   struct always_false : std::false_type {};     
     

   // =======================================================================
   //
   // Literals
   //
   // =======================================================================  
   
   struct is_a_literal {
      typedef void is_literal;
   };
   
   template< typename T, T v > 
   struct literal_implementation: public is_a_literal {
      static const T value = v;
   };   
   
   #define HWCPP_LITERAL( x ) \
      literal_implementation< decltype( x ), x >()
      
   
   // =======================================================================
   //
   // The macro invocation HWCPP_REQUIRE_INTERFACE( P, T ) can be placed 
   // in a template to assure that the parameter P has a static void type
   // has_T in it, which by convention indicates that it implements the 
   // interface with that name.
   //
   // =======================================================================   
             
   #define HWCPP_REQUIRE_INTERFACE( P, T ) class HWCPP_test_##P##T {   \
      template< class t, class x = void > struct test_##T              \
         { static constexpr bool value = false; };                     \
      template< class t > struct test_##T< t, typename t::has_##T >    \
         { static constexpr bool value = true; };                      \
      static_assert(                                                   \
         test_##V< T >::value,                                         \
         "the " #P " argument doesn't provide interface " #T           \
      );                                                               \
   };  
   

   // =======================================================================
   //
   // A macro that forces a function or method to be always inlined.
   //
   // =======================================================================    
   
   #define HWCPP_INLINE __attribute__((always_inline))   
   

   // =======================================================================
   //
   // Downcast the argument to its base_type, to force it to be handled as
   // a run-type polymorphic object instead of as a compile-time tag type.
   //
   // =======================================================================     

   template< typename T, typename Dummy = void >
   void interface( T & x ){
      static_assert( 
         always_false< T >::value,
         "argument T must have a subype 'interface_type'"
      );
   }  
   
   template< typename T, typename D = typename T::interface_type >
   typename T::interface_type & HWCPP_INLINE interface( T & x ){
      return x;
   }  
   
   template< typename T, typename Dummy = void >
   void interface( const T & x ){
      static_assert( 
         always_false< T >::value,
         "argument T must have a subype 'object_type'"
      );
   }  
   
   template< typename T >
   typename T::interface_type HWCPP_INLINE interface( const T & x ){
      return x;
   }   
  
   
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
      typename arg_clock_frequency 
   >
   struct target_archetype {
      typedef void has_target;
      static constexpr int ram_size = arg_ram_size;
      static constexpr int rom_size = arg_rom_size;
      typedef arg_clock_frequency clock_frequency;
   };    
   

   // =======================================================================
   //
   // the default asynchronous baudrate: take it from BTMPTK_BAUDRATE
   // if that is defined, otherwise default to 19200.
   //
   // =======================================================================
   
   #ifndef HWCPP_BAUDRATE
      #ifdef BMPTK_BAUDRATE
         constexpr int default_baudrate = BMPTK_BAUDRATE;
      #else
         constexpr int default_baudrate = 19200;
      #endif   
   #endif      
      
      
}; // namespace hwcpp

#endif // #ifndef HWCPP_BASICS
