// ==========================================================================
//
// file : hwcpp-tests.hpp
//
// tests that are always compiled with the library
//
// A box creator adds the missing functions to a box foundation
// (which has either only direct functions, or only buffered functions).
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

namespace _tests {
    
namespace test_1 {    

struct _pin_in_out_foundation : _pin_in_out_root {
   
   static void init(){}
   
   static void HWCPP_INLINE direction_set_direct( pin_direction d ){
      (void) d;	  
   }
   
   static void HWCPP_INLINE set_direct( bool v ){
      (void) v;
   }

   static bool HWCPP_INLINE get_direct(){ 
      return 0; 
   }
};

using pin_in_out1  = _box_builder< _pin_in_out_foundation >;
using pin_in      = pin_in<      pin_in_out1 >;
using pin_out     = pin_out<     pin_in_out1 >;
using pin_in_out  = pin_in_out<  pin_in_out1 >;
using pin_oc      = pin_oc<      pin_in_out1 >;

template< _is_box_in_out T >
void constexpr ff(){}

void run() {
   static_assert( _box_in_out_root< bool >::_is_box_in_out_tag );	
   static_assert( _pin_in_out_root::_is_box_in_out_tag );	
   static_assert( _pin_in_out_root::_is_pin_in_out_tag );	
   static_assert( _has_init_function< _pin_in_out_foundation > );	
   
   static_assert( pin_in_out1::_is_box_in_out_tag );	
   static_assert( _has_init_function< pin_in_out1 > );	
   static_assert( _has_box_direction_functions< pin_in_out1 > );	
   static_assert( _has_box_out_functions< pin_in_out1 > );	
   static_assert( _has_box_in_functions< pin_in_out1 > );	
	
   ff< pin_in_out1 > ();
   static_assert( _is_box_in_out< pin_in_out1 > );

   pin_in_out1::init();
   pin_in::init();
   pin_in_out::init();
   pin_out::init();
   pin_oc::init();
}    

} // test_1

namespace test_2 {
    
   using pin  = pin_oc_dummy;
   using po   = pin_out< pin >;
   using port = port_out< pin  >;
   
   void run(){
       pin::init();
       po::init();
       port::init();    
   }
    
} // test_2

}
