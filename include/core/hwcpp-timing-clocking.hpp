// ==========================================================================
//
// file : hwcpp-timing-clocking.hpp
//
// ==========================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


// ==========================================================================
//
// PUBLIC
//
// root class and concept for the clock timing service
//
// ==========================================================================

template< typename _ticks_frequency > 
struct _timing_clocking_root :
   _timing_waiting_root< _ticks_frequency >
{
   static constexpr bool _is_timing_clocking_tag = true; 
};

template< typename T >
concept bool is_clocking(){ 
   return 
      T::_is_timing_waiting_tag
      && T::_is_timing_clocking_tag;
   // now_ticks()
   // now_ns()
}


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// this is the foundation provided by a HAL
//
// ==========================================================================

template< typename _ticks_frequency >
struct _timing_clocking_foundation :
   _timing_waiting_foundation< _ticks_frequency >
{
   static constexpr bool _is_timing_clocking_foundation_tag = true;
   
   using ticks_frequency = _ticks_frequency;
};

template< typename T >
concept bool _is_timing_clocking_foundation(){ 
   return T::_is_timing_clocking_foundation_tag;
   
   // init
   // wait_ticks_function()
   // wait_ticks_template<>()
}


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// builder for a clocking service
//
// ==========================================================================

template< _is_timing_clocking_foundation T >
struct _timing_clocking_builder : 
   _timing_clocking_root< T >,
   _timing_waiting_builder< T >
{
   using _root = _timing_waiting_root< T >;	
   using ticks_frequency  = typename T::ticks_frequency;	
   
   static void init(){
      _timing_waiting_builder< T >::init();
   }	  
   
   // ========== get current time
   
   static ticks_type now_ticks(){
      return T::now_ticks();	    	   
   }   
   
   static ns_type now_ns(){
      return T::ns_from_ticks( T::now_ticks() );
   }
};
