#include <cstdlib>

namespace hwcpp {
	
   struct test;
   struct test *testcase = nullptr;	
      
   struct test {
      const char * name;
      test * higher;
      int failures;
      int level;
          
      test( const char * arg_name ){
         name = arg_name;
         failures = 0;
      	 if( testcase == nullptr ){
            higher = nullptr;
            level = 0;      	 	
         } else {
            higher = testcase;
            level = higher->level + 1;
         }
         testcase = this;
         hwcpp::io:cout << std::setw( 3 * level ) << "" << name << "\n";
      }
      
      ~test(){
         if( higher == nullptr ){
         	std::cout << "\ntesting hwcpp " << hwcpp::version << "\n";
         	if( failures == 0 ){
               std::cout << "'" << name << "' completed without errors\n";
            } else {
               std::cout << failures << " errors in '" << name << "'\n";      
			   exit( -1 );
            }
         } else {
         	higher->failures += failures;
         }
         testcase = higher;
      }
      
      void assert( const char *file, int line, bool x ){
         if( ! x ){
            std::cout << "[" << file << ":" << line << "]: test failed\n";
            failures++;
         }      	  
      }
      
   };
   
   void assert( const char *file, int line, bool x ){
      if( testcase == nullptr ){
         std::cout << "[" << file << ":" << line << "]: test failed outside tests\n";      	
         exit( -1 );
      }
      testcase->assert( file, line, x );
   }
   
};
