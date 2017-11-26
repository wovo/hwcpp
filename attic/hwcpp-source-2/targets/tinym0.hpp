#include "lpc11c14_301.hpp"

namespace hwcpp {
 
   const int ili93xx_cmds[] [ 2 ] = {
  	 	   { 0x00e5, 0x78F0 },     
         { 0x0001, 0x0100 },    
         { 0x0002, 0x0700 },                  
         { 0x0003, 0x1030 },   
         { 0x0004, 0x0000 },                                  
         { 0x0008, 0x0202 },	           
         { 0x0009, 0x0000 },        
         { 0x000a, 0x0000 },        
         { 0x000c, 0x0001 },        
         { 0x000d, 0x0000 },         
         { 0x000f, 0x0000 },
         { 0x0010, 0x0000 },  
         { 0x0011, 0x0007 },
         { 0x0012, 0x0000 },                                                                
         { 0x0013, 0x0000 },
         { 0x0007, 0x0001 },         
         { 0x0010, 0x1690 },  
         { 0x0011, 0x0227 },
         { 0x0012, 0x009d },                 
         { 0x0013, 0x1900 },  
         { 0x0029, 0x0025 },
         { 0x002b, 0x000d },
         { 0x0020, 0x0000 },                                                           
         { 0x0021, 0x0000 },          
         { 0x0030, 0x0007 },
         { 0x0031, 0x0303 },  
         { 0x0032, 0x0003 },
         { 0x0035, 0x0206 },
         { 0x0036, 0x0008 },
         { 0x0037, 0x0406 },
         { 0x0038, 0x0304 },       
         { 0x0039, 0x0007 },    
         { 0x003c, 0x0602 },
         { 0x003d, 0x0008 },
         { 0x0050, 0x0000 },
         { 0x0051, 0x00ef },                  
         { 0x0052, 0x0000 },                  
         { 0x0053, 0x013f },
         { 0x0060, 0xa700 },       
         { 0x0061, 0x0001 },
         { 0x006a, 0x0000 },
         { 0x0080, 0x0000 },
         { 0x0081, 0x0000 },
         { 0x0082, 0x0000 },
         { 0x0083, 0x0000 },
         { 0x0084, 0x0000 },
         { 0x0085, 0x0000 },
         { 0x0090, 0x0010 },    
         { 0x0092, 0x0600 }, 
         { 0x0007, 0x0133 }, 
         { -1,     0      } 
      };         

   template<
      typename _en,
      typename _le,
      typename _dir,
      typename _cs,
      typename _rs,
      typename _wr,
      typename _rd,
      typename _bus,
      typename timing
   >
   struct ili93xx 
      : public archetypes::frame< archetypes::vector< 320, 240 >> 
   {
   
      typedef hardware::pin_out_from< _en > en;
      typedef hardware::pin_out_from< _le > le;
      typedef hardware::pin_out_from< _dir > dir;
      typedef hardware::pin_out_from< _cs > cs;
      typedef hardware::pin_out_from<  _rs > rs;
      typedef hardware::pin_out_from< _wr > wr;
      typedef hardware::pin_out_from< _rd> rd;
      typedef hardware::port_in_out_from< _bus > bus;       
         
      static void init(){      
         en::init();
         le::init();
         dir::init();
         cs::init();
         rs::init();
         wr::init();
         rd::init();
         bus::init();    
         for( int i = 0; ili93xx_cmds[ i ][ 0 ] != -1; i++ ){
            LCD_WriteReg( ili93xx_cmds[ i ][ 0 ], ili93xx_cmds[ i ][ 1 ]); 
            hardware::target::timing::wait( 5 * hardware::target::timing::us );
         }    
      }
      
     
static void lcd_send( int d ) {
   bus::direction_set_output();
   dir::set( 1 );
   en::set( 0 );
   bus::set( d );
   le::set( 1 );
   le::set( 0 );
   bus::set( d >> 8 );
}

static int lcd_read() {
   bus::direction_set_input();
   dir::set( 0 );
   en::set( 0 );
   hardware::target::timing::wait( 10 * hardware::target::timing::us );                       
   int d1 = bus::get();	 
   en::set( 1 );        	
   hardware::target::timing::wait( 10 * hardware::target::timing::us );                
   int d2 = bus::get();	
   dir::set( 1 );					
   return(( d1<<8 ) | d2 ); 
}      

static void Write_Cmd( int reg ){
   cs::set( 0 ); 
	rs::set( 0 ); 
   rd::set( 1 ); 
	lcd_send( reg ); 
	wr::set( 0 ); 
	wr::set( 1 );
	cs::set( 1 ); 
}

static void Write_Dat( int data){
	cs::set( 0 ); 
	rs::set( 1 ); 
   rd::set( 1 ); 
   lcd_send( data );
	wr::set( 0 );
	wr::set( 1 ); 	
	cs::set( 1 );
}

static uint16_t LCD_ReadDat(){
	cs::set( 0 ); 
	rs::set( 1 );
   wr::set( 1 ); 
	rd::set( 0 ); 
	int temp = lcd_read();	                                  
	rd::set( 1 ); 
	cs::set( 1 );
	return temp;   
}

static void LCD_WriteReg( int reg, int data ){
	Write_Cmd( reg );
	Write_Dat( data );
}

static int LCD_Read_Reg( int reg ){
	Write_Cmd( reg );                    
	return LCD_ReadDat();	 
}


      
      static void register_write( int a, int d ){
         LCD_WriteReg( a, d  );
      }
      
      static int register_read( int a ){
         return LCD_Read_Reg( a );  
      }
      
      static void LCD_SetCursor( int  x, int y ){
	      LCD_WriteReg( 0x20, y);
	      LCD_WriteReg( 0x21, 320 - x );	
      }  
   
      static int from_color( color c ){
         return 
            (( c.blue_get()  & 0xF8 ) >> 3 ) |
            (( c.red_get()   & 0xF8 ) << 8 ) |
            (( c.green_get() & 0xFC ) << 3 );
      }
   
      static color to_color( int c ){
         return color(
            ( c >> 8 ) & 0xF8,
            ( c >> 3 ) & 0xFC,
            ( c << 3 ) & 0xF8 );
      }
   
      static void clear( color c = white ){
         int d = from_color( c );
	      LCD_SetCursor( 0x00, 0x0000 );      
   	   Write_Cmd( 0x22 ); // write RAM prepare             
	      for( int index = 0; index < 76800; index++ ){
		      Write_Dat( d );    
   	   } 
      }
      
      static void pixel_write( vector p, color c ){
	      LCD_SetCursor( p.x_get(), p.y_get() );                                              
	      Write_Cmd( 0x22 ); // write RAM prepare                                          
	      Write_Dat( from_color( c )); 	         
      }
      
      static color pixel_read( vector p ){
	      LCD_SetCursor( p.x_get(), p.y_get() );                                              
	      Write_Cmd( 0x22 ); // write RAM prepare                                          
	      return to_color( LCD_ReadDat() ); 	         
      }
   
   };

   struct ili9300 {
   };
   
   struct ili9325 {
   };
   
   typedef ili93xx<
      hardware::target::gpio_1_11,
      hardware::target::gpio_0_4,
      hardware::target::gpio_0_3,
      hardware::target::gpio_3_0,
      hardware::target::gpio_0_5,
      hardware::target::gpio_2_11,
      hardware::target::gpio_2_10,
      hardware::port_in_out_from_pins<
         hardware::target::gpio_1_0,   
         hardware::target::gpio_1_1,
         hardware::target::gpio_1_2,   
         hardware::target::gpio_1_4,   
         hardware::target::gpio_1_5,   
         hardware::target::gpio_1_8,   
         hardware::target::gpio_1_9,   
         hardware::target::gpio_1_10         
      >,
      hardware::target::timing
   > lcd; 
   
}; // namespace hwcpp