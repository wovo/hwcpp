// ==========================================================================
//
// file : hwcpp-port-dummies.hpp
//
// dummy (do-nothing) ports
//
// PUBLIC
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


template< int n >
struct _port_in_out_dummy_foundation : 
   _port_in_out_root< n > 
{   

   using _vt = typename _port_out_root< n >::value_type;
   
   static void HWCPP_INLINE init(){}   

   static void HWCPP_INLINE set_direct( _vt v ){ 
      (void) v; 
   }      
	  
   static _vt HWCPP_INLINE get_direct(){ 
      return 0; 
   }      
	  
   static void HWCPP_INLINE direction_set_direct( pin_direction d ){
      (void) d; 
   }
};

template< int n >
using port_in_out_dummy  
   = port_in_out< _box_builder< _port_in_out_dummy_foundation< n > > >;

template< int n >
using port_out_dummy = port_out< port_in_out_dummy< n > >;  

template< int n >
using port_in_dummy  = port_out< port_in_out_dummy< n > >;      

template< int n >
using port_oc_dummy  = port_out< port_in_out_dummy< n > >;      
