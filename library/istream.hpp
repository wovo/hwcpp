// ==========================================================================
//
// file : istream.hpp
//
// ==========================================================================

template< typename T >
struct istream :
   not_instantiable
{
   static constexpr bool is_istream = true;  

}; // struct istream

template< typename T >
concept bool is_istream(){ 
   return 
      T::is_istream
	  & requires { T::init() -> Void; }
	  & requires { T::read_blocks() -> Boolean; }
	  & requires { T::read() -> Char; };
      
} // concept is_istream
