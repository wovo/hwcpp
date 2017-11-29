// ============================================================================
//
// file : basics.hpp
//
// ============================================================================

// ============================================================================
//
// version
//
// ============================================================================
   
constexpr char version[] = "V0.1 2017-11-17 work-in-progress";


// ============================================================================
//
// inline this function
//
// ============================================================================
   
#define HWLIB_INLINE __attribute__((always_inline))


// ============================================================================
//
// some convenient constants
//
// ============================================================================
  
template< long long int f >
using MHz = std::ratio< f * 1'000'000, 1 >;

template< long long int f >
using kHz = std::ratio< f * 1'000, 1 >;

template< long long int f >
using Hz = std::ratio< f * 1, 1 >;

   
// ============================================================================
//
// for use in static_assert
//
// ============================================================================

struct unsupported {};

template< typename T >
struct always_false { 
    enum { value = false };  
};


// ============================================================================
//
// direction of an input-output pin or port
//
// ============================================================================

enum class direction { 
   input, 
   output 
};


// ============================================================================
//
// determine the (unsigend) integer needed to hold n bits
// and fast to use
//
// ============================================================================
   
// if no exact match, get something bigger
template< unsigned int n > struct uint_t {
   // but we have to draw a line somewhere
   static_assert( 
      n < 130,
      "ports, a/d and d/a pins, etc. must fit in an unsigned integer type" 
   );
   typedef typename uint_t< n + 1 >::fast fast;
}; 
   
template<> struct uint_t< 8 * sizeof( unsigned char ) > {
   typedef unsigned char fast;
};   

//template<> struct uint_t< 8 * sizeof( unsigned short ) > {
//   typedef unsigned short fast;
//};   

template<> struct uint_t< 8 * sizeof( unsigned int ) > {
   typedef unsigned int fast;
};   

template<> struct uint_t< 8 * sizeof( unsigned long long int ) > {
   typedef unsigned long long int fast;
};  


// ============================================================================
//
// The maximum value that fits in a given type
//
// ============================================================================   
  
template< class base >
struct int_info {
    
};

template<> struct int_info< unsigned long long int > {
   static constexpr unsigned long long int max = ULLONG_MAX;
};

template<> struct int_info< long long int > {
   static constexpr unsigned long long int max = LLONG_MAX;
};

template<> struct int_info< int > {
   static constexpr int max = INT_MAX;
};


// ============================================================================
//
// Inheriting this class makes it impossible to create
// an instance (object) of the subclass.
//
// ============================================================================

class not_instantiable {
private:
   not_instantiable();
};
   
   
// ============================================================================
//
// HWCPP_HERE : file-name & line-number macro
//
// The macro HARDWARE_HERE transates to a newline, the file-name, ":",
// and the line-number of the place where the HWCPP_HERE macro
// appears. This is usefull for debug logging, and use in HWCPP_TRACE.
//
// HWCPP_TRACE : cout replacement for debugging
//
// The macro TRACE can be used instead of std::cout. 
// It prepend what is written to it with HARDWARE_HERE.
//
// ============================================================================   
   
#define HWCPP_HERE_STR( X ) #X
#define HWCPP_HERE2( F, L ) ( "\n" F ":" HARDWARE_HERE_STR( L ) " " )
#define HWCPP_HERE HWCPP_HERE2( __FILE__, __LINE__ )

#define HWCPP_TRACE ( \\hwcpp::cout << HWCPP_HERE << " " << hwcpp::io::flush )   



