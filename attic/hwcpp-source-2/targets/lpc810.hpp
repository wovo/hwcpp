#include "cout.hpp"
#include "hwcpp.hpp"
#include "LPC8xx.h"

// ==========================================================================
//
// LPC810 target base stuff
//
// ==========================================================================

namespace hwcpp {

template< int ram_size, int rom_size, int clock_frequency >
class lpc810_base 
   : public target_archetype< ram_size, rom_size, clock_frequency >
{
protected:

   //! return the pointer to an IO port related register
   static constexpr volatile int *gpioreg( int port, int offset ){
      return (volatile int *)( 0xA0001000 + port * 0x10000 + offset );
   }
     
   //========================================================================
   //
   // configure a pin as GPIO
   //
   //========================================================================
   
   static void pin_gp_conf( volatile uint32_t *p, int value ){
      *p = value | ( *p & ~0x07 );
   }   
   
   template< int port, int pin >
   static void configure_as_gpio(){
      LPC_SYSCON->SYSAHBCLKCTRL |= (1<<6);      // enable GPIO
      LPC_SYSCON->SYSAHBCLKCTRL |= (1<<7);      // enable switchmatrix

      
      switch( ( port << 8 ) | pin ){
         case 0x0000: LPC_SWM->PINENABLE0 |= ( 0x01 << 0 ); break;
         case 0x0001: LPC_SWM->PINENABLE0 |= ( 0x01 << 1 ) | ( 0x01 << 7 ); break;
         case 0x0002: LPC_SWM->PINENABLE0 |= ( 0x01 << 3 ); break;
         case 0x0003: LPC_SWM->PINENABLE0 |= ( 0x01 << 2 ); break;
         case 0x0004: break;
         case 0x0005: LPC_SWM->PINENABLE0 |= ( 0x01 << 6 ); break;
      }         
   }   
   
   static void direction_set_output( int port, int pin ){
      *gpioreg( port, 0x1000 ) |= ( 0x01 << pin );
   }
   
   static void direction_set_input( int port, int pin ){
      *gpioreg( port, 0x1000 ) &= ~ ( 0x01 << pin );
   }   
       
   template< int port, int pin >  
   static void set( bool x ){
      //*gpioreg( port, 0x04 * pin ) = x ? -1 : 0;  
      if( x ){
         LPC_GPIO_PORT->PIN0 |= ( 0x01 << pin ); 
      } else {
         LPC_GPIO_PORT->PIN0 &= ~( 0x01 << pin ); 
      }
   }    

   template< int port, int pin >  
   static bool get(){
      return LPC_GPIO_PORT->PIN0 & ( 0x01 << pin );  
   }
      
   template< int port, int pin >
   class pin_in_out : public pin_in_out_archetype {
   public:
   
      // check whether the port/pin combination is valid for this chip
      static_assert( (
            (( port == 0 ) && ( pin >= 0 ) && ( pin <= 0x0B ))
         || (( port == 1 ) && ( pin >= 0 ) && ( pin <= 0x09 ))
      ), "illegal port/pin combination for an LPC1114" ); 
      
      static void init(){
         lpc810_base::configure_as_gpio< port, pin >();
      } 
    
      static void direction_set_input(){
         lpc810_base::direction_set_input( port, pin );
      }
    
      static void direction_set_output(){
         lpc810_base::direction_set_output( port, pin );
      }
      
      static void set( bool x ){
         lpc810_base::set< port, pin >( x );
      }     
      
      static bool get(){
         return lpc810_base::get< port, pin >();
      }       
   };
   
   static void initialize_clock(){
      static_assert( 
         ( clock_frequency == 1 * MHz ) || ( clock_frequency == 12 * MHz ), 
         "lpc810 : unsupported clock frequency" 
      );
      
      if( clock_frequency < 20 * MHz ){
      
         // configure 1-cycle FLASH access
         // (default i2 2-cycle)
         uint32_t x = LPC_FLASHCTRL->FLASHCFG;
         x &= ~ 0x03;
         LPC_FLASHCTRL->FLASHCFG = x;
         
      }   
      
      if( clock_frequency == 1 * MHz ){
      
         LPC_SYSCON->SYSAHBCLKDIV = 12;  
         
      } else if( clock_frequency == 12 * MHz ){
      
         // nothing required, this is the default
         
      } 
   }   
/*   
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
         LPC_USART0->DLM = Fdiv / 256;
         LPC_USART0->DLL = Fdiv % 256;    
      }
   
      //! initialize the uart
      static void init(){
      
         initialize_clock();        
       
         // Not using interrupts
         //NVIC_DisableIRQ(UART_IRQn);
         
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
       
         LPC_USART0->LCR = 0x83;             // 8 bits, no Parity, 1 Stop bit 
         baudrate_set( baudrate );
         LPC_USART0->LCR = 0x03;   // DLAB = 0 
         LPC_USART0->FCR = 0x07;   // Enable and reset TX and RX FIFO. 
       
         // Read to clear the line status. 
         (void)LPC_USART0->LSR;
       
         // Ensure a clean start, no data in either TX or RX FIFO. 
         while ( (LPC_USART0->LSR & (LSR_THRE|LSR_TEMT)) != (LSR_THRE|LSR_TEMT) );
         while ( LPC_USART0->LSR & LSR_RDR )
         {
           (void)LPC_USART0->RBR; // Dump data from RX FIFO 
         } 
      }
           
      //! report if the uart is ready to accpet a char
      static bool put_will_block(){
         return ( LPC_USART0->LSR & ( 1 << 6 )) == 0;
      }
      
	  //! put a char
	  //
	  //! When the uart is no ready to accept a char this call will
	  //! block untill it is.
      static void put( char c ){
         while(( LPC_USART0->LSR & ( 1 << 6 )) == 0 );
         LPC_USART0->THR = c;
      }
      
	  //! report whether the uart is ready to accept a char
      static bool get_will_block(){
         return ( LPC_USART0->LSR & 0x01 ) == 0;
      }
      
	  //! return a received char
	  //
	  //! When the uart has no char available this call will block
	  //! until it has.
      static char get(){
         while( get_will_block() ){}
         return LPC_USART0->RBR;
      }   
      
   };   
*/   

   //========================================================================
   //
   // timing
   //
   //========================================================================
   
   struct waiting_32 
      : public waiting_support < 
           unsigned int, 
           ( clock_frequency >= 3 * MHz ) 
              ? ( clock_frequency ) / ( 3 * MHz ) 
              : 1
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
            "1: sub r0, %[step]  \t\n" 
            "   bgt 1b           \t\n" 
            :: 
            [reg] "r" (x), 
            [step] "I" ( 
               ( clock_frequency >= ( 3 * MHz ))
               ? 1
               : ( 3 * MHz ) / clock_frequency
            )   
            : "r0"
         );
      }    
       
   }; 

       
};
       
}; // namespace hwcpp
