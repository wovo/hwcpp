// ============================================================================
//
// file : i2c.hpp
//
// ============================================================================   
   

// ============================================================================
//
// i2c bus
//
// ============================================================================  

struct i2c_bus_marker :
   not_instantiable
{ 
   static constexpr bool is_i2c_bus = true;
};

template< typename T >
concept bool is_i2c_bus(){
   return T::is_i2c_bus;
}

template< typename scl_arg, typename sda_arg, has_waiting timing >
struct i2c_bus_scl_sda :
   i2c_bus_marker
{
   using scl = pin_oc< scl_arg >;
   using sda = pin_oc< sda_arg >;  
   using delay = typename timing::template us< 1 >;
   
   void write_bit( bool x ){
      scl::set( 0 );
      delay::wait();
      sda::set( x );
      delay::wait();
      scl::set( 1 ); 
      delay::wait();
   }
   
   bool read_bit(){         
      scl::set( 0 );
      delay::wait();         
      sda::set( 1 );
      delay::wait();         
      scl::set( 1 );
      bool result = sda::get();    
      delay::wait();
      return result;
   }       
     
   void write_start(){
      sda::set( 1 );
      scl::set( 1 );
      delay::wait();
      sda::set( 0 );
      delay::wait();
      scl::set( 0 );
   }

   void write_stop(){
      scl::set( 0 );
      delay::wait();         
      sda::set( 0 );
      delay::wait(); 
      scl::set( 1 );
      delay::wait();   
      sda::set( 1 );
      delay::wait();
   }
       
   bool read_ack(){
      return ! read_bit(); 
   } 
   
   void write_ack(){
      write_bit( 0 );
   }

   void write_nack(){
      write_bit( 1 );
   }
   
   void write_byte( uint8_t x ){
      for( int i = 0; i < 8; i++ ){
         write_bit( ( x & 0x80 ) != 0 );
         x = x << 1;
      }         
   }

   uint8_t read_byte(){
      uint8_t result = 0;
      for( int i = 0; i < 8; i++ ){
         result = result << 1;
         if( read_bit() ){
            result |= 0x01;
         } 
      }   
      return result;     
   }        
   
public:     
     
   void init(){
      timing::init();
      scl::init();
      sda::init();
      
      scl::set( 1 );   		
      sda::set( 1 );
   }
   
   void write( uint8_t address, const uint8_t data[], int n ){
      write_start();
      write_byte( address << 1 );
      for( int i = 0; i < n; i++ ){
         read_ack();
         write_byte( data[ i ] );
      }               
      read_ack();
      write_stop();
   }           
   
   void read( uint8_t address, uint8_t data[], int n ){
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
	  
};	

   