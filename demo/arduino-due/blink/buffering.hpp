// ============================================================================
//
// file : buffering.hpp
//
// ============================================================================

template< typename T >
class buffer : public T {
   static constexpr bool is_buffered = true;
   static inline bool valid = false;
   static inline bool in_value;
   
   static void invalidate(){ 
      valid = false; 
   }
   
   bool get(){
      if( ! valid ){
         in_value = T::get();
         valid = true;
      }
      return in_value;
   }
};

