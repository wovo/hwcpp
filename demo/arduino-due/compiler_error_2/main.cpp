template< int T, int... Ts >
static void write_element( T a, Ts... as ){}

int main(){
   // internal compiler error: in tsubst_constraint, at cp/constratint.cc:1956    
   // possible duplicate of https://gcc.gnu.org/bugzilla/show_bug.cgi?id=79917
   write_element( 0 ); // ->internal compiler error   
};
