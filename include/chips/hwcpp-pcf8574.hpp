// ==========================================================================
//
// file : pcf8574.hpp
//
// ==========================================================================   
   

// ==========================================================================
//
// pcf8574 generic
//
// ==========================================================================  

template< is_i2c_bus bus, int address >
struct pcf8574_generic :
   port_oc_buffer_root< 8 >
{
   static void init(){
      bus::init();       
   }
     
   static void flush(){
      bus::write( address, & write_buffer, 1 ); 
   }
   
   static void refresh(){
      bus::read( address, & read_buffer, 1 ); 
   }	  
};	

// ==========================================================================
//
// pcf8574 and pcf8574a chips 
// (the difference is only in the base address)
//
// ==========================================================================  

template< is_i2c_bus bus, int address = 0 >
using pcf8574 = 
    _port_oc_from_buffers_builder< 	
    pcf8574_generic< bus, 0x20 + address > >;

template< is_i2c_bus bus, int address = 0 >
using pcf8574a = 
    _port_oc_from_buffers_builder< 	
    pcf8574_generic< bus, 0x38 + address > >;

   