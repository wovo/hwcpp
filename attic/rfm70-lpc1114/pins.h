//===========================================================================
// Very simple pins interface 
// Wouter van Ooijen - wouter@voti.nl
// license: zlib
//===========================================================================

#ifndef _PINS_H_
#define _PINS_H_

namespace pins {

class output_pin {
public:
   virtual void set( bool x )=0;
   virtual void direction_set_output(){}
};

class input_pin {
public:
   virtual bool get()=0;
   virtual void direction_set_input(){}
};

enum direction { input, output };

class input_output_pin : public output_pin, public input_pin {
public:
   virtual void direction_set( direction d ){
      if( d == input ){
         direction_set_input();
      } else {
         direction_set_output();
      }
   }
   void direction_set_input(){
      direction_set( input );
   }
   void direction_set_output(){
      direction_set( output );  
   }                      
};

};

#endif
