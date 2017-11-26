#include <ostream>

#include "hwcpp.hpp"

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// ==========================================================================
//
// Raspberry Pi Raspbian Linux target
//
// ==========================================================================


#define BCM2708_PERI_BASE        0x20000000
#define GPIO_BASE                (BCM2708_PERI_BASE + 0x200000) /* GPIO   */

namespace hardware {

   volatile unsigned *gpio = nullptr;

class target : public archetypes::target< 4 * Kib, 32 * Kib, 48 * MHz > {
private:

   //static volatile unsigned *gpio = nullptr;

   static void setup_io(){

      if( gpio == nullptr ){

      int mem_fd;

      mem_fd = open( "/dev/mem", O_RDWR|O_SYNC );

      void *gpio_map;

      gpio_map = mmap(
         NULL,             //Any adddress in our space will do
         ( 4 * 1024 ),       //Map length
            PROT_READ|PROT_WRITE,// Enable reading & writting to mapped memory
         MAP_SHARED,       //Shared with other processes
         mem_fd,           //File to map
         GPIO_BASE         //Offset to GPIO peripheral
      );

      close(mem_fd);

      gpio = (volatile unsigned *)gpio_map;
      }
   }    

   //========================================================================
   //
   // GPIO pin operations: set/get level, set direction
   //
   //========================================================================
   
   static void direction_set_output( int g ){
      setup_io();
      *(gpio+((g)/10)) &= ~(0x07<<(((g)%10)*3));
      *(gpio+((g)/10)) &= ~(0x07<<(((g)%10)*3));
      *(gpio+((g)/10)) |=  (1<<(((g)%10)*3));
   }
   
   static void direction_set_input( int g ){
      setup_io();
      *(gpio+((g)/10)) &= ~(0x07<<(((g)%10)*3));
      *(gpio+((g)/10)) &= ~(0x07<<(((g)%10)*3));
   }   
       
   template< int pin >  
   static void set( bool x ){
      if( x ){
         *(gpio+7)= ( 0x01 << pin );  
         *(gpio+7)= ( 0x01 << pin );  
      } else {   
         *(gpio+10) = ( 0x01 << pin );  
         *(gpio+10) = ( 0x01 << pin );  
      } 
   }    

   template< int pin >  
   static bool get(){
      return 0; // *gpioreg( port, 0x3FFC ) & ( 0x01 << pin );  
   }

            
   //========================================================================
   //
   // an input-output pin 
   //
   //========================================================================
   
   template< int pin >
   struct rapi_pin_in_out: 
      public pin_in_out
   {
      
      static void init(){
         //target::configure_as_gpio< pin >();
      } 
    
      static void direction_set_input(){
         target::direction_set_input( pin );
      }
    
      static void direction_set_output(){
         target::direction_set_output( pin );
      }
      
      static void set( bool x ){
         target::set< pin >( x );
      }     
      
      static bool get(){
         return target::get< pin >();
      }       

   };

   //=====================================================================
   //
   // timing
   //
   //=====================================================================
   
   struct time_base_64 {
      typedef long long int base;

      static constexpr base ticks_per_us = 1;
   
      static base current_time(){
         struct timespec now;
         clock_gettime( CLOCK_REALTIME, &now);
         return 
         ( now.tv_sec * 1000000L ) + ( now.tv_nsec / 1000L )    
;
      } 
   };   
   

   
public: 

   //========================================================================
   //
   // the actual pins of the chip
   //
   //========================================================================
        
   typedef rapi_pin_in_out<    0    > gp00;
   typedef rapi_pin_in_out<    1    > gp01;
   typedef rapi_pin_in_out<    4    > gp04;
   typedef rapi_pin_in_out<   17    > gp17;
   typedef rapi_pin_in_out<   21    > gp21;
   typedef rapi_pin_in_out<   22    > gp22;
   typedef rapi_pin_in_out<   10    > gp10;
   typedef rapi_pin_in_out<    9    > gp09;
   typedef rapi_pin_in_out<   11    > gp11;
   typedef rapi_pin_in_out<   14    > gp14;
   typedef rapi_pin_in_out<   15    > gp15;
   typedef rapi_pin_in_out<   18    > gp18;
   typedef rapi_pin_in_out<   23    > gp23;
   typedef rapi_pin_in_out<   24    > gp24;
   typedef rapi_pin_in_out<   25    > gp25;
   typedef rapi_pin_in_out<    8    > gp08;
   typedef rapi_pin_in_out<    7    > gp07;

   
   typedef timing_template< time_base_64 > timing;
   
};

typedef target raspbian;
typedef target::timing timing;

}; // namespace hardware

