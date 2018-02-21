#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;

template< 
   hwcpp::can_pin_out _d,
   hwcpp::can_pin_out _e,
   hwcpp::can_pin_out a0,
   hwcpp::can_pin_out a1,
   hwcpp::can_pin_out a2,
   hwcpp::is_waiting
> struct cd4099 : 
   hwcpp::_port_out_buffer_root< 8 >
{
   using a = hwcpp::port_out< a0, a1, a2 >;
   using d = hwcpp::pin_out< _d >;
   using e = hwcpp::pin_out< _e >;
   
   static void init(){
      a::init();
      d::init();
      e::init();
      e::set( 1 );       
   }
   
   static void HWCPP_INLINE flush(){
      for( uint8_t i = 0; i < 8; ++i ){
         a::set( i );
         d::set( ( write_buffer & ( 1 << i )) != 0 );
         e::set( 0 );
         timing::ns< 100 >::wait();
         e::set( 1 );
      }         
   }
};   
   
int main(){ 
   using chip = hwcpp::_port_out_from_buffers_builder< cd4099<
      target::d8, 
      target::d9, 
      target::d10, 
      target::d11, 
      target::d12, 
      timing
   >>;    
   hwcpp::kitt< chip, timing::ms< 50 >  >();
}