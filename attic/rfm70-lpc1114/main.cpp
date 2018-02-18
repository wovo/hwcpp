//===========================================================================
// GNU C++ for LPC1114 + base board 
// show rotary encoder switches on 7-segment display
// Wouter van Ooijen - wouter@voti.nl
// license: zlib
//===========================================================================

#include "LPC11xx.h"
#include "pins.h"
#include "rfm70.h"

void wait( unsigned int t ){
   while( t > 1000 ){
      wait( 1000 ); 
      t -= 1000;
   }  
   SysTick->CTRL = 0;      // stop the timer
   SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
   SysTick->VAL = 0;       // clear the timer
   SysTick->CTRL = 1;      // start the timer
   while( ( SysTick->CTRL & ( 1 << 16 ) ) == 0){} // wait for timeout

}

class input_output_pin_lpc1: public pins::input_output_pin {
private:
   volatile int *data_pointer;
   volatile int *direction_pointer;
   unsigned int mask;
   
   static volatile int *gpioreg( unsigned int port, unsigned int offset = 0 ){
      return (volatile int *)( 0x50000000 + port * 0x10000 + offset );
   }  
   
public: 
   input_output_pin_lpc1( unsigned int port, unsigned int pin ):
      data_pointer( gpioreg( port, 0x04 << pin )),
      direction_pointer( gpioreg( port, 0x8000 )),
      mask( 1 << pin ){}
   
   void direction_set_input(){
      *direction_pointer &= ~ mask;
   }
   
   void direction_set_output(){
      *direction_pointer |= mask;  
   }
   
   void set( bool x ){
      *data_pointer = x ? -1 : 0;        
   }
   
   bool get(){ 
      return *data_pointer != 0;
   }
};

class lpc1114 {
public:
   input_output_pin_lpc1 pin( unsigned int port, unsigned int pin ){
      return input_output_pin_lpc1( port, pin );
   }
};  

void Receive_Packet( rfm70 &radio, pins::output_pin &led){
	unsigned char len,i,chksum;
	unsigned char rx_buf[ RFM70_MAX_PACKET_LEN ];

	if( ! radio.receive_fifo_empty() ){
		do {
			len=radio.register_read( RFM70_CMD_R_RX_PL_WID );

			if( len <= RFM70_MAX_PACKET_LEN ){
				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
			} else {
				radio.register_write( RFM70_CMD_FLUSH_RX,0 );
			}
							
		} while( ! radio.receive_fifo_empty());
		
		chksum = 0;
		for(i=0;i<16;i++){
			chksum +=rx_buf[i]; 
		}

		//if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
			led.set( 0 );
		  wait( 50 * 1000 );
			led.set( 1 );
		//}	
	}
}

void blink( pins::output_pin &led, unsigned int delay = 200 * 1000 ){
    for(;;){
       led.set( 1 );
       wait( delay );
       led.set( 0 );
       wait( delay );
   }      
};

void wait_ms( unsigned int n ){ wait( n * 1000 ); }
void wait_us( unsigned int n ){ wait( n ); }

unsigned char transmit_led = 0, receive_led = 0;

const unsigned char tx_buf[17]={
    0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x78};
    
void Send_Packet( 
   rfm70 &radio, unsigned char type, 
   const unsigned char* pbuf, unsigned char len 
){
	radio.mode_transmit();
	transmit_led = 20;	
	radio.buffer_write( type, pbuf, len); 
    wait_us( 100 );
    wait_us( 10 * 1000 );	 	
    radio.mode_receive(); 
}    
         
int main( void ){   
   lpc1114 target;
   

   input_output_pin_lpc1  sck  = target.pin( 0,  2 );
   input_output_pin_lpc1  mosi = target.pin( 0,  3 );
   input_output_pin_lpc1  miso = target.pin( 0,  4 );
   input_output_pin_lpc1  csn  = target.pin( 0,  5 );
   input_output_pin_lpc1  ce   = target.pin( 0,  6 );

/*
   input_output_pin_lpc1  sck  = target.pin( 3,  0 );
   input_output_pin_lpc1  mosi = target.pin( 3,  1 );
   input_output_pin_lpc1  miso = target.pin( 3,  2 );
   input_output_pin_lpc1  csn  = target.pin( 3,  3 );
   input_output_pin_lpc1  ce   = target.pin( 3,  4 );
*/   
   rfm70 radio( sck, mosi, miso, csn, ce, wait_ms, wait_us );
   radio.init();
   
   radio.channel( 10 );
   // blink( csn );
   
   input_output_pin_lpc1  led_tx   = target.pin( 2,  0 );
   input_output_pin_lpc1  led_rx   = target.pin( 2,  1 );   
   led_tx.direction_set_output();
   led_rx.direction_set_output();
   
   if( ! radio.is_present() ){
      led_tx.set( 0 );
      led_rx.set( 0 );
      for(;;);	
   }
      
	unsigned char len,i,chksum, n;
	unsigned char rx_buf[ RFM70_MAX_PACKET_LEN ];
	while(1){
        wait_us( 2 * 1000 );

        led_tx.set( transmit_led == 0 );
        if( transmit_led > 0 ){ transmit_led--; }

        led_rx.set( receive_led == 0 );
        if( receive_led > 0 ){ receive_led--; }       
        if( ++n > 250 ){
	       Send_Packet( radio, RFM70_CMD_W_TX_PAYLOAD_NOACK, tx_buf, 17);
           n = 0; 	
        }

   	    if( ! radio.receive_fifo_empty() ){

		    len=radio.register_read( RFM70_CMD_R_RX_PL_WID );
			if( len <= RFM70_MAX_PACKET_LEN ){
				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );

	   	       chksum = 0;
		       for(i=0;i<16;i++){
			      chksum +=rx_buf[i]; 
		       }

		       if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
		          receive_led = 20;
			      // Send_Packet( radio, RFM70_CMD_W_TX_PAYLOAD_NOACK,rx_buf,17);
		       }	
			}
			radio.register_write( RFM70_CMD_FLUSH_RX,0 );
   	    }
	}
   return 0;
}
