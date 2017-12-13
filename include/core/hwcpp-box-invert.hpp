// ============================================================================
//
// file : hwcpp-box-invert.hpp
//
// inverting functionality for box classes
//
// An inverted box reads or writes the inverted value.
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
// mixin class and concept for invertible boxes
//
// a class T must be a box and inherit from invertible 
// to be accepted by invert< T >
//
// ============================================================================

template< typename T >
struct invertible {
   static constexpr bool is_invertible = true;
};

template< typename T >
concept bool is_invertible = requires {  
   T::is_invertible; 
};

template< typename T >
struct invertible_bitwise :
   invertible< T >
{ 
   static bool HWLIB_INLINE invert_value( bool v ){ return ! v; }
   static auto HWLIB_INLINE invert_value( auto v ){ return ~ v; }
};

template< typename T >
struct invertible_interval :
   invertible< T >
{ 
   static auto invert_value( auto v ){ return T::lowest + ( T::highest - v ); }
};


// ============================================================================
//
// filter tat inverts the set functions (when present)
//
// ============================================================================

template< typename T > struct _filter_invert_set : T {};

template< _has_box_sink_functions T >
struct _filter_invert_set< T > : T {
	
	using value_type = typename T::value_type;
    
   	static void HWLIB_INLINE set( value_type v ){ 
       T::set( T::invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_direct( value_type v ){ 
       T::set_direct( T::invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_buffered( value_type v ){ 
       T::set_buffered( T::invert_value( v ) ); }
};	


// ============================================================================
//
// filter that inverts the get functions (when present)
//
// ============================================================================

template< typename T > struct _filter_invert_get : T {};

template< _has_box_source_functions T >
struct _filter_invert_get< T > : T {
    
   	static auto HWLIB_INLINE get(){ 
       return T::invert_value( T::get() ); }
       
   	static auto HWLIB_INLINE get_direct(){ 
       return T::invert_value( T::get_direct() ); }
	   
   	static auto HWLIB_INLINE get_buffered(){ 
       return T::invert_value( T::get_buffered() ); }
};	


// ============================================================================
//
// invert decorator
//
// ============================================================================

template< is_invertible T > 
struct invert : _filter_invert_get< _filter_invert_set< T > > {};
