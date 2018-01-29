// ==========================================================================
//
// file : hwcpp-stream-builder.hpp
//
// creators for stream classes
//
// A stream creator adds the missing functions to a stream foundation
// that has either only direct functions, or only buffered functions.
// This is used by for instance the HALs 
// to create a full stream from a minimal one.
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
// class filter that adds the direct checked out function
//
// ==========================================================================

template< typename T >
concept bool _stream_has_out_direct_unchecked = requires( 
   typename T::value_type v 
){  
   { T::write_blocks() } -> bool;
   { T::write_direct_unchecked( v ) } -> void;
};   

template< typename T >
struct _stream_add_out_direct_checked_wrapper : T {};

template< _stream_has_out_direct_unchecked T >
struct _stream_add_out_direct_checked_wrapper< T > : T {
	
   using _vt = typename T::value_type;
	
   static void write_direct( _vt v ){
       while( T::write_blocks() ){}	   
       T::write_direct_unchecked( v );
   }
   
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds the direct checked in function
//
// ==========================================================================

template< typename T >
concept bool _stream_has_in_direct_unchecked = requires{  
   { T::read_blocks() } -> bool;
   { T::read_direct_unchecked() } -> typename T::value_type;
};   

template< typename T >
struct _stream_add_in_direct_checked_wrapper : T {};

template< _stream_has_in_direct_unchecked T >
struct _stream_add_in_direct_checked_wrapper< T > : T {
	
   static auto read_direct(){
       while( T::read_blocks() ){}	   
       return T::read_direct_unchecked();
   }
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds buffered out functions 
//
// ==========================================================================

template< typename T >
concept bool _stream_has_out_direct = requires( 
   typename T::value_type v 
){  
   { T::write_direct( v ) } -> void;
};   

template< typename T >
struct _stream_add_out_buffered_wrapper : T {};

template< _stream_has_out_direct T >
struct _stream_add_out_buffered_wrapper< T > : T {
	
   using _vt = typename T::value_type;
	
   static void HWCPP_INLINE write( _vt v ){
       T::write_direct( v );
   }
   
   // write_direct provided by T
   
   static void HWCPP_INLINE write_buffered( _vt v ){
       T::write_direct( v );
   }
   
   static void HWCPP_INLINE flush(){}	
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds direct out functions 
//
// ==========================================================================

template< typename T >
concept bool _stream_has_out_buffered = requires( 
   typename T::value_type v 
){  
   { T::write_buffered( v ) } -> void;
};   

template< typename T >
struct _stream_add_out_direct_wrapper : T {};

template< _stream_has_out_buffered T >
struct _stream_add_out_direct_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static void HWCPP_INLINE set( _vt v ){
       T::write_buffered( v );
       T::flush();
   }
   
   static void HWCPP_INLINE write_direct( _vt v ){
       T::write_buffered( v );
       T::flush();
   }

   // write_buffered provided by T
   
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
concept bool _stream_has_in_direct = requires {  
   { T::read_direct() } -> typename T::value_type;
};   

template< typename T >
struct _stream_add_in_buffered_wrapper : T {};

template< _stream_has_in_direct T >
struct _stream_add_in_buffered_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
	
   static _vt HWCPP_INLINE get(){
      return T::read_direct();
   }       
   
  // read_direct provided by T
   
   static _vt HWCPP_INLINE read_buffered(){
      return T::read_direct();
   }       
   
   static void HWCPP_INLINE refresh(){}	
};


// ==========================================================================
//
// FILE-INTERNAL
//
// class filter that adds direct in functions 
//
// ==========================================================================

template< typename T >
concept bool _stream_has_in_buffered = requires( 
   typename T::value_type v 
){  
   { T::read_buffered() } -> typename T::value_type;
};   

template< typename T >
struct _stream_add_in_direct_wrapper : T {};

template< _stream_has_in_buffered T >
struct _stream_add_in_direct_wrapper< T > : T {
	
   using _vt = typename T::value_type;	
   
   static _vt HWCPP_INLINE get(){
      T::refresh();       
      return T::read_buffered();
   }      
   
   static _vt HWCPP_INLINE read_direct(){
      T::refresh();       
      return T::read_buffered();
   }      
   
   // read_buffered() provided by T
   
   // refresh() provided by T
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// creats a full stream from an minimal one (only direct, or only buffered)
//
// ==========================================================================

template< typename T >
using _stream_builder = 
   _stream_add_out_buffered_wrapper<
      _stream_add_out_direct_wrapper<
   _stream_add_in_buffered_wrapper<
      _stream_add_in_direct_wrapper< 
   _stream_add_out_direct_checked_wrapper<
      _stream_add_in_direct_checked_wrapper< T > > > > > >;
