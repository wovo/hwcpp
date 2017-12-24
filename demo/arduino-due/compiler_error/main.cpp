template< typename T > 
concept bool has_main = requires {
   { T::main() } -> void;	
};	

template< typename T >
concept bool is_duration_with_polling = requires (
   has_main m
){ 
   { template callback< m >::init() } -> void
};
