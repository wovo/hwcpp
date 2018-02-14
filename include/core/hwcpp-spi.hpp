// ==========================================================================
//
// file : hwcpp-spi.hpp
//
// ==========================================================================

template<
   can_pin_out  _sclk,
   can_pin_in   _miso,
   can_pin_out  _mosi,
   is_waiting   _timing   
>
struct spi_bus_bb_sclk_miso_mosi {

   using sclk    = pin_out< _sclk >;
   using miso    = pin_in<  _miso >;
   using mosi    = pin_out< _mosi >;
   using timing  = _timing;
   
   static void init(){
      sclk::init();
      miso::init();
      mosi::init();	  
	  timing::init();
   }
   
   static void wait_half_period(){
      timing::template ns< 500 >::wait();
   }
   
   template< typename data_type, int bits = 8 >
   static void write_and_read_single( data_type d_out, data_type & d_in ){
      d_in = 0;
      for( uint_fast8_t i = 0; i < bits; ++i ){
         mosi::set( ( d_out & ( 0x01 << ( bits - 1 ) ) ) != 0 );		  
         wait_half_period();
         sclk::set( 1 );
         wait_half_period();
         d_out = d_out << 1;
         d_in = d_in << 1;
         d_in |= ( miso::get() ? 0x01 : 0x00 );
         // if( miso::get()){ d_in |= 0x01; }
         sclk::set( 0 );
      }		  
      mosi::set( 0 );
   }
   
   // flyweight!
   template< typename sel > // , size_t n >
   static void write_and_read( 
      const uint8_t data_out[], 
      uint8_t data_in[],
      uint_fast8_t n
   ){

      sel::set( 0 );
      for( uint_fast8_t i = 0; i < n; ++i ){
         write_and_read_single( data_out[ i ], data_in[ i ] );
      }      
      wait_half_period();
      sel::set( 1 );
      wait_half_period();
   }   
   
}; // struct spi_bus_bb_sclk_miso_mosi
