#include "hwcpp.hpp"
#include "catch_with_main.hpp"

template< size_t N = 200 >
struct ostream : 
   hwcpp::make_ostream< hwcpp::string< N > >
{
    
   ostream & operator=( const char * rhs ){
      hwcpp::make_ostream< hwcpp::string< N > >::sink = rhs;
      return *this;
   }
   
   ostream & clear(){
      return operator=( "" );      
   }
};   

template< size_t N >
bool operator==( const ostream< N > & lhs, const char * rhs ){
   return lhs.sink == rhs;
}

template< typename T, size_t N >
auto & operator<<( T & lhs, const ostream< N > & rhs ){
   return lhs << "[" << rhs.sink << "]";
}

TEST_CASE( "ostream test helper" ) {
    
   ostream<> s;
   
   SECTION( "constructor" ) {    
      REQUIRE( s == "" );
   }
   
   SECTION( "operator=" ) {    
      s = "Ho"; 
      REQUIRE( s == "Ho" );
   }
   
   SECTION( "clear() clears" ) {    
      s.clear();
      REQUIRE( s == "" );
      s = "12";
      REQUIRE( s == "12" );
   }

   SECTION( "clear() returns s" ) {    
      s.clear() = "x";
      REQUIRE( s == "x" );
   }
}

TEST_CASE( "s << char" ) {
    
   ostream<> s;
   
   REQUIRE( s == "" );
    
   s << ( 'H' ); 
   REQUIRE( s == "H" );
   
   s.putc( 'e' );
   REQUIRE( s == "He" );

   s << ( 'l' ) << ( 'l' ) << ( 'o' );
   REQUIRE( s == "Hello" );
}

TEST_CASE( "s << const char *" ) {
    
   ostream<> s;
    
   SECTION( "to an empty s" ) {    
       
      s << "H";
      REQUIRE( s == "H" );
   }      
   
   SECTION( "to a non-empty s" ) {    
       
      s.clear() << "H" << "ello " << "world.";
      REQUIRE( s == "Hello world." );
   }      
  
   SECTION( "using field witdh, left/right, filler" ) {    

      s.clear() << hwcpp::setw( 5 ) << "12" << "34";
      REQUIRE( s == "   1234" );
      
      s.clear() << hwcpp::setfill( '-' );
      REQUIRE( s == "" );
      s << hwcpp::left << hwcpp::setw( 5 ) << "56" << "78";
      REQUIRE( s == "56---78" );
   }      
}
