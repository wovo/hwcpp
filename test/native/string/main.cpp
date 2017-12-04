#include "hwcpp.hpp"
#include "catch_with_main.hpp"

const char * contains( const hwcpp::string<0> & s, const char * p ){
   size_t n = 0;
   while( *p != '\0' ){
      if( *p != s[ n ] ){
         return "char mismatch";          
      }
      ++n;
      ++p;
   }
   if( n != s.length() ){
      return "length mismatch";       
   }
   return nullptr;
}

TEST_CASE( "constructors" ){
    
   SECTION( "default constructor" ) {
      hwcpp::string< 100 > s;
      
      REQUIRE( s.capacity() == 100 );
      REQUIRE( s.length() == 0 );
      
      REQUIRE( s == "" );
      REQUIRE( "" == s );
      REQUIRE( s == s );
      REQUIRE( s != "a" );
      
      REQUIRE( nullptr == contains( s, "" ) ); 
   }  

   SECTION( "char constructor s<100>" ) {
      hwcpp::string< 100 > s( 'x' );
      
      REQUIRE( s.capacity() == 100 );
      REQUIRE( s.length() == 1 );
      
      REQUIRE( s == "x" );
      REQUIRE( "x" == s );
      REQUIRE( s == s );
      REQUIRE( s != "a" );
      
      REQUIRE( nullptr == contains( s, "x" ) ); 
   }  

   SECTION( "char constructor s<1>" ) {
      hwcpp::string< 1 > s( 'x' );
      
      REQUIRE( s.capacity() == 1 );
      REQUIRE( s.length() == 1 );
      
      REQUIRE( s == "x" );
      REQUIRE( "x" == s );
      REQUIRE( s == s );
      REQUIRE( s != "a" );
      
      REQUIRE( nullptr == contains( s, "x" ) ); 
   }  

}

TEST_CASE( "assignment" ){
   hwcpp::string< 100 > s;
    
   SECTION( "of a const char *" ){
      s = "";
      REQUIRE( nullptr == contains( s, "" ) ); 
      s = "x";
      REQUIRE( nullptr == contains( s, "x" ) ); 
      s = "Hello";
      REQUIRE( nullptr == contains( s, "Hello" ) ); 
      s = "";
      REQUIRE( nullptr == contains( s, "" ) ); 
   }
}

/*

TEST_CASE( "the ostream mockup & write a char" ) {
    
   ostream s;
   REQUIRE( s.sink == "" );

   s.putc( 'H' );
   REQUIRE( s.sink == "H" );
   
   s.putc( 'e' );
   REQUIRE( s.sink == "He" );
}

TEST_CASE( "writing a const char *" ) {
    
   ostream s;
   REQUIRE( s.sink == "" );
   REQUIRE( s.sink != "Hello world." );
   
   s << "H";
   REQUIRE( s.sink != "" );
   REQUIRE( s.sink == "H" );
   
   s << "ello " << "world.";
   REQUIRE( s.sink != "" );
   REQUIRE( s.sink == "Hello world." );
  
   s.sink = "";
   s << hwcpp::setw( 5 ) << "12" << "34";
   REQUIRE( s.sink == "   1234" );
   s << hwcpp::setfill( '-');
   s << hwcpp::left << hwcpp::setw( 5 ) << "56" << "78";
   REQUIRE( s.sink == "   123456---78" );
}

*/
