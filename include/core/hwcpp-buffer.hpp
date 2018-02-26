// ==========================================================================
//
// file : hwcpp-buffer.hpp
// 
// a fixed-maximum size no-heap no-exceptions buffer
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
// PUBLIC
//
// the buffer class
//
// ==========================================================================
   
template< typename T, size_t N >   
class buffer {
private:

   T data[ N ];
   size_t valid;   
//   static inline T dummy;
   
public:   

   constexpr buffer(): data {}, valid{ 0 }{}
   
   void clear(){
      valid = 0;
   }	  
   
   constexpr size_t size() const {
      return valid;
   }	  
   
   void append( const T & d ){
      if( valid < N ){
         data[ valid++ ] = d;
      }		 
   }
   
   T operator[]( size_t i ) const {
      return data[ i ];
      //return i < valid ? data[ i ] : dummy;  
   }
   
   T & operator[]( size_t i ){
      return data[ i ];
      //return i < valid ? data[ i ] : dummy;  
   }

   T * begin(){
	   return data;
   }	
   
   T * end(){
	   return data + valid;
   }	   
      
   constexpr T * begin() const {
	   return data;
   }	
   
   constexpr T * end() const {
	   return data + valid;
   }	   
      
};