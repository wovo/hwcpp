// ============================================================================
//
// file : basics.hpp
//
// ============================================================================

/// inline this function
#define HWLIB_INLINE __attribute__((always_inline))

/// for use in static_assert
template< typename T >
struct always_false { 
    enum { value = false };  
};

/// direction of an input-output pin or port
enum class direction { 
   input, 
   output 
};

// apply

// if_apply

