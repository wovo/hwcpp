// ==========================================================================
//
// File      : string.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

namespace hwcpp {

// forward declaration
template< unsigned int n = 0 >
class string;

// 'on'-templated string base
// contains the interface and code, but not the actual character storage
// string<> is the general type to pass around as reference or pointer
template<> 
class string<> {
public:

   char * body;
   unsigned int _maximum;
   unsigned int _size;
   
   // only our friend can create string<> instances
   // (as part of itself)
   template< unsigned int n > friend class string;   
   string( char *body, unsigned int maximum ):
      body( body ), _maximum( maximum ), _size( 0 ){}   
      
   // used for temporary objects only   
   // note that the caller must cast the argument to a non-const char *
   string( char *s ): body( s ), _maximum( 0 ), _size( 0 ) {
      while( body[ _size ] != '\0' ){
         _size++;
      }      
   }   

public:   

   unsigned int maximum(){ return _maximum; }
   unsigned int size(){ return _size; }
   
   void operator= ( char c ){
      _size = 0;
      operator+=( c );
   }
   
   void operator+= ( char c ){
      if( _size < _maximum ){
         body[ _size++ ] = c;
         _maximum++;
      }
   }
   
   void operator= ( const string<> & x ){
      _size = 0;
      operator+=( x );
   }
   
   void operator= ( const char *s ){ 
      operator=( string<>( (char *) s )); }
   
   void operator+= ( const string<> & x ){
      unsigned int j = 0;
      while(( _size < _maximum ) && ( j < x._size )){
         body[ _size++ ] = x.body[ j++ ];
      }
   }
   
   void operator+= ( const char *s ){ 
      operator+=( string<>( (char *) s )); }
   
   char operator[] ( int n ) const {
      if(( n < 0 ) || ( n >= (int) _size )){
         return '?';
      } else {
         return body[ n ];
      }
   }
   
   char & operator[] ( int n ) {
      static char dummy;
      if(( n < 0 ) || ( n >= (int) _size )){
         return dummy;
      } else {
         return body[ n ];
      }
   }
   
   bool contains( int offset, const string &s ) const {
      unsigned int j = 0;
      for( unsigned int i = offset; i < _size; i++ ){
         if( j >= s._size ){
            return true;
         }
         if( body[ i ] != s.body[ j++ ] ){
            return false;
         }
      }
      return false;
   }
   
   bool contains( int offset, const char * s ) const {
      return contains( offset, string<>( (char *) s )); }

   bool contains( const string<> & s ) const {
      for( unsigned int i = 0; i < _size; i++ ){
         if( contains( i, s )){
            return true;
         }
      }
      return false;
   }
   
   bool contains( const char * s ) const {
      return contains( string<>( (char *) s )); }
   
   unsigned int offset( const string<> & s ) const {
      for( unsigned int i = 0; i < _size; i++ ){
         if( contains( i, s )){
            return i;
         }
      }
      return _maximum;
   }
   
   unsigned int offset( const char * s ) const {
      return offset( string<>( (char *) s )); }
   
   friend void get_range( 
      string<> &d, 
      const string<> &rhs, 
      unsigned int a, unsigned int n 
   ){
      d._size = 0;
      for( unsigned int i = a; ( i < n ) && ( i < rhs._size ); i++ ){
         d += rhs.body[ i ];
      }
   }
   
   friend void get_range( 
      string<> &d, 
      const char *rhs, 
      int a, int n 
   ){
      get_range( d, string<>( (char *) rhs ), a, n );
   }   
   
   friend void get_before( 
      string<> &d, 
      const string<> &rhs, const string<> &pivot 
   ){
      
   }
   
   friend void get_after( 
      string<> &d, 
      const string<> &rhs, const string<> &pivot 
   ){
      
   }
   
   friend io::ostream & operator<<( io::ostream &out, const string<> & x ){
      for( unsigned int i = 0; i < x._size; i++ ){
         out << x.body[ i ];
      }
      return out;
   }  
   
};

// This is the type that users can create.
// It contains the actual storage for the characters, and 
// it contains (inherits) the more abstract string<>, which
// provides the real functionality.
template< unsigned int n >
class string : public string<> {
private:

   char body[ n ];
   
public:

   // constructor: pass our inner string<> the storage and size
   string() : string<>( body, n ){}
   
   // simple forwarding
   void operator= ( char c ){ string<>::operator=( c ); }
   void operator= ( const char *s ){ string<>::operator=( s ); }

   // also simple forwarding, but needs a template
   template< unsigned int x >
   void operator= ( const string< x > & s ){ string<>::operator=( s ); }
   
};

}; // namespace hwcpp
