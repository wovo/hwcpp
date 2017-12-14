// ==========================================================================
//
// file : hwcpp-string.hpp
//
// ==========================================================================


// ==========================================================================
//
// to get started
//
// ==========================================================================

// forward declaration of the class template   
template< size_t N > class string;

// return the end iterator from an asciz string
constexpr const char * asciz_beyond( const char * p ){
   while( *p++ != '\0' ){
      ++p;
   }
   return p;
}


// ==========================================================================
//
// string< N >
//
// ==========================================================================

template<>
class string< 0 > {
private:  

   // maximum length (maximum number of valid characters) in the string
   const size_t _capacity;
   
   // current length (number of valid characters) of the string
   size_t _length;

   // pointer to the array that stores the characters
   char * const _content;
   
   inline static char dummy = '\0';
   
   template< size_t > friend class string;
   
   // object constructor, called by string< N >'s constructors
   template< typename T > 
   constexpr string( size_t _capacity, char * _content, const T & value ):
      _capacity{ _capacity },
      _length{ 0 },
      _content{ _content }
   {
      for( char c : iterate( value ) ){
         if( _length < _capacity ){
            _content[ _length++ ] = c;
         }
      }
   }    
   
   //=========================================================================
   //
   // iterator(s) for char sources
   //
   //=========================================================================
   
   class iterate { 
   private:
   
      const char c;
      const char * const start;
      const char * const beyond;
	  
   public:
    
      // iterate over a single char
      constexpr iterate( char ch ) :
         c( ch ), start( &c ), beyond( &this->c + 1) 
      {}
       
      // iterate over an asciz string       
      constexpr iterate( const char *p ) :
         c( 0 ), start( p ), beyond( asciz_beyond( p )) {
      }
 
      // iterate over anything that has begin() and end() 
      template< typename T >
      constexpr iterate( const T & s ) :
         c( 0 ), start( s.begin() ), beyond( s.end() )
      {}   

      constexpr const char * begin() const {
         return start;
      }
        
      constexpr const char * end() const {
         return beyond;
      }
   };   
   
public:   

   //=========================================================================
   //
   // get info
   //
   //=========================================================================   
   
   constexpr size_t capacity() const { return _capacity; }
   constexpr size_t length() const { return _length; }
   
   //=========================================================================
   //
   // operator[]
   //
   //=========================================================================
   
   constexpr bool valid_index( const size_t n ) const {
      return( n < _length );
   }   
   
   char & operator[]( int n ){
      return valid_index( n ) ? _content[ n ] : dummy;
   }

   char operator[]( int n ) const {
      return valid_index( n ) ? _content[ n ] : '?';
   }   

   
   //=========================================================================
   //
   // assign
   //
   //=========================================================================   
   
   string & clear(){
      _length = 0;
      return *this;
   } 
   
   template< typename T >
   string & operator=( const T & rhs ){
      return clear() += rhs;
   }      


   //=========================================================================
   //
   // append
   //
   //=========================================================================

   string & append( char c ){
      if( _length < _capacity ){
         _content[ _length++ ] = c;
      }   
      return *this;
   }
   
   void putc( char c ){
      append( c );
   }
   
   string & operator+=( char c ){
      return append( c );
   }
   
   string & operator<<( char c ){
      return append( c );
   }
   
   template< typename T >
   string & operator+=( const T & rhs ){
      for( char c : iterate( rhs ) ){
         append( c );
      }
      return *this;
   }
   
   template< typename T >
   string & operator<<( const T & rhs ){
      return operator+=( rhs );
   }   
   
   
   //=========================================================================
   //
   // iterate
   //
   //=========================================================================       
   
   char * begin() {
      return _content;
   }

   char * end() {
      return _content + _length;
   }   
   
   const char * begin() const {
      return _content;
   }

   const char * end() const {
      return _content + _length;
   }     

   
   //=========================================================================
   //
   // compare 
   //
   //=========================================================================        
   
   template< typename T >
   bool operator==( const T & rhs ) const {         
      size_t n = 0;
      for( const char c : iterate( rhs ) ){       
          if( ( n >= _length ) || ( c != _content[ n ] ) ){
              return false;
          }
		  ++n;
      }
      return n == _length;
   }    

   template< typename T >
   bool operator!=( const T & rhs ) const {   
      return ! ( *this == rhs );
   }     
   
}; // class string< N >

//============================================================================
//
// reverse compare
//  
//============================================================================

/*
template< typename T >   
typename std::enable_if < 
   ! std::is_base_of< string< 0 >, T >::value, bool >::type    
operator==( const T & lhs, const string< 0 > & rhs ){
   return rhs.operator==( lhs );
}

template< typename T >   
typename std::enable_if < 
   ! std::is_base_of< string< 0 >, T >::value, bool >::type    
operator!=( const T & lhs, const string< 0 > & rhs ){
   return rhs.operator!=( lhs );
}
*/

//=============================================================================
//
// operaror<<
//
//=============================================================================
   
template< class T >
auto & operator<< ( T & lhs, const string< 0 > & rhs ){
   for( const auto & c : rhs ){
      lhs << c;
   };
   return lhs;   
}


   
// ==========================================================================
//
// string< 0 >
//
// ==========================================================================

template< size_t N >
class string: public string< 0 > {
private:

   // the storage for the characters
   char content[ N ];
   
public:

   string():
      string< 0 >( N, content, "" )
   {}      
   
   template< typename T > 
   string( const T & x ):
      string< 0 >( N, content, x )
   {}      

   // avoid ambiguity
   string & operator=( const string & rhs ){
       string< 0 >::operator=( rhs );
       return *this;
   }
   
}; // class string< 0 >