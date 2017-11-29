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
   using value_type = bool;  
   static constexpr bool is_i2c_bus = true;
};

template< typename T >
concept bool is_i2c_bus(){ 
   return T::is_i2c_bus;
}

template< typename scl_arg, typename sda_arg >
struct i2c_bus_scl_sda 
   i2c_bus_marker
{
   using scl = pin_oc( scl_arg );
   using sda = pin_oc( sda_arg );  
   
   
   static void write(
      uint8_t a, 
      const uint8_t data[], 
      int n 
   ){
   }	   
      
   static void read(
      uint8_t a, 
      uint8_t data[], 
      int n 
   ){
   }	   
      

      void write_bit( bool x ){
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );
         bus.sda.set( x );
         timing.wait( profile.t_su_dat );
         bus.scl.set( 1 ); 
         timing.wait( profile.t_high );
      }
   
      bool read_bit(){         
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );         
         bus.sda.set( 1 );
         timing.wait( profile.t_su_dat );         
         bus.scl.set( 1 );
         bool result = bus.sda.get();    
         timing.wait( profile.t_high );
         return result;
      }       
     
      void write_start(){
         bus.sda.set( 1 );
         bus.scl.set( 1 );
         timing.wait( profile.t_su_sta );
         bus.sda.set( 0 );
         timing.wait( profile.t_hd_sta );
         bus.scl.set( 0 );
      }

      void write_stop(){
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );         
         bus.sda.set( 0 );
         timing.wait( profile.t_su_dat ); 
         bus.scl.set( 1 );
         timing.wait( profile.t_su_sto );   
         bus.sda.set( 1 );
         timing.wait( profile.t_buf );
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
   
      void write_byte( byte x ){
         for( int i = 0; i < 8; i++ ){
            write_bit( ( x & 0x80 ) != 0 );
            x = x << 1;
         }         
      }

      unsigned char read_byte(){
         byte result = 0;
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
         timing.init();
         bus.scl.init();
         bus.scl.set( 1 );   		
         bus.sda.init();
         bus.sda.set( 1 );
      }
   
      void write( byte address, const byte data[], int n ){
         write_start();
         write_byte( address << 1 );
         for( int i = 0; i < n; i++ ){
            read_ack();
            write_byte( data[ i ] );
         }               
         read_ack();
         write_stop();
      }           
   
      void read( byte address, byte data[], int n ){
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

   