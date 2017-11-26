// ==========================================================================
//
// File      : timing.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

// - ns should contain a duration (instead of calculating it everywhere)
// - ns should call an implementatio-defined wait template
// - it must loop when arg > representable....
// - how to handle that duration when arg > representable??

namespace hwcpp {

   // =======================================================================
   //
   // the duration / moment ADT pair
   //
   // _base = integer type used to store a value, long long (64 bit) 
   //    in most cases, but int (32 bits) can be used for a wait service
   // _ticks_per_us = stored value for 1 us. must be 1..1000. 
   //
   // =======================================================================
    
   template< 
      class _base, 
      _base _ticks_per_us
   >
   struct moment_duration {
      typedef _base base;
   
      // common part of duration and moment, provides comparisons and raw()
      // the dummy argument prevents meaningless cross-comparisons
      template< int dummy >
      class common {
      protected:
      
         base x;
         constexpr common( base x ): x( x ){}
         constexpr common(): x ( 0 ) {}
         
      public:      
      
         constexpr base raw() const { return x; }
         
         constexpr bool operator<( const common rhs ) const {
            return raw() < rhs.raw();
         }
         constexpr bool operator<=( const common rhs ) const {
            return raw() <= rhs.x;
         }
         constexpr bool operator>( const common rhs ) const {
            return raw() > rhs.x;
         }
         constexpr bool operator>=( const common rhs ) const {
            return raw() >= rhs.x;
         }
         constexpr bool operator==( const common rhs ) const {
            return raw() == rhs.x;
         }
         constexpr bool operator!=( const common rhs ) const {
            return raw() != rhs.x;
         }      
         
      }; // class common
      
      // an amount of time (difference between two moments)
      class duration : 
         public common< 1 > 
      {
      private:
      
         friend class moment_duration::moment;
      
      public:  
         // was private      
         constexpr duration( base n ): common< 1 >( n ){}
         
         static constexpr base ticks_per_us = _ticks_per_us;
         constexpr duration(){};   
         
         static constexpr duration infinite = 
            duration( int_info< base >::maximum );      
      
         static constexpr duration us( base n ){ 
            return duration( n * ticks_per_us );
         }
         static constexpr duration ms( base n ){
            return us( n * 1000 );
         }   
         static constexpr duration s( base n ){
            return ms( n * 1000 );
         }   
         static constexpr duration m( base n ){
            return s( n * 60 );
         }   
         static constexpr duration h( base n ){
            return m( n * 60 );
         }   
         static constexpr duration day( base n ){
            return day( h * 24 );
         }           
      
         constexpr duration operator+() const {
            return duration( this->x );
         }
         constexpr duration operator-() const {
            return duration( - this->x );
         }
         
         constexpr duration operator+( const duration rhs ) const {
            return duration( this->x + rhs.x );
         }
         void operator+=( const duration &rhs ){
            this->x += rhs.x;
         }
         
         constexpr duration operator-( const duration rhs ) const {
            return duration( this->x - rhs.x );
         }
         void operator-=( const duration rhs ){
            this->x -= rhs.x;
         }
         
         template< class T >
         constexpr duration operator*( const T n ) const {
            return duration( this->x * n );
         }
         
         template< class T >
         void operator*=( const T n ){
            this->x *= n;
         }
       
         template< class T >
         friend constexpr duration operator*( 
            T n, const duration rhs 
         ){
            return duration( rhs.x * n );
         }        
         /*
         template< class T >
         constexpr duration operator/( const T n ) const {
            return duration( x / n );
         }
         
         template< class T >
         void operator/=( const T n ){
            x /= n;
         }
         */
         
         constexpr duration operator/( const int n ) const {
            return duration( this->x / n );
         }
         
         constexpr long long int operator/( const duration rhs ) const {
            return this->x / rhs.x;
         }       
         
      }; // class duration
               
      // a moment in time   
      class moment : 
         public common< 2 > 
      {
      private:
      
         template< class implementation >
         friend struct timing_waiter;   
      
         constexpr moment( const base x ): common< 2 >( x ){}

      public:
         constexpr moment(){}  
         
         constexpr moment operator+() const {
            return moment( this->x );
         }
         
         constexpr moment operator+( const duration rhs ) const {
            return moment( this->x + rhs.x );
         }
         moment & operator+=( const duration rhs ){
            this->x += rhs.x;
            return * this;
         }
         
         constexpr duration operator-( const moment rhs ) const {
            return duration( this->x - rhs.x );
         }
         moment & operator-=( const duration rhs ){
            this->x -= rhs.x;
            return * this;
         }                      
         
      }; // class moment
         
   }; // class moment_duration      
   

   // =======================================================================
   //
   // Template-based waiting: common for all timing services
   //
   // Adds:
   // - template< d, m > ns, us, ms, s, m, h, day ::wait()
   // - template< f > z, kHz, MHz ::period, half_period
   //
   // =======================================================================   
           
   template< 
      class _service
   >  
   struct add_timing_templates :
      // public noninstantiable, -- would give a double-inheritance warning
      public _service
   {	  
      HARDWARE_REQUIRE_ARCHETYPE( _service, has_waiting_support );
   
      typedef unsigned long long int ull;

      typedef typename _service::base base;
      typedef typename _service::moment moment;
      typedef typename _service::duration duration;
            
      static constexpr ull infinite = LLONG_MAX;

      template< ull d, ull m = infinite >
      struct ns : public noninstantiable {
         typedef void has_duration;
         typedef ull base;
         static constexpr base _duration = d;
         static constexpr base margin = m;
         static constexpr typename _service::duration duration = _service::duration::ms( 1 + ( _duration / 1000 ));
         typedef add_timing_templates< _service > service;
         static void init(){ _service::init(); }
         static void wait(){  
            // should call an implementation-template!! 
            if( d == infinite ){
               for(;;){
                  _service::wait( duration::us( 1000 ) ); 
               }
            }
            if( m == infinite ){
               _service::wait(
                  duration::us( 1 + ( _duration / 1000 ))
               );             
            } else {
               _service::wait(
                  duration::us( 1 + ( _duration / 1000 )),
                  duration::us( (typename _service::base) margin / 1000 ) 
               );             
            }
         }
      };
      
      template< ull d, ull x = ULLONG_MAX > struct us:  
         public ns< 1000 * d, 1000 * x >{};
      template< ull d, ull x = ULLONG_MAX > struct ms:  
         public us< 1000 * d, 1000 * x >{};
      template< ull d, ull x = ULLONG_MAX > struct s:   
         public ms< 1000 * d, 1000 * x >{};
      template< ull d, ull x = ULLONG_MAX > struct m:   
         public  s<   60 * d,   60 * x >{};
      template< ull d, ull x = ULLONG_MAX > struct h:   
         public  m<   60 * d,   60 * x >{};
      template< ull d, ull x = ULLONG_MAX > struct day: 
         public  h<   24 * d,   24 * x >{};
      
      template< ull f >
      struct Hz : public noninstantiable {
         typedef void has_frequency;
         typedef ull base;
         static constexpr ull frequency = f;
         typedef add_timing_templates< _service > service;
         static void init(){ _service::init(); }
         typedef ns< s< 1 >::duration / f > period;
         typedef ns< s< 1 >::duration / ( 2 * f ) > half_period;
      };
      
      template< ull f > struct kHz: public  Hz< 1000 * f >{};
      template< ull f > struct MHz: public kHz< 1000 * f >{};      
           
   }; // class add_timing_templates   
   
   
   // =======================================================================
   //
   // Waiting support archetype
   //
   // To support waiting, a target must supply init() and wait(), 
   // suitable for the choosen _ticks_per_us.
   //
   // In most cases _base should be 64 bits, but for a constrained 
   // implementation _base it could be 32 bit.
   // 16 bits is probably too small to get a useable wait() function, 
   // it would give a maximum delay (@ _ticks_per_us=1) of only 65 ms.
   // However, the us<n>::delay() would still be useable, because
   // it will loop when needed.
   //
   // =======================================================================
   
   template< 
      class _base,
      _base _ticks_per_us
   > 
   struct waiting_support : public noninstantiable {
      typedef void has_waiting_support;
      typedef _base base;
      static constexpr base ticks_per_us = _ticks_per_us;
      static void init();
      static void wait( const base x );
   };   
      
      
   // =======================================================================
   //
   // Waiting implementation
   //
   // =======================================================================   
        
   // There is no separate waiting archetype, this class also serves
   // that purpose.
   // This struct must be instantiated as done by the next struct:
   // with the waiting_timing_common, which has been instatiated
   // with the target's waiting_support.
   template< 
      class implementation 
   >
   struct waiting_waiter : 
      public noninstantiable 
   {
      typedef void has_waiting; 
   
      HARDWARE_REQUIRE_ARCHETYPE( implementation, has_waiting_support ); 

      typedef moment_duration< 
         typename implementation::base, 
         implementation::ticks_per_us
      > _moment_duration;
      typedef typename _moment_duration::base base;
      typedef typename _moment_duration::moment moment;     
      typedef typename _moment_duration::duration duration;
      
      static void init(){ implementation::init(); }
      static void wait( const duration t ){ implementation::wait( t.raw() ); }
      static void wait( const duration t, const duration margin ){ wait( t ); }
      
      // waiting is always busy, hence locking can be a noop
      template< class T >
      struct mutex : public noninstantiable {
         struct lock : noncopyable {};         
      };      
   };  
   
   // This template creates a waiting service as provided by a target.
   // It instantiates waiting_timing_common with a waiting_waiter
   // that has been instantiated with the implementation.
   template< 
      class implementation 
   > 
   struct waiting_implementation : 
      public add_timing_templates<
         waiting_waiter< 
            implementation 
         >
      >
   {
      HARDWARE_REQUIRE_ARCHETYPE( implementation, has_waiting_support ); 
   };   

   
   // =======================================================================
   //
   // Timing support archetype
   //
   // To support waiting, a target must supply init() and now(), 
   // suitable for the choosen _ticks_per_us.
   //
   // In most cases _base should be 64 bits, otherwise the maximum
   // run time for the applicaytion is severely restricted.
   // (32 bits @ _ticks_per_us=1 gives only 36 minutes). 
   //
   // =======================================================================

   template< 
      class _base,
      _base _ticks_per_us
   > 
   struct timing_support : public noninstantiable {
      typedef void has_timing_support;
      typedef _base base;
      static constexpr base ticks_per_us = _ticks_per_us;
      static void init();
      static base now();
   };   
   
   
   // =======================================================================
   //
   // Timing implementation
   //
   // =======================================================================   
   
   // There is no separate timing archetype, this class also serves
   // that purpose.
   // This struct must be instantiated as done by the next struct:
   // with the waiting_timing_common, which has been instatiated
   // with the target's timing_support.   
   template< 
      class implementation 
   >
   struct timing_waiter : public noninstantiable {
      HARDWARE_REQUIRE_ARCHETYPE( implementation, has_timing_support ); 

      typedef void has_waiting;      
      typedef void has_timing;      
      
      typedef moment_duration< 
         typename implementation::base,
         implementation::ticks_per_us
      > _moment_duration;
      typedef typename _moment_duration::base base;
      typedef typename _moment_duration::moment moment;     
      typedef typename _moment_duration::duration duration;     
      
      static void init(){ implementation::init(); }
      static moment now(){ return moment( implementation::now() ); }
      
      static void wait( const moment t ){
         while( now() < t );
      }
      
      static void wait( const duration d ){
         wait( now() + d );
      }
      
      static void wait( const moment t, const duration margin ){
         wait( t );
      }
      
      static void wait( const duration d, const duration margin ){
         wait( d );
      } 
      
      // waiting is always busy, hence locking can be a noop
      template< class T >
      struct mutex : public noninstantiable {
         struct lock : noncopyable {};         
      };     
   };
   
   // This template creates a timing service as provided by a target.
   // It instantiates waiting_timing_common with a timing_waiter
   // that has been instantiated with the implementation.
   template< 
      class implementation 
   > 
   struct timing_implementation :
      public add_timing_templates<    
         timing_waiter< 
            implementation 
         >
      >
   {
      HARDWARE_REQUIRE_ARCHETYPE( implementation, has_timing_support ); 
   };
   
   
   // =======================================================================
   //
   // Callback archetype
   //
   // A callback service provides everything that a timing service
   // provides, to which it adds the clock and timer callbacks,
   // and a non-empty implmentation of the lock class.
   // It modifies the appropriate waiting calls to service the callbacks.
   //
   // =======================================================================

   template< class timing >                               
   struct callback : 
      public noninstantiable, 
      public timing 
  {
      
      typedef void has_callback;

      struct node : public noncopyable {      
         virtual ~node();         
         virtual void function() = 0;       
      };
      
      struct timer : public node {
         timer();
         void start( typename timing::moment m );
         void start( const typename timing::duration t );
         void cancel();
      };
       
      struct clock : public node {
         clock( typename timing::moment m );
         virtual ~clock();
      };
      
   }; // class callback
      

   // =======================================================================
   //
   // The default implementation of the callback administration,
   // using an unsorted double linked chain of active callbacks.
   //
   // Inserting and removing (canceling) a callback takes constant
   // time and is relatively fast (insert/remove in a double-linked
   // list with sentinel). Servicing the callbacks is relatively slow 
   // (linear walk through the list).
   //
   // =======================================================================

   template< class _timing >      
   class callback_administration_double_linked : 
      // public noninstantiable, -- would give a double-inheritance warning 
      public _timing 
   {
   private:
   
      HARDWARE_REQUIRE_ARCHETYPE( _timing, has_timing ); 
      
      struct _node : 
         public noncopyable 
      {
         _node * next;
         _node * previous;
         typename _timing::moment epoch;
         
         constexpr _node(): next( this ), previous( this ){}
         
         // the root (sentinel) of the chain 
         static _node * root_get(){
            static _node _root;
            return &_root;
         }   
          
         void cancel(){
            this->next->previous = this->previous;
            this->previous->next = this->next;
            this->next = this;
            this->previous = this;
         }        
         
         void insert(){
            _node *root = root_get();
            cancel();
            this->next = root->next;
            this->previous = root;
            this->next->previous = this;
            root->next = this;
         }           
         
         virtual void visit( const typename _timing::moment m ){}
         
      };   
      
   public:
      
      static void update( const typename _timing::moment now ){
         _node *root = _node::root_get();
         for( 
            _node *p = root->next; 
            p != root; 
            p = p->next
         ){   
            if( p->epoch < now ){
               p->visit( now );
               return;
            }   
         }   
      }      
                         
      struct node : 
         protected _node 
      {       
         void cancel(){ _node::cancel(); }
         // virtual 
         ~node(){ _node::cancel(); }
         virtual void function(){}       
      };
      
      template< class d = void, class dummy = void >
      struct timer : 
         public node 
      {
      
         void cancel(){ node::cancel(); }
      
         void start( const typename _timing::moment m ){
            this->cancel();
            this->epoch = m;
            this->insert();           
         }
            
         void start( const typename _timing::duration t ){
            start( _timing::now() + t );
         }
            
         void visit( const typename _timing::moment now ) override {
            this->cancel();
            this->function();
         }
            
      };
      
      template< class d > 
      struct timer< d, typename d::has_duration > : 
         public timer<> 
      {

         void start( 
            const typename _timing::duration t
               = typename _timing::duration::ms ( 1 + d::duration / 1000 )
         ){
            timer<>::start( t );           
         }
         
      };         

      template< class d = void, class dummy = void >
      class clock : 
         public node 
      {
      private:
         void cancel();
         typename _timing::duration interval;
               
      public:
         
         clock( const typename _timing::duration interval )
            : interval( interval )
         {
            this->epoch = _timing::now() + interval;
            this->insert();
         }
            
         void visit( const typename _timing::moment now ) override {
            this->epoch += this->interval;
            this->function();              
         }
            
      };
      
      template< class d > 
      struct clock< d, typename d::has_duration > : 
         public clock<> 
      {
         clock(): 
            clock<>( _timing::duration::ms( 1 + d::duration / 1000 )){};
      };   
        
      template< class d > 
      struct clock< d, typename d::has_frequency > : 
         public clock<> 
      {
         clock(): 
            clock<>( _timing::duration::ms( 
               1 + d::period::duration / 1000 )){};
      };   
   
      
   }; // class callback_double_linked
   
   
   // =======================================================================
   //
   // the administration-independent part of the callback implementation,
   // provides:
   // - maintaining the lock_counter by creating and descruting lock objects
   // - serving the callback chain while doing a one-parameter wait
   //
   // =======================================================================

   template< 
      class implementation, 
      template< typename _timing > class callback_administration
         = callback_administration_double_linked
   >
   class callback_implementation :
      public add_timing_templates<
         callback_administration< 
            timing_implementation<
               implementation 
            >
         >
      >
   {
   
      HARDWARE_REQUIRE_ARCHETYPE( implementation, has_waiting_support );
      
      static int lock_counter;
      
      typedef timing_implementation< implementation > service;
   
   public:
   
      // typedef typename service::moment timing;
      typedef typename service::moment moment;
      typedef typename service::duration duration;
      
      template< class T >
      struct mutex : 
         public noninstantiable 
      {
      
         struct lock : noncopyable {
            lock(){
               lock_counter++;
            }
         
            ~lock(){
               lock_counter--;
            }         
         };
      };    
                 
      typedef mutex< callback_implementation > callback_activation;
      
      static bool is_locked(){
         return lock_counter != 0;
      }
      
      static void wait( const moment m ){
      	for(;;){
      	   moment now = service::now();
      	   if( now >= m ){
      	      return;
      	   }
      	   if( lock_counter == 0 ){
      	      typename callback_activation::lock block_recusion;
      	      callback_administration< service >::update( now );   
      	   }   
         }     
      }
      
      static void wait( duration d ){
         wait( service::now() + d );
      }      
      
      static void wait( const duration d, const duration margin ){
         service::wait( d );
      } 
      
      static void wait( const moment m, const duration margin ){
         service::wait( m );
      } 
      
   }; // struct callback_implementation
   
   // the lock_counter
   template< 
      class timing, 
      template< typename _timing > class callback_strategy 
   >  
   int callback_implementation< timing, callback_strategy >::lock_counter = 0;   
    
}; // namespace hwcpp
