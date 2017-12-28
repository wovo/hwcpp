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


/*


// ==========================================================================
//
// PUBLIC
//
// duration with polling class
//
// Duration extended with registering a callback,
// and a functional exclusive<>.
//
// ==========================================================================

template< 
   typename _timing,
   typename _timing::ticks_type _ticks
>   
struct is_duration_with_polling_root :
   duration< _timing, _ticks >
{
   static constexpr bool is_duration_with_polling_tag = true;
   
   template< typename T >
   struct exclusive {
      exclusive(){
         _timing::lock();
      }
      ~exclusive(){
         _timing::unlock();
	  }		  
   };     
};

template< typename T > 
concept bool has_main = requires {
   { T::main() } -> void;	
};	

template< typename T >
concept bool is_duration_with_polling = requires (
   has_main m
){ 
   return is_duration< T >;
   
   { template callback< m >::init() } -> void
 
};

*/
