// ==========================================================================
//
// file : hwcpp-ports.hpp
//
// declarations for out, in, in_out and oc ports
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
// LIBRARY-INTERNAL
//
// port root class templates : port_ [ in | out | in_out ] _root
//
// port classes derive from these root classes
//
// ==========================================================================


// ========= common 

template< int n >
struct _port_common_root :
   invertible_bitwise,
   mirrorable_bitwise< n >
{
   static constexpr int n_pins = n;
};

// ========= out 

template< int n >
struct _port_out_root :
   _port_common_root< n >,
   _box_out_root< typename uint_t< n >::fast >
{
   static constexpr bool is_port_out_tag = true;
};

// ========= in 

template< int n >
struct _port_in_root :
   _port_common_root< n >,
   _box_in_root< typename uint_t< n >::fast >
{
   static constexpr bool is_port_in_tag = true;    
};

// ========= in_out

template< int n >
struct _port_in_out_root :
   _port_common_root< n >,
   _box_in_out_root< typename uint_t< n >::fast >
{
   static constexpr bool is_port_in_out_tag = true;
};

// ========= oc 

template< int n >
struct _port_oc_root :
   _port_common_root< n >,
   _box_in_root< typename uint_t< n >::fast >,
   _box_out_root< typename uint_t< n >::fast >
{
   static constexpr bool is_port_oc_tag = true;
};


// ==========================================================================
//
// PUBLIC
//
// port concepts : is_port_ [ in | out | in_out ]
//
// These concepts check for the marker and the interface elements 
// of each port class.
// These concepts define the required interface elements of each port class,
// and can be used to verify that a class does provide these.
//
// ==========================================================================  

// ========= port out 

template< typename T >
concept bool is_port_out = requires {
   T::is_port_out_tag;
   _has_init_function< T >;
   _has_box_out_functions< T >;
};

// ========= port in 

template< typename T >
concept bool is_port_in = requires {
   T::is_port_in_tag;
   _has_init_function< T >;
   _has_box_in_functions< T >;  
};

// ========= port in out 

template< typename T >
concept bool is_port_in_out = requires {   
   T::is_port_in_out_tag;
   _has_init_function< T >;
   _has_box_direction_functions< T >;    
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;    
};

// ========= port oc 

template< typename T >
concept bool is_port_oc = requires {
   T::is_port_oc_tag;
   _has_init_function< T >;  
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;  	  
};


// ==========================================================================
//
// PUBLIC
//
// concepts that decide whether a port can be converted 
// to the requested port
//
// ==========================================================================

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
   // a port_in_out is NOT acceptable
   is_port_oc< T >;


// ==========================================================================
//
// PUBLIC
//
// The 'fallback, never use' class templates that decide whether a list
// of things can be converted to the requested port type. This is the case
// when it is either one port that can be converted, or a list of pins
// that can each be converted to a suitable pin.
//
// ==========================================================================

template< typename... Ts >
requires 
   _can_pin_out_list< Ts...> 
   || sizeof...( Ts ) == 1 && ( can_port_out< Ts > && ... )
struct port_out;

template< typename... Ts >
requires 
   _can_pin_in_list< Ts...> 
   || sizeof...( Ts ) == 1 && ( can_port_in< Ts > && ... )
struct port_in;

template< typename... Ts >
requires 
   _can_pin_in_out_list< Ts...> 
   || sizeof...( Ts ) == 1 && ( can_port_in_out< Ts > && ... )
struct port_in_out;

template< typename... Ts >
requires 
   _can_pin_oc_list< Ts...> 
   || sizeof...( Ts ) == 1 && ( can_port_oc< Ts > && ... )
struct port_oc;

