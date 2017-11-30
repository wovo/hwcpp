// ============================================================================
//
// file : ports.hpp
//
// ============================================================================


// ============================================================================
//
// markers that identify the four kinds of ports,
// and traits that test the presence of these markers
//
// ============================================================================

// ========= common =========

template< int n >
struct port_common_marker :
   not_instantiable
{
   static constexpr int n_pins = n;
   using value_type = typename uint_t< n >::fast;  
};

// ========= out =========

template< int n >
struct port_out_marker :
   port_common_marker< n >
{
   static constexpr bool is_port_out = true;
};

template< typename T >
concept bool is_port_out(){ 
   return T::is_port_out;
}

// ========= in =========

template< int n >
struct port_in_marker :
   port_common_marker< n >
{
   static constexpr bool is_port_in = true;    
};

template< typename T >
concept bool is_port_in(){ 
   return T::is_port_in;
}

// ========= in_out =========

template< int n >
struct port_in_out_marker :
   port_common_marker< n >
{
   static constexpr bool is_port_in_out = true;
};

template< typename T >
concept bool is_port_in_out(){ 
   return T::is_port_in_out;
}

// ========= oc =========

template< int n >
struct port_oc_marker :
   port_common_marker< n >
{
   static constexpr bool is_port_oc = true;
};

template< typename T >
concept bool is_port_oc(){ 
   return T::is_port_oc;
}


// ============================================================================
//
// create a port_out
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_out_implementation {};

// recursion endpoint
template< int n > 
struct _port_out_implementation< n > : 
   port_out_marker< n > 
{
   using value_type = typename port_out_marker< n >::value_type;
   static void init(){}
   static void set_direct( value_type v ){}
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_out_implementation<  n, arg_pin, arg_tail... > :
   _port_out_implementation< n, arg_tail... >
{

   using value_type = typename _port_out_implementation< n, arg_tail... >::value_type;
   using pin = pin_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_out_implementation< n, arg_tail... >::init(); 
   }
      
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_out_implementation< n, arg_tail... >::set_direct( v >> 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_out :
   _port_out_implementation< sizeof...( arguments ), arguments... >
{};

// ========== from another port =========/

template< is_port_out port > 
struct port_out< port > :
   port
{};
   
template< is_port_in_out port > 
struct port_out< port > :
   port_out_marker< port::n_pins > 
{
   	
   using value_type = typename port::value_type;
   
   static void init() { 
      port::init();
	  port::direction_set_direct( direction::output );
   }
      
   static void set_direct( value_type v ) {
      port::set_direct( v );
   }   
	
};
   
   
// ============================================================================
//
// create a port_in
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_implementation {};

// recursion endpoint
template< int n > 
struct _port_in_implementation< n > : 
   public port_in_marker< n > 
{
   using value_type = typename port_in_marker< n >::value_type;
   static void init(){}
   static value_type get_direct(){ return 0; }
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_implementation<  n, arg_pin, arg_tail... > :
   _port_in_implementation< n, arg_tail... >
{

   using value_type = typename _port_in_implementation< n, arg_tail... >::value_type;
   using pin = pin_in< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_implementation< n, arg_tail... >::init(); 
   }
      
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_implementation< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_in :
   _port_in_implementation< sizeof...( arguments ), arguments... >
{};

// ========== from another port =========/

template< is_port_in port > 
struct port_in< port > :
   port
{};
   
template< is_port_in_out port > 
struct port_in< port > :
   port_in_marker< port::n_pins > 
{
   	
   using value_type = typename port::value_type;
   
   static void init() { 
      port::init();
	  port::direction_set_direct( direction::output ); 
   }
      
   static value_type set_direct( value_type v ) {
      return port::get_direct();
   }   
	
};

   
   
// ============================================================================
//
// create a port_in_out
//
// ============================================================================

// fallback, required but never used
template< int n, typename... arg_tail >
struct _port_in_out_implementation {};

// recursion endpoint
template< int n > 
struct _port_in_out_implementation< n > : 
   public port_in_out_marker< n > 
{
   using value_type = typename port_in_out_marker< n >::value_type;
   static void init() {}
    static void direction_set_direct( direction d ) {}
   static void set_direct( value_type v ) {}
   static value_type get_direct(){ return 0; }
};

// add first pin and recurse
template< int n, typename arg_pin, typename... arg_tail >
struct _port_in_out_implementation<  n, arg_pin, arg_tail... > :
   _port_in_out_implementation< n, arg_tail... >
{

   using value_type = typename _port_in_out_implementation< n, arg_tail... >::value_type;
   using pin = pin_in_out< arg_pin >;	
      
   static void init() { 
      pin::init();
      _port_in_out_implementation< n, arg_tail... >::init(); 
   }
      
   static void direction_set_direct( direction d ) {
      pin::direction_set_direct( d );
      _port_in_out_implementation< n, arg_tail... >::direction_set_direct( d );
   }
   
   static void set_direct( value_type v ) {
      pin::set( ( v & 0x01 ) != 0 );
      _port_in_out_implementation< n, arg_tail... >::set_direct( v >> 1 );
   }
   
   static value_type get_direct( value_type v ) {
      return 
	     ( pin::get_direct() ? 0x01 : 0x00 ) 
	     | ( _port_in_out_implementation< n, arg_tail... >::get_direct() << 1 );
   }
      
};

// determine the number of arguments and defer to the implementation
template< typename... arguments > 
struct port_in_out :
   _port_in_out_implementation< sizeof...( arguments ), arguments... >
{};
   
