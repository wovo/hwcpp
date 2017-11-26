namespace hwcpp {

   template < typename B >
   class pcf8574x 
      : public port_oc< 8 > 
   {
      private:
      public:
   
      // HARDWARE_REQUIRE_ARCHETYPE( bus, has_i2c_bus );  
      
      typedef port_oc< 8 >::value_type value_type;
      value_type buffer;
      
      B bus;
      int base;
      int address;
      
      pcf8574x( B bus, int base, int address ): 
         bus{ bus }, base{ base }, address{ address },
         p0{ * this }{}
   
      void flush(){
         bus.write( base + address, &buffer, 1 );
      }   
      
      auto read_byte(){
         value_type result;
         bus.read( base + address, &result, 1 );   
         return result;
      }
      
      template< int pin > 
      struct pin_template 
         : public pin_oc
      {
         
         pcf8574x<B> & chip;
         pin_template( pcf8574x<B> & chip ): chip{ chip }{}
      
         void init(){
            chip.bus.init();
         }
      
         void set( bool value ){
            if( value ){
               chip.buffer |= ( 0x01 << pin );
            } else {
               chip.buffer &= 0xFF ^ ( 0x01 << pin );
            }
            chip.flush();
         }   
         
         bool get(){
            value_type x = chip.read_byte();
            return x & ( 0x01 << pin );
         }
      };          
      
   public:
      
      void init() override {
         bus.init();
      }         

      void set( value_type x ) override {
         buffer = x;
         flush(); 
      }    
      
      value_type get() override {
         return read_byte();
      }
      
      pin_template< 0 > p0;
/*      
      typedef pin_template< 1 > p1; 
      typedef pin_template< 2 > p2; 
      typedef pin_template< 3 > p3; 
      typedef pin_template< 4 > p4; 
      typedef pin_template< 5 > p5; 
      typedef pin_template< 6 > p6; 
      typedef pin_template< 7 > p7; 
*/      
   }; 
   
/*
   // interface for a pcf8547 I2C 8 bit I/O extender
   template< typename B, int address = 0 > 
   class pcf8574 : public pcf8574x< bus, 0x20, address > {
      //HARDWARE_REQUIRE_ARCHETYPE( bus, has_i2c_bus );         
   };
*/ 
   // interface for a pcf8547a I2C 8 bit I/O extender
   template< typename B > 
   auto pcf8574a( B && bus, int address = 0 ){
      return pcf8574x< B >( bus, 0x38, address );
   } 

}; // namespace hwcpp
