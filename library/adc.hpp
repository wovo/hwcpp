// ============================================================================
//
// file : adc.hpp
//
// ============================================================================

template< uint32_t _n_bits >
struct adc :
   not_instantiable
{
   static constexpr bool is_adc = true;		
   static constexpr uint32_t n_pbits = _n_bits;
   using value_type = typename uint_t< _n_bits >::fast;  
   
}; // struct adc   
   
template< typename T >
concept bool is_adc(){ 
   return T::is_adc;
}   

template< is_adc T >
struct test_adc {
       
};
