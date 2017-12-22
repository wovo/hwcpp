// ==========================================================================
//
// file : hwcpp-box-creator.hpp
//
// creators for box classes
//
// A box creator adds the missing functions to a box that has 
// either only direct functions, or only buffered functions.
// This is used by for instance the HALs 
// to create a full GPIO pin or ADC from a minimal one.
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
// FILE-INTERNAL
//
// class filter that adds buffered out functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_out_direct = requires( 
   typename T::value_type v 
){  
   { T::set_direct( v ) } -> void;
};   

template< typename T >
struct _box_creator_add_out_buffered : T {};

template< _box_has_out_direct T >
struct _box_creator_add_out_buffered< T > : T {
	
   using _value_type = typename T::value_type;
	
   static void HWLIB_INLINE set( _value_type v ){
       T::set_direct( v );
   }
   
   // set_direct provided by T
   
   static void HWLIB_INLINE set_buffered( _value_type v ){
       T::set_direct( v );
   }
   
   static void HWLIB_INLINE flush(){}	
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds direct out functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_out_buffered = requires( 
   typename T::value_type v 
){  
   { T::set_buffered( v ) } -> void;
};   

template< typename T >
struct _box_creator_add_out_direct : T {};

template< _box_has_out_buffered T >
struct _box_creator_add_out_direct< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static void HWLIB_INLINE set( _value_type v ){
       T::set_buffered( v );
       T::flush();
   }
   
   static void HWLIB_INLINE set_direct( _value_type v ){
       T::set_buffered( v );
       T::flush();
   }

   // set_buffered provided by T
   
   // flush() provided by T
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds buffered in functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_in_direct = requires {  
   { T::get_direct() } -> typename T::value_type;
};   

template< typename T >
struct _box_creator_add_in_buffered : T {};

template< _box_has_in_direct T >
struct _box_creator_add_in_buffered< T > : T {
	
   using _value_type = typename T::value_type;	
	
   static _value_type HWLIB_INLINE get(){
      return T::get_direct();
   }       
   
  // get_direct provided by T
   
   static _value_type HWLIB_INLINE get_buffered(){
      return T::get_direct();
   }       
   
   static void HWLIB_INLINE refresh(){}	
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds direct in functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_in_buffered = requires( 
   typename T::value_type v 
){  
   { T::get_buffered() } -> typename T::value_type;
};   

template< typename T >
struct _box_creator_add_in_direct : T {};

template< _box_has_in_buffered T >
struct _box_creator_add_in_direct< T > : T {
	
   using _value_type = typename T::value_type;	
   
   static _value_type HWLIB_INLINE get(){
      T::refresh();       
      return T::get_buffered();
   }      
   
   static _value_type HWLIB_INLINE get_direct(){
      T::refresh();       
      return T::get_buffered();
   }      
   
   // get_buffered() provided by T
   
   // refresh() provided by T
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds buffered direction functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_direction_direct = requires( 
   pin_direction d 
){  
   { T::direction_set_direct( d ) } -> void;
};   

template< typename T >
struct _box_creator_add_direction_buffered : T {};

template< _box_has_direction_direct T >
struct _box_creator_add_direction_buffered< T > : T {
	
   static void HWLIB_INLINE direction_set( pin_direction d ){
      T::direction_set_direct( d );       
   }    
   
   // direction_set_direct() provided by T

   static void HWLIB_INLINE direction_set_buffered( pin_direction d ){
      T::direction_set_direct( d );       
   }    
   
   static void HWLIB_INLINE direction_flush(){}
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds direct direction functions 
//
// ==========================================================================

template< typename T >
concept bool _box_has_direction_buffered = requires( 
   pin_direction d
){  
   { T::direction_set_buffered( d ) } -> void;
};   

template< typename T >
struct _box_creator_add_direction_direct : T {};

template< _box_has_direction_buffered T >
struct _box_creator_add_direction_direct< T > : T {
   
   static void HWLIB_INLINE direction_set( pin_direction d ){
      T::direction_set_buffered( d ); 
      T::direction_flush();
   }    
   
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      T::direction_set_buffered( d );       
      T::direction_flush();
   }    
   
   // direction_set_buffered() provided by T
   
   // direction_flush() provided by T
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// creates a full box from an minimal one (only direct, or only buffered)
//
// ==========================================================================

template< typename T >
using _box_creator = 
   _box_creator_add_out_buffered<
      _box_creator_add_out_direct<
   _box_creator_add_in_buffered<
      _box_creator_add_in_direct<
   _box_creator_add_direction_buffered<
      _box_creator_add_direction_direct< T > > > > > >;
