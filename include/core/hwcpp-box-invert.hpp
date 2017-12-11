// ============================================================================
//
// file : hwcpp-box-invert.hpp
//
// inverting service for box classes
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
   
   // a box can override this to have its own invert_value() function
   auto HWLIB_INLINE invert_value( auto v ){ return ~ v; }
};

template< typename T >
concept bool is_invertible = requires {  
   T::is_invertible; 
};


// ============================================================================
//
// pass everything, but invert the set functions when present
//
// ============================================================================

template< typename T > struct _invert_set : T {};

template< _has_box_sink_functions T >
struct _invert_set< T > : T {
	
	using value_type = typename T::value_type;
    
   	static void HWLIB_INLINE set( value_type v ){ 
       T::set( invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_direct( value_type v ){ 
       T::set_direct( invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_buffered( value_type v ){ 
       T::set_buffered( invert_value( v ) ); }
};	


// ============================================================================
//
// pass everything, but invert the get functions when present
//
// ============================================================================

template< typename T > struct _invert_get : T {};

template< _has_box_source_functions T >
struct _invert_get< T > : T {
    
   	static auto HWLIB_INLINE get(){ 
       return invert_value( T::get() ); }
       
   	static auto HWLIB_INLINE get_direct(){ 
       return invert_value( T::get_direct() ); }
	   
   	static auto HWLIB_INLINE get_buffered(){ 
       return invert_value( T::get_buffered() ); }
};	


// ============================================================================
//
// invert decorator
//
// ============================================================================

template< is_invertible T > 
struct invert : _invert_get< _invert_set< T > > {};
