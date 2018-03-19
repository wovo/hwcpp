volatile int x;

struct pin {
   static void init(){
      x = 17;      
   }   
   static void write(){
      x = 42;       
   }
};

template< typename T >
struct use : T {
   use(){ T::init(); }       
};

template< typename _pin >
struct blink {
   auto pin = use< _pin >();
   static void run(){
      pin.write();
   }
};

int main(){
   blink< pin >::run();
}