// ============================================================================
//
// file : hwcpp-adc.hpp
//
// ============================================================================

template< uint64_t _n_bits >
struct adc_root :
   not_instantiable
{
   static constexpr bool is_adc = true;		
   static constexpr uint32_t n_pbits = _n_bits;
   using value_type = typename uint_t< _n_bits >::fast;  
   
}; // struct adc_root  

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
struct _adc_from_direct : 
   adc_root< n_bits >,
   _add_pin_in_buffered_functions< T >  
{};

template< typename T, uint64_t _n_bits >
struct _adc_from_buffered : 
   adc_root< _n_bits >,
   _add_pin_in_direct_functions< T > 
{};