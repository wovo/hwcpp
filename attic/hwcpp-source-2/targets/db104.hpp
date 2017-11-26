#include "lpc1114fn28.hpp"

namespace hwcpp {

   template< unsigned int frequency = 48 * MHz >
   struct db104 :
      public lpc1114fn28< frequency > 
   {
      typedef lpc1114fn28< frequency > chip;
      typedef typename chip::callback timing;

      typedef port_out_from_pins<
         typename chip::gpio_0_2,
         typename chip::gpio_0_3,
         typename chip::gpio_0_4,
         typename chip::gpio_0_5,
         typename chip::gpio_0_6, 
         typename chip::gpio_0_7, 
         typename chip::gpio_0_8, 
         typename chip::gpio_0_9 
      > segments_port;
   
      typedef port_out_from_pins<
         typename chip::gpio_1_9,
         typename chip::gpio_1_8,
         typename chip::gpio_1_5,
         typename chip::gpio_1_4
      > digits_port;
   
      typedef seven_segment_display<
         timing,
         invert< segments_port >,
         digits_port
      > display;   
   
      // the DB104 hardware inverts the pins
      // the pin_in1 etc. reflect the external level in these pins
      typedef invert< pin_in_from< typename chip::gpio_1_0 >>   pin_in1;
      typedef invert< pin_in_from< typename chip::gpio_1_1 >>   pin_in2;
      typedef invert< pin_in_from< typename chip::gpio_1_2 >>   pin_in3;
      typedef invert< pin_out_from< typename chip::gpio_0_10 >> pin_out1;
      typedef invert< pin_out_from< typename chip::gpio_0_11 >> pin_out2; 	
      typedef invert< pin_out_from< typename chip::gpio_1_3 >>  pin_out3; 	
      
      static void init(){
      
         pin_in1::init();
         pin_in2::init();
         pin_in3::init();
         pin_out1::init();
         pin_out2::init();
         pin_out3::init();
         
         display::init();
         timing::init();      
      }
      
   };
};  