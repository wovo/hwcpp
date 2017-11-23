#include <ostream>

template< typename T >
class pin_out_base : public T {
   static const bool is_pin_out = true;
   static const bool is_buffered = false;
   static void flush(){}
};

template< typename T >
class pin_in_base : public T {
   static const bool is_pin_in = true;
   static const bool is_buffered = false;
   static void invalidate(){}
};

enum class gpio_direction { input, output };

template< typename T >
class pin_in_out_base : public T {
   static const bool is_pin_in_out = true;
   static const bool is_buffered = false;
   
   // conditional
   static void direction_set( gpio_direction d ){
      if( d == gpio_direction::input ){
         T::direction_set_input();	   
      } else {
         T::direction_set_output();
      }		 
   }	
   static void direction_set_input(){
      T::direction_set( gpio_direction::input );
   }	  
   static void direction_set_output(){
      T::direction_set( gpio_direction::output );
   }	  
   
   static void flush(){}
   static void invalidate(){}
};

template< typename T >
class pin_oc_base : public T {
   static const bool is_pin_oc = true;
   static const bool is_buffered = false;
   static void flush(){}
   static void invalidate(){}
};

template< typename T >
class invert : public T {
   	
};	

template< typename T >
class buffer : public T {
   static constexpr bool is_buffered = true;
   static inline bool valid = false;
   static inline bool in_value;
   
   static void invalidate(){ 
      valid = false; 
   }
   bool get(){
      if( ! valid ){
         in_value = T::get();
         valid = true;
      }
      return in_value;
   }
};

template< int N >
struct gpio_out : public pin_out_base< typename gpio_out< N > > { 
   static void set( bool v ){}
};

//template< int N >
//class gpio : public pin_out_base< gpio_out< N > >{};

int main(){
   //std::cout << "hello\n";
   using led = gpio_out< 12 >;
   led::set( 1 );
}