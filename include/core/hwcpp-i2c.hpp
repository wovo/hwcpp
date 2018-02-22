// ==========================================================================
//
// file : hwcpp-i2c.hpp
//
// ==========================================================================   
   

// ==========================================================================
//
// i2c profiles
//
// according to the "I2C-bus specification and user manual, 
// 4 April 2014", UM10204.pdf, Table 10, p 48
//
// ==========================================================================

template< typename T >
concept bool is_uint8 = std::is_same< 
   T, uint8_t >::value; 

template< typename T >
concept bool is_uint8_iterator = std::is_same< 
   std::remove_reference_t< decltype( *std::begin( std::declval< T& >() ) ) >, 
   uint8_t >::value;

template< typename T >
concept bool _provides_uint8 = 
   is_uint8< T >  
   || is_uint8_iterator< T >; 


struct i2c_profile_root {
   static constexpr bool is_i2c_profile = true;
};

template< typename T >
concept bool is_i2c_profile(){
   return T::is_i2c_profile;
}   

// ========== 100 kHz

struct i2c_profile_100kHz :
   i2c_profile_root
{
   static constexpr uint_fast64_t  f         = 100'000;
   static constexpr ns_type        t_hd_sta  = 4000;
   static constexpr ns_type        t_low     = 4700;
   static constexpr ns_type        t_high    = 4000;
   static constexpr ns_type        t_su_sta  = 4700;
   //static constexpr ns_type        t_hd_sta  =    0;
   static constexpr ns_type        t_su_dat  =  250;
   static constexpr ns_type        t_su_sto  = 4000;
   static constexpr ns_type        t_buf     = 4700;
};	

// ========== 400 kHz
      
struct i2c_profile_400kHz :
   i2c_profile_root
{
   static constexpr uint_fast64_t  f         = 400'000;
   static constexpr ns_type        t_hd_sta  =  600;
   static constexpr ns_type        t_low     = 1300;
   static constexpr ns_type        t_high    =  600;
   static constexpr ns_type        t_su_sta  =  600;
   //static constexpr ns_type        t_hd_sta  =    0;
   static constexpr ns_type        t_su_dat  =  100;
   static constexpr ns_type        t_su_sto  =  600;
   static constexpr ns_type        t_buf     = 1300;
};	

      
// ==========================================================================
//
// i2c bus
//
// ==========================================================================  

struct i2c_bus_marker :
   not_instantiable
{ 
   static constexpr bool is_i2c_bus = true;
};

template< typename T >
concept bool is_i2c_bus(){
   return T::is_i2c_bus;
}

// ========== bit-banged implementation

template< 
   can_pin_oc scl_arg, 
   can_pin_oc sda_arg, 
   is_waiting timing, 
   is_i2c_profile _profile = i2c_profile_100kHz
>
struct i2c_bus_bb_scl_sda :
   i2c_bus_marker
{
   using profile  = _profile;

   private:

   using scl      = pin_oc< scl_arg >;
   using sda      = pin_oc< sda_arg >; 
   
   static void write_bit( bool x ){
      scl::set( 0 );
      timing::template ns< profile::t_low - profile::t_su_dat >::wait();
      sda::set( x );
      timing::template ns< profile::t_su_dat >::wait();
      scl::set( 1 ); 
      timing::template ns< profile::t_high >::wait();
   }
   
   static bool read_bit(){         
      scl::set( 0 );
      timing::template ns< profile::t_low - profile::t_su_dat >::wait();         
      sda::set( 1 );
      timing::template ns< profile::t_su_dat >::wait();         
      scl::set( 1 );
      bool result = sda::get();    
      timing::template ns< profile::t_high >::wait();
      return result;
   }       
     
   static void write_start(){
      sda::set( 1 );
      scl::set( 1 );
      timing::template ns< profile::t_su_sta >::wait();
      sda::set( 0 );
      timing::template ns< profile::t_hd_sta >::wait();
      scl::set( 0 );
   }

   static void write_stop(){
      scl::set( 0 );
      timing::template ns< profile::t_low - profile::t_su_dat >::wait();         
      sda::set( 0 );
      timing::template ns< profile::t_su_dat >::wait(); 
      scl::set( 1 );
      timing::template ns< profile::t_su_sto >::wait();   
      sda::set( 1 );
      timing::template ns< profile::t_buf >::wait();
   }
       
   static bool read_ack(){
      return ! read_bit(); 
   } 
   
   static void write_ack(){
      write_bit( 0 );
   }

   static void write_nack(){
      write_bit( 1 );
   }
   
   static void write_byte( uint8_t x ){
      for( int i = 0; i < 8; ++i){
         write_bit( ( x & 0x80 ) != 0 );
         x = x << 1;
      }         
   }

   static uint8_t read_byte(){
      uint8_t result = 0;
      for( int i = 0; i < 8; ++i ){
         result = result << 1;
         if( read_bit() ){
            result |= 0x01;
         } 
      }   
      return result;     
   }        
   
public:     
     
   static void init(){
      timing::init();
      scl::init();
      sda::init();
      
      scl::set( 1 );
      sda::set( 1 );
   }
   
   static void write( uint8_t address, const uint8_t data[], int n ){
      write_start();
      write_byte( address << 1 );
      for( int i = 0; i < n; ++i ){
         read_ack();
         write_byte( data[ i ] );
      }               
      read_ack();
      write_stop();
   }   
   
   template< size_t n >
   static void write( uint8_t address, const std::array< uint8_t, n > & data ){
      write_start();
      write_byte( address << 1 );
      for( int i = 0; i < n; ++i ){
         read_ack();
         write_byte( data[ i ] );
      }               
      read_ack();
      write_stop();
   }           

/*
template< _provides_uint8 T >
static void write_one_element( T );

static void write_one_element( uint8_t x ){
   for( int i = 0; i < 8; ++i ){
      read_ack();
      write_byte( i );
   }    
}

template< is_uint8_iterator T >
static void write_one_element( T a ){
   for( const auto x : a ){
      write_element( x );
   }
}

template< _provides_uint8 T >
static void write_element( T a ){
   write_one_element( a );
}

template< _provides_uint8 T, _provides_uint8... Ts >
static void write_element( T a, Ts... as ){
   write_one_element( a );
   write_element( as... );   
}

   template< _provides_uint8... Ts >
   static void write( uint8_t address, Ts... items ){
      write_start();
      write_byte( address << 1 );
      write_element( items... );           
      read_ack();
      write_stop();
   }           
*/
   
   static void read( uint8_t address, uint8_t data[], int n ){
      write_start();
      write_byte( ( address << 1 ) | 0x01 );    
      read_ack();
      for( int i = 0; i < n; ){
         data[ i ] = read_byte();
         if( ++i < n ){
            write_ack();
         }            
      }               
      write_stop();
   }      
	  
   template< size_t n >
   static void read( uint8_t address, const std::array< uint8_t, n > & data ){
      write_start();
      write_byte( ( address << 1 ) | 0x01 );    
      read_ack();
      for( int i = 0; i < n; ){
         data[ i ] = read_byte();
         if( ++i < n ){
            write_ack();
         }            
      }               
      write_stop();
   }      
	  
};// i2c_bus_bb_scl_sda

// ==========================================================================
//
// i2c channel
//
// ==========================================================================  
/*
struct i2c_channel_marker :
   not_instantiable
{ 
   static constexpr bool is_i2c_channel = true;
};

template< typename T >
concept bool is_i2c_channel(){
   return T::is_i2c_channel;
}

// ========== channel constructor

template< 
   is_i2c_bus      _bus, 
   uint8_t         _address
>
struct i2c_channel :
   i2c_channel_marker
{
private:

   static auto constexpr address = _address;
   using bus                     = _bus;
   using profile                 = typename _bus::profile;

   static void init(){
      bus::init();
   }

   static void write( const uint8_t data[], int n ){
      bus::write( data, n );
   }           
   
   static void read( uint8_t data[], int n ){
      bus::read( data, n );
   } 
   
}; // i2c_channel
*/
