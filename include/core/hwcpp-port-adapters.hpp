// ============================================================================
//
// file : hwcpp-port-adapters.hpp
//
// adapters that transform a port to another kind of port
//
// ============================================================================
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
// ============================================================================


// ============================================================================
//
// PUBLIC
//
// concepts that decide whether a port can be converted to the requested port
//
// ============================================================================

template< typename T >
concept bool can_port_out =  
      is_port_out< T >
   || is_port_in_out< T >
   || is_port_oc< T >;

template< typename T >
concept bool can_port_in =  
      is_port_in< T >
   || is_port_in_out< T >
   || is_port_oc< T >;

template< typename T >
concept bool can_port_in_out =  
      is_port_in_out< T >
   || is_port_oc< T >;

template< typename T >
concept bool can_port_oc =  
      is_port_in_out< T >
   || is_port_oc< T >;


// ============================================================================
//
// adapter that creates a port out from another port
//
// ============================================================================

template< is_port_out port > 
struct port_out< port > :
   port
{};
   
template< is_port_in_out port > 
struct port_out< port > :
   port_out_root< port::n_pins > 
{
   	
   using value_type = typename port::value_type;
   
   static void init() { 
      port::init();
	  port::direction_set_direct( direction::output );
   }
      
   static void set_direct( value_type v ) {
      port::set_direct( v );
   }   
	
};
   
template< is_port_oc port > 
struct port_out< port > :
   port_out_root< port::n_pins > 
{
   	
   using value_type = typename port::value_type;
   
   static void init() { 
      port::init();
   }
      
   static void set_direct( value_type v ) {
      port::set_direct( v );
   }   
	
};
   
   
// ============================================================================
//
// adapter that creates a port in from another port
//
// ============================================================================


template< is_port_in port > 
struct port_in< port > :
   port
{};
   
template< is_port_in_out port > 
struct port_in< port > :
   port_in_root< port::n_pins > 
{
   	
   using value_type = typename port::value_type;
   
   static void init() { 
      port::init();
	  port::direction_set_direct( direction::output ); 
   }
      
   static value_type set_direct( value_type v ) {
      return port::get_direct();
   }   
	
};

      
// ============================================================================
//
// adapter that creates a port in out from another port
//
// ============================================================================


   
// ============================================================================
//
// adapter that creates a port oc from another port
//
// ============================================================================

