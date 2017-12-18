// ==========================================================================
//
// file : hwcpp-port-dummies.hpp
//
// do-nothing ports
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

// ========= port out 

template< int n > 
struct port_out_dummy: 
   _port_out_root< n > 
{
   using _value_type = typename _port_out_root< n >::value_type;
   
   static void init(){}
   
   static void set( _value_type v ){ (void) v; }
   static void set_direct( _value_type v ){ (void) v; }
   static void set_buffered( _value_type v ){ (void) v; }
   static void flush(){}
};

// ========= port in

template< int n > 
struct port_in_dummy :
   _port_in_root< n > 
{
   using _value_type = typename _port_in_root< n >::value_type;
   
   static void init(){}
   
   static _value_type get(){ return 0; }
   static _value_type get_direct(){ return 0; }
   static _value_type get_buffereh(){ return 0; }
   static void refresh(){}
};

// ========= port in out

template< int n > 
struct port_in_out_dummy : 
   _port_in_out_root< n > 
{
   using _value_type = typename _port_in_out_root< n >::value_type;
   
   static void init(){}
   
   static void set( _value_type v ){  (void) v; }
   static void set_direct( _value_type v ){  (void) v; }
   static void set_buffered( _value_type v ){  (void) v; }
   static void flush(){}

   static _value_type get(){ return 0; }
   static _value_type get_direct(){ return 0; }
   static _value_type get_buffered(){ return 0; }
   static void refresh(){}
   
   static void direction_set( pin_direction d ) { (void) d; }
   static void direction_set_direct( pin_direction d ) {  (void) d; }
   static void direction_set_buffered( pin_direction d ) {  (void) d; }
   static void direction_flush() {}
};

// ========= port oc

template< int n > 
struct port_oc_dummy : 
   _port_oc_root< n > 
{
   using _value_type = typename _port_in_out_root< n >::value_type;
   
   static void init(){}
   
   static void set( _value_type v ){ (void) v; }
   static void set_direct( _value_type v ){ (void) v; }
   static void set_buffered( _value_type v ){ (void) v; }
   static void flush(){}

   static _value_type get(){ return 0; }
   static _value_type get_direct(){ return 0; }
   static _value_type get_buffered(){ return 0; }
   static void refresh(){}
};

