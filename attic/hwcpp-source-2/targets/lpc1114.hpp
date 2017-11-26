// ==========================================================================
//
// File      : lpc1114.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

//#include <ostream>
#include "hwcpp.hpp"
#include "LPC11xx.h"


// ==========================================================================
//
// LPC1114 target base stuff
//
// ==========================================================================

namespace hwcpp {

template< int ram_size, int rom_size, int clock_frequency >
class lpc1114_base 
   : public target_archetype< ram_size, rom_size, clock_frequency >
{
protected:

   //! return the pointer to an IO port related register
   static constexpr volatile int *gpioreg( int port, int offset ){
      return (volatile int *)( 0x50000000 + port * 0x10000 + offset );
   }
   
   //========================================================================
   //
   // configure a pin as GPIO
   //
   //========================================================================
   
   static void pin_gp_conf( volatile uint32_t *p, int value ){
      *p = value | ( *p & ~0x07 );
   }
   
   static void pin_ad_conf( volatile uint32_t *p, int value ){
      *p = value | ( 0x01 << 7 ) | ( *p & ~0x07 );
   }
   
   template< int port, int pin >
   static void configure_as_gpio(){
      LPC_SYSCON->SYSAHBCLKCTRL |= (1<<16);     // enable IOCON
      switch( ( port << 8 ) | pin ){
         case 0x0000: pin_gp_conf( &LPC_IOCON->RESET_PIO0_0,  0x01 ); break;
         case 0x0001: pin_gp_conf( &LPC_IOCON->PIO0_1,        0x00 ); break;
         case 0x0002: pin_gp_conf( &LPC_IOCON->PIO0_2,        0x00 ); break;
         case 0x0003: pin_gp_conf( &LPC_IOCON->PIO0_3,        0x00 ); break;
         case 0x0004: pin_gp_conf( &LPC_IOCON->PIO0_4,        0x00 ); break;
         case 0x0005: pin_gp_conf( &LPC_IOCON->PIO0_5,        0x00 ); break;
         case 0x0006: pin_gp_conf( &LPC_IOCON->PIO0_6,        0x00 ); break;
         case 0x0007: pin_gp_conf( &LPC_IOCON->PIO0_7,        0x00 ); break;
         case 0x0008: pin_gp_conf( &LPC_IOCON->PIO0_8,        0x00 ); break;
         case 0x0009: pin_gp_conf( &LPC_IOCON->PIO0_9,        0x00 ); break;
         case 0x000A: pin_gp_conf( &LPC_IOCON->SWCLK_PIO0_10, 0x01 ); break;
         case 0x000B: pin_ad_conf( &LPC_IOCON->R_PIO0_11,     0x01 ); break;
         
         case 0x0100: pin_ad_conf( &LPC_IOCON->R_PIO1_0,      0x01 ); break;
         case 0x0101: pin_ad_conf( &LPC_IOCON->R_PIO1_1,      0x01 ); break;
         case 0x0102: pin_ad_conf( &LPC_IOCON->R_PIO1_2,      0x01 ); break;
         case 0x0103: pin_ad_conf( &LPC_IOCON->SWDIO_PIO1_3,  0x01 ); break;
         case 0x0104: pin_ad_conf( &LPC_IOCON->PIO1_4,        0x00 ); break;
         case 0x0105: pin_gp_conf( &LPC_IOCON->PIO1_5,        0x00 ); break;
         case 0x0106: pin_gp_conf( &LPC_IOCON->PIO1_6,        0x00 ); break;
         case 0x0107: pin_gp_conf( &LPC_IOCON->PIO1_7,        0x00 ); break;
         case 0x0108: pin_gp_conf( &LPC_IOCON->PIO1_8,        0x00 ); break;
         case 0x0109: pin_gp_conf( &LPC_IOCON->PIO1_9,        0x00 ); break;
         case 0x010A: pin_gp_conf( &LPC_IOCON->PIO1_10,       0x00 ); break; 
         case 0x010B: pin_gp_conf( &LPC_IOCON->PIO1_11,       0x00 ); break; 
         
         case 0x0200: pin_gp_conf( &LPC_IOCON->PIO2_0,        0x00 ); break;
         case 0x0201: pin_gp_conf( &LPC_IOCON->PIO2_1,        0x00 ); break;
         case 0x0203: pin_gp_conf( &LPC_IOCON->PIO2_3,        0x00 ); break;
         case 0x0202: pin_gp_conf( &LPC_IOCON->PIO2_2,        0x00 ); break;
         case 0x0204: pin_gp_conf( &LPC_IOCON->PIO2_4,        0x00 ); break;
         case 0x0205: pin_gp_conf( &LPC_IOCON->PIO2_5,        0x00 ); break;
         case 0x0206: pin_gp_conf( &LPC_IOCON->PIO2_6,        0x00 ); break;
         case 0x0207: pin_gp_conf( &LPC_IOCON->PIO2_7,        0x00 ); break;
         case 0x0208: pin_gp_conf( &LPC_IOCON->PIO2_8,        0x00 ); break;
         case 0x0209: pin_gp_conf( &LPC_IOCON->PIO2_9,        0x00 ); break;
         case 0x020A: pin_gp_conf( &LPC_IOCON->PIO2_10,       0x00 ); break;
         case 0x020B: pin_gp_conf( &LPC_IOCON->PIO2_11,       0x00 ); break;
         
         case 0x0300: pin_gp_conf( &LPC_IOCON->PIO3_0,        0x00 ); break;
         case 0x0301: pin_gp_conf( &LPC_IOCON->PIO3_1,        0x00 ); break;
         case 0x0302: pin_gp_conf( &LPC_IOCON->PIO3_2,        0x00 ); break;
         case 0x0303: pin_gp_conf( &LPC_IOCON->PIO3_3,        0x00 ); break;
         case 0x0304: pin_gp_conf( &LPC_IOCON->PIO3_4,        0x00 ); break;
         case 0x0305: pin_gp_conf( &LPC_IOCON->PIO3_5,        0x00 ); break;
         
         default: break;
      }          
   }   
   
   //========================================================================
   //
   // configure (enable or disable) the internal pullup
   //
   //========================================================================
   
   static void pu_conf( volatile uint32_t *p, bool enable ){
      if( enable ){
         *p = ( 0x02 << 3 ) | ( *p & ~ ( 0x03 << 3 ));
      } else {
         *p = ( 0x00 << 3 ) | ( *p & ~ ( 0x03 << 3 ));
      }      
   }   
   
   template< int port, int pin, bool enable >
   static void pullup_configure(){
      LPC_SYSCON->SYSAHBCLKCTRL |= (1<<16);     // enable IOCON
      switch( ( port << 8 ) | pin ){
         case 0x0000: pu_conf( &LPC_IOCON->RESET_PIO0_0,  enable ); break;
         case 0x0001: pu_conf( &LPC_IOCON->PIO0_1,        enable ); break;
         case 0x0002: pu_conf( &LPC_IOCON->PIO0_2,        enable ); break;
         case 0x0003: pu_conf( &LPC_IOCON->PIO0_3,        enable ); break;
         case 0x0004: pu_conf( &LPC_IOCON->PIO0_4,        enable ); break;
         case 0x0005: pu_conf( &LPC_IOCON->PIO0_5,        enable ); break;
         case 0x0006: pu_conf( &LPC_IOCON->PIO0_6,        enable ); break;
         case 0x0007: pu_conf( &LPC_IOCON->PIO0_7,        enable ); break;
         case 0x0008: pu_conf( &LPC_IOCON->PIO0_8,        enable ); break;
         case 0x0009: pu_conf( &LPC_IOCON->PIO0_9,        enable ); break;
         case 0x000A: pu_conf( &LPC_IOCON->SWCLK_PIO0_10, enable ); break;
         case 0x000B: pu_conf( &LPC_IOCON->R_PIO0_11,     enable ); break;
         
         case 0x0100: pu_conf( &LPC_IOCON->R_PIO1_0,      enable ); break;
         case 0x0101: pu_conf( &LPC_IOCON->R_PIO1_1,      enable ); break;
         case 0x0102: pu_conf( &LPC_IOCON->R_PIO1_2,      enable ); break;
         case 0x0103: pu_conf( &LPC_IOCON->SWDIO_PIO1_3,  enable ); break;
         case 0x0104: pu_conf( &LPC_IOCON->PIO1_4,        enable ); break;
         case 0x0105: pu_conf( &LPC_IOCON->PIO1_5,        enable ); break;
         case 0x0106: pu_conf( &LPC_IOCON->PIO1_6,        enable ); break;
         case 0x0107: pu_conf( &LPC_IOCON->PIO1_7,        enable ); break;
         case 0x0108: pu_conf( &LPC_IOCON->PIO1_8,        enable ); break;
         case 0x0109: pu_conf( &LPC_IOCON->PIO1_9,        enable ); break;
         case 0x010A: pu_conf( &LPC_IOCON->PIO1_10,       enable ); break;
         case 0x010B: pu_conf( &LPC_IOCON->PIO1_11,       enable ); break;

         case 0x0200: pu_conf( &LPC_IOCON->PIO2_0,        enable ); break;
         case 0x0201: pu_conf( &LPC_IOCON->PIO2_1,        enable ); break;
         case 0x0203: pu_conf( &LPC_IOCON->PIO2_3,        enable ); break;
         case 0x0202: pu_conf( &LPC_IOCON->PIO2_2,        enable ); break;
         case 0x0204: pu_conf( &LPC_IOCON->PIO2_4,        enable ); break;
         case 0x0205: pu_conf( &LPC_IOCON->PIO2_5,        enable ); break;
         case 0x0206: pu_conf( &LPC_IOCON->PIO2_6,        enable ); break;
         case 0x0207: pu_conf( &LPC_IOCON->PIO2_7,        enable ); break;
         case 0x0208: pu_conf( &LPC_IOCON->PIO2_8,        enable ); break;
         case 0x0209: pu_conf( &LPC_IOCON->PIO2_9,        enable ); break;
         case 0x020A: pu_conf( &LPC_IOCON->PIO2_10,       enable ); break;
         case 0x020B: pu_conf( &LPC_IOCON->PIO2_11,       enable ); break;

         case 0x0300: pu_conf( &LPC_IOCON->PIO3_0,        enable ); break;
         case 0x0301: pu_conf( &LPC_IOCON->PIO3_1,        enable ); break;
         case 0x0302: pu_conf( &LPC_IOCON->PIO3_2,        enable ); break;
         case 0x0303: pu_conf( &LPC_IOCON->PIO3_3,        enable ); break;
         case 0x0304: pu_conf( &LPC_IOCON->PIO3_4,        enable ); break;
         case 0x0305: pu_conf( &LPC_IOCON->PIO3_5,        enable ); break;

         default: break;
      }          
   }   
   
   //========================================================================
   //
   // A/D conversion
   //
   //========================================================================
   
   static void ad_conf( volatile uint32_t *p, int value ){
      *p = 
         ( value << 0 ) 
         | ( *p & ~ ( ( 0x07 << 0 ) | ( 0x01 << 7 )));
   }   
   
   template< int port, int pin, int channel >
   static void pin_ad_configure(){
   
         // enable IOCON & A/D clock
      LPC_SYSCON->SYSAHBCLKCTRL |= ( 0x01 << 16 ) | ( 0x01 << 13 );
   
         // enable A/D power
      LPC_SYSCON->PDRUNCFG &= ~( 1 << 4 );      

      switch( ( port << 8 ) | pin ){
         case 0x000B: ad_conf( &LPC_IOCON->R_PIO0_11,    0x02 ); break;
         
         case 0x0100: ad_conf( &LPC_IOCON->R_PIO1_0,     0x02 ); break;
         case 0x0101: ad_conf( &LPC_IOCON->R_PIO1_1,     0x02 ); break;
         case 0x0102: ad_conf( &LPC_IOCON->R_PIO1_2,     0x02 ); break;
         case 0x0103: ad_conf( &LPC_IOCON->SWDIO_PIO1_3, 0x02 ); break;
         case 0x0104: ad_conf( &LPC_IOCON->PIO1_4,       0x01 ); break;
         case 0x010A: ad_conf( &LPC_IOCON->PIO1_10,      0x01 ); break;
         case 0x010B: ad_conf( &LPC_IOCON->PIO1_11,      0x01 ); break;
        
         default: break;
      }          
   }   
   
   template< int channel >
   static unsigned int pin_ad_read(){
      
         // configure the A/D for the pin
      LPC_ADC->CR = ( 1 << channel ) | ( 12 << 8 );
     
         // start the conversion
      LPC_ADC->CR |= ( 1 << 24 );
   
         // wait for the conversion to complete
      while( ( LPC_ADC->GDR & ( 1 << 31 )) == 0 );
     
         // return the A/D result
      return ( LPC_ADC->GDR >> 6 ) & 0x3FF;   
   }
   
   //========================================================================
   //
   // GPIO pin operations: set/get level, set direction
   //
   //========================================================================
   
   static void direction_set_output( int port, int pin ){
      *gpioreg( port, 0x8000 ) |= ( 0x01 << pin );
   }
   
   static void direction_set_input( int port, int pin ){
      *gpioreg( port, 0x8000 ) &= ~ ( 0x01 << pin );
   }   
       
   template< int port, int pin >  
   static void set( bool x ){
      *gpioreg( port, 0x04 << pin ) = x ? -1 : 0;  
   }    

   template< int port, int pin >  
   static bool get(){
      return *gpioreg( port, 0x3FFC ) & ( 0x01 << pin );  
   }
   
   //========================================================================
   //
   // an open collector pin (no pullup or A/D )
   //
   //========================================================================
   
   template< int port, int pin >
   struct pin_oc : 
      public pin_oc_archetype 
   {
      
      static void init(){
         lpc1114_base::configure_as_gpio< port, pin >();
         lpc1114_base::direction_set_output( port, pin );
      }
   
      static void set( bool x ){
	     if( x ){
            lpc1114_base::direction_set_input( port, pin );
		 } else {
            lpc1114_base::direction_set_output( port, pin );
            lpc1114_base::set< port, pin >( 0 );
         }			
      }
	  
      static bool get(){
         return lpc1114_base::get< port, pin >();
      }   	  
   };
            
   //========================================================================
   //
   // an input-output pin with configurable pullup
   //
   //========================================================================
   
   template< int port, int pin >
   struct pin_in_out_pullup :
      public pin_in_out_archetype,
      public pin_configurable_pullup_archetype 
   {
      
      static void init(){
         lpc1114_base::configure_as_gpio< port, pin >();
      } 
    
      static void direction_set_input(){
         lpc1114_base::direction_set_input( port, pin );
      }
    
      static void direction_set_output(){
         lpc1114_base::direction_set_output( port, pin );
      }
      
      static void set( bool x ){
         lpc1114_base::set< port, pin >( x );
      }     
      
      static bool get(){
         return lpc1114_base::get< port, pin >();
      }       
      
      static void pullup_enable(){
         lpc1114_base::pullup_configure< port, pin, 1 >();
      }
   
      static void pullup_disable(){
         lpc1114_base::pullup_configure< port, pin, 0 >();
       }
   };

   //========================================================================
   //
   // an input-output pin with configurable pullup and A/D
   //
   //========================================================================
   
   template< int port, int pin, int channel >
   struct pin_in_out_ad_pullup :  
      public pin_in_out_pullup< port, pin >, 
      public pin_ad_archetype< 10 >
   {
         
      static void ad_init(){
         pin_ad_configure< port, pin, channel >();
      }
   
      static pin_ad_archetype< 10 >::ad_value_type ad_get(){
         return pin_ad_read< channel >();
      }
   
   };
     
   
   //=====================================================================
   //
   // initialize the clock
   //
   //=====================================================================
   
   //static bool initialize_clock_done; //  = false; is implicit
   
   static void initialize_clock(){
      static_assert( 
         ( clock_frequency == 12 * MHz ) || ( clock_frequency == 48 * MHz ), 
         "lpc1114 : unsupported clock frequency" 
      );
      
      if( clock_frequency == 12 * MHz ){
      
         // nothing required, this is the default
         
      } else {
      
         // static bool initialize_clock_done = false;
         //if( initialize_clock_done ) return;
         //initialize_clock_done = true;
      
         if( clock_frequency == 48 * MHz ){
      
            // as is, this can be done only once, 
            // otherwise the CPU will lock up
      
   	      LPC_SYSCON->SYSAHBCLKDIV             = 0x1;       //set clock divider for core to 1
       	   LPC_SYSCON->MAINCLKSEL               &= ~(0x03);  //set “main clock” to IRC oscillator, if not system will lock up when PLL turns off!(sec. 3.5.11)
	         LPC_SYSCON->MAINCLKUEN               &= ~(1);     //write a zero to the MAINCLKUEN register (sec. 3.5.12), necessary for MAINCLKSEL to update
	         LPC_SYSCON->MAINCLKUEN               |= 1;        //write a one to the MAINCLKUEN register (sec. 3.5.12), necessary for MAINCLKSEL to update
   	      //LPC_SYSCON->SYSPLLCLKSEL             = 0x01;      //connect system oscillator to SYSTEM PLL (sec. 3.5.9)
	         //LPC_SYSCON->SYSPLLCLKUEN             &= ~(1);     //write a zero to SYSPLLUEN register (sec. 3.5.10), necessary for SYSPLLCLKSEL to update
	         //LPC_SYSCON->SYSPLLCLKUEN             |= 1;        //write a one to SYSPLLUEN register (sec. 3.5.10), necessary for SYSPLLCLKSEL to update	
      	   LPC_SYSCON->PDRUNCFG                 |= (1<<7);   //power down the PLL before changing divider values
	         LPC_SYSCON->SYSPLLCTRL               = 0x23;      //set MSEL = 0x00011 and PSEL = 0x01 (table 46 of sec. 3.11.4.1)
	         LPC_SYSCON->PDRUNCFG                 &= ~(1<<7);  //power up PLL after divider values changed as per sec. 3.11.4
   	      while((LPC_SYSCON->SYSPLLSTAT & 1) == 0);         //wait for PLL to lock
   	      LPC_SYSCON->MAINCLKSEL               = 0x03;      //set system oscillator to the output of the PLL (sec. 3.5.11)
	         LPC_SYSCON->MAINCLKUEN               &= ~(1);     //write a zero to the MAINCLKUEN register (sec. 3.5.12), necessary for MAINCLKSEL to update
	         LPC_SYSCON->MAINCLKUEN               |= 1;        //write a one to the MAINCLKUEN register (sec. 3.5.12)
	      
         }
      }   
   }
   

   //========================================================================
   //
   // UART
   //
   //========================================================================
   
   template< unsigned int baudrate >
   class uart :
      public channel_out_archetype
   {
   
      // UART line status register (LSR) bit definitions 
      static const unsigned int LSR_RDR   = 0x01;
      static const unsigned int LSR_OE    = 0x02;
      static const unsigned int LSR_PE    = 0x04;
      static const unsigned int LSR_FE    = 0x08;
      static const unsigned int LSR_BI    = 0x10;
      static const unsigned int LSR_THRE  = 0x20;
      static const unsigned int LSR_TEMT  = 0x40;
      static const unsigned int LSR_RXFE  = 0x80;
      
   public:
   
      //! set the baudrate to baud
      static void baudrate_set( unsigned int baud ){
         uint32_t Fdiv;
         LPC_SYSCON->UARTCLKDIV     = 0x1;     // divided by 1 
         Fdiv = clock_frequency / ( LPC_SYSCON->SYSAHBCLKDIV * 16 * baud );
         LPC_UART->DLM = Fdiv / 256;
         LPC_UART->DLL = Fdiv % 256;    
      }
   
      //! initialize the uart
      static void init(){
      
         initialize_clock();        
       
         // Not using interrupts
         NVIC_DisableIRQ(UART_IRQn);
         
         // enable IO config
         LPC_SYSCON->SYSAHBCLKCTRL |= (1<<16);     //enable IOCON  
         LPC_SYSCON->SYSAHBCLKCTRL |= (1<<12);     //enable UART 
       
         // UART I/O config
         LPC_IOCON->PIO1_6 &= ~0x07;
         LPC_IOCON->PIO1_6 |= 0x01;     // UART RXD
         LPC_IOCON->PIO1_7 &= ~0x07;
         LPC_IOCON->PIO1_7 |= 0x01;     // UART TXD 
       
         // Enable UART clock 
         LPC_SYSCON->SYSAHBCLKCTRL |= (1<<12);
       
         LPC_UART->LCR = 0x83;             // 8 bits, no Parity, 1 Stop bit 
         baudrate_set( baudrate );
         LPC_UART->LCR = 0x03;   // DLAB = 0 
         LPC_UART->FCR = 0x07;   // Enable and reset TX and RX FIFO. 
       
         // Read to clear the line status. 
         (void)LPC_UART->LSR;
       
         // Ensure a clean start, no data in either TX or RX FIFO. 
         while ( (LPC_UART->LSR & (LSR_THRE|LSR_TEMT)) != (LSR_THRE|LSR_TEMT) );
         while ( LPC_UART->LSR & LSR_RDR )
         {
           (void)LPC_UART->RBR; // Dump data from RX FIFO 
         } 
      }
           
      //! report if the uart is ready to accpet a char
      static bool put_will_block(){
         return ( LPC_UART->LSR & ( 1 << 6 )) == 0;
      }
      
	  //! put a char
	  //
	  //! When the uart is no ready to accept a char this call will
	  //! block untill it is.
      static void put( char c ){
         while(( LPC_UART->LSR & ( 1 << 6 )) == 0 );
         LPC_UART->THR = c;
      }
      
	  //! report whether the uart is ready to accept a char
      static bool get_will_block(){
         return ( LPC_UART->LSR & 0x01 ) == 0;
      }
      
	  //! return a received char
	  //
	  //! When the uart has no char available this call will block
	  //! until it has.
      static char get(){
         while( get_will_block() ){}
         return LPC_UART->RBR;
      }   
      
   };

   
   //=====================================================================
   //
   // timing
   //
   //=====================================================================
   
   // uses the 24-bit SysTick, extended to 64 bits, gives ample range:
   // 2^63 Hz / 24 MHz => 12186 years
   struct timer_64 : 
      public timing_support< 
         long long int, 
         ( clock_frequency ) / ( 2 * MHz )          
      > 
   {
   
      typedef long long int base;   
   
      static void init(){
      
         initialize_clock(); 
      
         SysTick->CTRL  = 0;         // stop the timer
         SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
         SysTick->VAL   = 0;         // clear the timer
         SysTick->CTRL  = 1;         // start the timer      
            
      }
   
      static base now(){
        
         static unsigned int last_low = 0;
         static unsigned long long int high = 0;

         // the timer ticks down, but we want an up counter
         unsigned int low = 0xFFFFFF - ( SysTick->VAL & 0xFFFFFF );
         if( low < last_low ){
   
            // the timer rolled over, so increment the high part
            high += 0x1ULL << 24;
         }
         last_low = low;

         // return the aggregated ticks value
         return low | high ;      
      } 
   };   
   
   // for test/demo only
   // 24 bits without extension is far too short to be practical:
   // 2^24 Hz / 6 MHz => 2.8 s !
   struct timer_24 : 
      public timing_support< 
         int, 
         ( clock_frequency ) / ( 2 * MHz )  
      > 
   {
   
      typedef int base;   
   
      static void init(){

         initialize_clock();

         SysTick->CTRL  = 0;         // stop the timer
         SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
         SysTick->VAL   = 0;         // clear the timer
         SysTick->CTRL  = 1;         // start the timer      }
      }
   
      static base now(){
         // the timer ticks down, but we want an up counter
         return 0xFFFFFF - ( SysTick->VAL & 0xFFFFFF );      
      } 
      
   };  
   
   struct waiting_32 
      : public waiting_support < 
           unsigned int, 
           ( clock_frequency ) / ( 4 * MHz ) 
        >
   {
      
      typedef unsigned int base;
   
      static void init(){
         initialize_clock();      
      }
      
      static void wait( const base x ){
         asm volatile( 
            "   mov r0, %[reg]   \t\n"
            "   b   1f           \t\n"
            "   .align 4         \t\n"
            "1: sub r0, #1       \t\n" 
            "   bgt 1b           \t\n" 
            :: [reg] "r" (x) : "r0"
         );
      }
       
   }; 
   
};

//template< int ram_size, int rom_size, int clock_frequency >
//   bool lpc1114_base< ram_size, rom_size, clock_frequency >
//      ::initialize_clock_done; // = false; 

}; // namespace hwcpp

