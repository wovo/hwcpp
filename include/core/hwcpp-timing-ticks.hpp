// ==========================================================================
//
// file : hwcpp-timing-ticks.hpp
//
// ==========================================================================


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// the ticks type is what can be provided by a HAL
// as the base for a clock service
//
// ==========================================================================

template< typename T,  >
struct _ticks_root_marker :
   not_instantiable
{
   static constexpr bool is_ticks_tag = true;
   using ticks_type = T;
   using ns_per_ticks
};

template< typename T >
concept bool _is_ticks = requires {  
   T::is_ticks_tag;
   { T::init() } -> void;
   { T::now_ticks( v ) } -> typename T::ticks_type;
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// this adapter provides 
//
// ==========================================================================

