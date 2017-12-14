// ==========================================================================
//
// file : hwcpp-dac.hpp
//
// ==========================================================================

template< uint32_t _n_bits >
struct dac :
   not_instantiable
{
   static constexpr bool is_adc = true;		
   static constexpr uint32_t n_pbits = _n_bits;
   using value_type = typename uint_t< _n_bits >::fast;  
   
}; // struct adc   
   
template< typename T >
concept bool is_dac(){ 
   return T::is_adc;
}   

template< is_dac T >
struct test_dac {
       
};

