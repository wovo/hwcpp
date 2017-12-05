// ==========================================================================
//
// file : console.hpp
//
// ==========================================================================

// T must have:
//    putc( c )
//    x_size, y_size
//    cursor_x , cursor_y
//    goto_xy( x, y )
//    flush()

template< typename T >
class console : public T {
private:
   static inline uint_fast8_t goto_xy_state = 0;

public:

   static void clear(){
      for( uint_fast8_t y = 0; y < T::n_lines; ++y ){
         T::goto_xy( 0, y );
         for( uint_fast8_t x = 0; x < T::n_columns; ++x ){
            putc( ' ' );
         }
      }
      T::goto_xy( 0, 0 );
   }

   static void putc( char c ){

      switch( goto_xy_state ){

         case 0 :
            break;

         case 1 :
            T::cursor_x = 10 * ( c - '0' );
            ++goto_xy_state;
            return;

         case 2 :
            T::cursor_x += c - '0' ;
            ++goto_xy_state;
            return;

         case 3 :
            T::cursor_y = 10 * ( c - '0' );
            ++goto_xy_state;
            return;

         case 4 :
            T::cursor_y += c - '0' ;
            goto_xy_state = 0;
            goto_xy( T::cursor_x, T::cursor_y );
            return;

      }

      if( c == '\n' ){
         T::goto_xy( 0, T::cursor_y + 1 );

      } else if( c == '\r' ){
         T::goto_xy( 0, T::cursor_y );

      } else if( c == '\v' ){
         T::goto_xy( 0, 0 );

      } else if( c == '\f' ){
         clear();

      } else if( c == '\t' ){
         goto_xy_state = 1;

      } else if(
         ( T::cursor_x >= 0 )
         && ( T::cursor_x < T::size_x )
         && ( T::cursor_y >= 0 )
         && ( T::cursor_y < T::size_y )
      ){
          T::putc( c );
          ++T::cursor_x;
      }
   }
   
}; // class console
