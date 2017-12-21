// ==========================================================================
//
// file : hwcpp-timing-duration.hpp
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

//using ticks_type  = uint_fast64_t;
//using ns_type     = uint_fast64_t;

// ==========================================================================
//
// PUBLIC
//
// duration class
//
// The most basic duration: offers only wait()
//
// ==========================================================================

template< 
   typename _timing,
   timing:: typename ticks_type _ticks
> 
struct duration :
   not_instantiable
{
   static constexpr bool is_duration_tag = true;
   
   using ticks_type = _timing::ticks_type;
   using ns_type    = _timing::ns_type;
   
   constexpr ticks_type ticks = _ticks;
   
   static void init(){
      timing::init();
   }	  
   
   static void wait(){
      timing::wait< ticks >();
   }	  
};

template< typename T >
concept bool is_duration() = requires { 

   return T::is_duration_tag;
   
   { T::ticks } -> typename T::ticks_type;
   
   { T::init() } -> void;
   
   { T::wait() } -> void;   
   
}


// ==========================================================================
//
// PUBLIC
//
// duration with polling class
//
// Duration extended with registering a callback
//
// ==========================================================================

template< 
   typename _timing,
   timing:: typename ticks_type _ticks
>   
struct is_duration_with_polling_root :
   duration< _timing, _ticks >
{
   static constexpr bool is_duration_with_polling_tag = true;
};

template< T > concept has_main = {
   { T::main() ) -> void;	
}	

template< typename T >
concept bool is_duration_with_polling() = requires (
   has_main m
){ 
   return is_duration< T >;
   
   { template callback< m >::init() } -> void
}
