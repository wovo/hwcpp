// ==========================================================================
//
// file : hwcpp-stream.hpp
//
// declarations for stream classes
//
// A stream is a static class that represents something that can accept and/or 
// provide values. The declarations in this file are used by the library
// to create concrete streams.
//
// Exaples of concrete streams are UARTs, files, keypads, LCDs.
//
// An in stream has read functions, an out stream has write functions.
// For these functions, there are default, buffered and direct versions,
// and flush (for set) and/or refresh (for get) functions that work with
// the buffered versions. 
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
// stream root classes
//
// ==========================================================================

// ========= common

template< typename T >
struct _stream_root :
   not_instantiable
{
   using value_type = T;  
   static constexpr bool is_stream_tag = true;
};

// ========= stream out

template< typename T >
struct _stream_out_root :
   _stream_root< T >
{
   static constexpr bool is_stream_out_tag = true;
};

// ========= stream in

template< typename T >
struct _stream_in_root :
   _stream_root< T >
{
   static constexpr bool is_stream_in_tag = true;
};

// ========= stream in out

template< typename T >
struct _stream_in_out_root :
   _stream_root< T >
{
   static constexpr bool is_stream_in_out_tag = true;
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// stream functionality concepts
//
// these concepts are used in stream filters 
// that decorate specific functions when present
//
// ==========================================================================

template< typename T >
concept bool _has_stream_out_functions = requires( 
   typename T::value_type v
){  
   { T::write( v ) } -> void;
   { T::write_blocks() } -> bool;
   { T::write_direct( v ) } -> void;
   { T::write_buffered( v ) } -> void;
   { T::flush() } -> void;
};

template< typename T >
concept bool _has_stream_in_functions = requires {  
   { T::read() } -> typename T::value_type;
   { T::read_blocks() } -> bool;   
   { T::read_direct() } -> typename T::value_type;
   { T::read_buffered() } -> typename T::value_type;
   { T::refresh() } -> void;   
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// stream concepts
//
// ==========================================================================

// ========= stream out

template< typename T >
concept bool _is_stream_out = requires {
   T::is_stream_out_tag;
   _has_init_function< T >;
   _has_stream_out_functions< T >;
};

// ========= stream in 

template< typename T >
concept bool _is_stream_in = requires {
   T::is_stream_in_tag;
   _has_init_function< T >;
   _has_stream_in_functions< T >;  
};

// ========= stream in out 

template< typename T >
concept bool _is_stream_in_out = requires {   
   T::is_stream_in_out_tag;
   _has_init_function< T >;
   _has_stream_out_functions< T >;    
   _has_stream_in_functions< T >;    
};


