// ==========================================================================
//
// file : hwcpp-timing-busy.hpp
//
// ==========================================================================


struct timing_waiting_root :
   not_instantiable
{
   static constexpr bool has_waiting_marker = true;
};

template< typename T >
concept bool has_waiting(){ 
   return T::has_waiting;
}


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// the busy type is what can be provided by a HAL
// as the base for a clock service
//
// ==========================================================================

template< typename T, typename _ticks_frequency >
struct _ticker_root :
   not_instantiable
{
   static constexpr bool is_ticker_tag = true;
   using ticks_type       = T;
   using ticks_frequency  =  _ticks_frequency;
};

template< typename T >
concept bool _is_ticker = requires {  
   T::is_ticker_tag;
   { T::init() } -> void;
   { T::now_ticks() } -> typename T::ticks_type;
};



struct is_interval_marker :
   not_instantiable
{
   static constexpr bool is_interval = true;
};

template< typename T >
concept bool is_interval(){ 
   return T::is_interval;
}


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// decorate a minimal ticker to full functionality
//
// ==========================================================================


template< typename T >
struct _ticker_creator : T, timing_waiting_root {
	
   using ticks_type       = typename T::ticks_type;	
   using ticks_frequency  = typename T::ticks_frequency;	
   
   // ========== ticks <-> ns conversion

   static constexpr ticks_type ticks_from_ns( uint64_t n ){ 
	  return 1 + (
	     ( n * ticks_frequency::num ) 
		 / ( 1'000'000'000 * ticks_frequency::den ));
   }	

   static constexpr uint_fast64_t ns_from_ticks( ticks_type n ){ 
	  return 1 + ( 
	     ( n* 1'000'000'000 * ticks_frequency::den )
	     / ( ticks_frequency::num ));
   }

   //========== current time in ns
   
   static uint_fast64_t now_ns(){
      return ns_from_ticks( T::now_ticks() );
   }	 

   // ========== busy wait a run-time known amount of time 

   static void wait_ticks( ticks_type n ){
      auto t = T::now_ticks() + n;
      while( T::now_ticks() < t ){}   
   }
   
   static void wait_ns( uint_fast64_t n ){
      wait_ticks( ticks_from_ns( n ) ); 
   }
   
   void wait_us( uint_fast64_t n ){
      wait_ticks( ticks_from_ns( n * 1'000ULL ) );	    	   
   }

   void wait_ms( uint_fast64_t n ){
      wait_ticks( ticks_from_ns( n * 1'000'000ULL ) );	    	   
   }

   void wait_s( uint_fast64_t n ){
      wait_ticks( ticks_from_ns( n * 1'000'000'000ULL ) );	    	   
   }   
   
   // ========== callbacks
   
   using _void_void = void(*)();

   struct callback_item {
      _void_void f;
	  ticks_type interval;
      ticks_type next;
	  
      void run(){		 
         if( interval == 0 ){
            f();
         } else {			
            auto t = T::now_ticks();		  
			if( t > next ){
				next += interval;
				f();
            }
         }			
      }	   
   };

   struct callbacks {
      static inline callback_item list[ 100 ];
      static inline uint_fast8_t n  = 0;
	  static inline uint_fast8_t i  = 0;
	  static inline bool running    = false;
   
      static void add( _void_void f, ticks_type interval = 0 ){
         list[ n++ ] = { f, interval, 0 };	   
      }
	  
	  static void step(){
         if( running ) return;
         running = true;		 
         if( i == n ){ 
            i = 0;
         } else {
            list[ i ].run();		 
			++i;
         }			
		 running = false;
	  }
   
      static void run(){ 
         for(;;){ 
            step(); 
	     }	
      };    
   };   
   
   //========== a compile-time known amount of time 

   template< uint_fast64_t _n >
   struct ns :
      is_interval_marker
   {
      using timing                          = _ticker_creator< T >; 	   
	  static constexpr uint_fast64_t n      = _n;
      static constexpr uint_fast64_t ticks  = ticks_from_ns( _n );
	  
      static void init(){
         T::init(); 
	  }	   
	   
      static void wait(){
         wait_ticks( ticks );		  
	  }		 

	  // ========== polling
   
      template< typename task >
      struct callback {	
	     static void init(){
            callbacks::add( task::main, ticks );
	     }
      }; 
	  
   };
   
   template< uint_fast64_t n >
   using us = ns< n * 1'000ULL >;

   template< uint_fast64_t n >
   using ms = ns< n * 1'000'000ULL >;

   template< uint_fast64_t n >
   using s = ns< n * 1'000'000'000ULL >;   
   
   // ========== polling
   
   template< typename task >
   struct callback {	
	  
	  static void init(){
         callbacks::add( task::main );
	  }
   };     
};
