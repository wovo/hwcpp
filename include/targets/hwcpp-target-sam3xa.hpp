// ============================================================================
//
// file : hwcpp-target-sam3xa.hpp
//
// HAL for atsam3x chip target
//
// ============================================================================

#include "hwcpp-chip-sam3xa.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_sam3xa :
   chip_sam3xa    
{       

}; // template<...> struct target_sam3xa
	
using target = target_sam3xa; 
   
}; // namespace hwcpp




