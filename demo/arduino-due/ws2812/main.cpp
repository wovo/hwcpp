#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::clocking;
using pin = hwcpp::pin_out< target::d7 >;

const auto fuz = 100;

template< typename pin, typename timing >
void ds_write( int d ){
    
         pin::set( 0 );
         timing:: template ns< 60'000 >::wait();
         pin::set( 1 );   
    
   for( int i = 0; i < 24; ++i ){
      if( ( d & 1 ) != 0 ){
          
         timing:: template ns< 350 - fuz >::wait();
         pin::set( 0 );
         timing:: template ns< 800 - fuz >::wait();
         pin::set( 1 );
      
      } else {
          
         timing:: template ns< 700 - fuz >::wait();
         pin::set( 0 );
         timing:: template ns< 600 -fuz >::wait();
         pin::set( 1 );          
      }     
      d = d >> 1;     
   }
}

int main(){ 
   timing::init();
   pin::init();
   pin::set( 1 );
   
   for(;;){
      timing::ms< 10 >::wait();
      
   
         
      ds_write< pin, timing >( 0x00AAAA );
      //ds_write< pin, timing >( 0x111111 );
      //ds_write< pin, timing >( 0xAAAAAA );
      //ds_write< pin, timing >( 0x111111 );
       

   }
}

