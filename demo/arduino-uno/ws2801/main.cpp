#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

struct ws2801 {
   using ck = hwcpp::pin_out< target::d2 >;
   using si = hwcpp::pin_out< target::d3 >;
   
   static void init(){
      ck::init();
      si::init();
      timing::init();
   }   
   
   static void send( uint8_t b ){
      for( unsigned int i = 0; i < 8; ++i ){
         si::set( ( b & 0x80 ) != 0 );
         b = b << 1;
         ck::set( 1 );
         timing::ns< 1'000 >::wait();
         ck::set( 0 );
         timing::ns< 1'000 >::wait();
      }
   }
   
   template< size_t n >
   static void send( std::array< uint8_t, n > data ){
      timing::us< 1'000 >::wait();
      for( unsigned int i = 0; i < n; ++i ){
         send( data[ i ] );
      }      
   }
};

int main( void ){
   hwcpp::ostream< uart > cout;    
   timing::ms< 1'000 >::wait();
   cout << "WS2801 demo\n";
   
   using chip = ws2801;
   chip::init();
   timing::init();
   
   for( unsigned int i = 0;; ++i ){
      std::array< uint8_t, 12 > d = { 0 };
      //if( i % 2 ){ d[ 0 ] = d[ 3 ] = d[ 6 ] = d[ 9 ] = d[ 12 ]= 255; }
      d[ 3 * ( i % 4 ) ] = 255;
      timing::ms< 200 >::wait();
	  chip::send( d );
   }

}