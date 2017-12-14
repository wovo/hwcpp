// ==========================================================================
//
// file : pcf857.hpp
//
// ==========================================================================   
   

// ==========================================================================
//
// pcf8574 generic
//
// ==========================================================================  

template< is_i2c_bus bus, int address >
struct pcf8574_generic {
	
   static inline uint8_t write_buffer;
   static inline uint8_t read_buffer;
   
public:

   static void init(){
      bus::init();       
   }
     
   static void flush(){
      bus::write( address, & write_buffer, 1 ); 
   }
   
   static void refresh(){
      bus::read( address, & read_buffer, 1 ); 
   }
   
   static void set( uint_fast8_t x ){
      write_buffer = x;   
   }  
   
   static uint_fast8_t get() {
      return read_buffer;  
   }  	  
};	

// ==========================================================================
//
// pcf8574 and pcf8574a chips 
// (the difference is only in the base address)
//
// ==========================================================================  

template< is_i2c_bus bus, int address = 0 >
using pcf8574 = port_oc_buffered_base< 	
   pcf8574_generic< bus, 0x20 + address >, 
   8 >;

template< is_i2c_bus bus, int address = 0 >
using pcf8574a = port_oc_buffered_base< 	
   pcf8574_generic< bus, 0x38 + address >, 
   8 >;

   