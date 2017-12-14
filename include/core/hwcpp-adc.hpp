// ==========================================================================
//
// file : hwcpp-adc.hpp
//
// ==========================================================================

template< 
   uint64_t _n_bits,
   uint64_t value_min = 0,
   uint64_t value_max = ( 1ULL << _n_bits ) - 1
>
struct adc_root :
   box_interval_root< 
      typename uint_t< _n_bits >::fast,
	  value_min,
	  value_max
   >
{
   static constexpr bool is_adc = true;		
}; 

template< typename T >
concept bool is_adc = requires {  
   T::is_adc;
   
   { T::init() } -> void; 
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::invalidate() } -> void;    
};

// can re-use some pin adapters here, maybe they should be renamed

template< typename T, uint64_t n_bits >
struct _adc_creator : 
   adc_root< n_bits >,
   _box_creator< T >  
{};

/*
template< typename T, uint64_t _n_bits >
struct _adc_from_buffered : 
   adc_root< _n_bits >,
   _add_pin_in_direct_functions< T, typename adc_root< T::n_bits >::value_type > 
{};
*/