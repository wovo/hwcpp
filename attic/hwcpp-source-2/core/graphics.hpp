// ==========================================================================
//
// File      : graphics.hpp
// Part of   : wcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

namespace hwcpp {

   // =======================================================================
   //
   // color ADT
   //
   // =======================================================================


class color {  
private:    
              
   static constexpr int clip( int x ){
      return ( x < 0 ) ? 0 : ( x > 0xFF ? 0xFF : x ); }        

   bool transp;
   unsigned char r; 
   unsigned char g;
   unsigned char b; 
   
public:      
   
   //! constructs a color object from its three components
   //
   //! You can also supply the transparency flag, but better use
   //! the color::transparent constant.
   //! 
   //! Note that the arguments are integers, but they are clipped
   //! to the 0..255 range by the constructor.
   constexpr color( int r, int g, int b, bool t = 0 ):
      transp( t ), 
      r( t ? 0 : clip( r )), 
      g( t ? 0 : clip( g )), 
      b( t ? 0 : clip( b ))
   {}
      
   //! constructs a color from a three-byte value
   //
   //! For instance, color( 0xFF00FF ) is magenta.   
   constexpr color( unsigned int rgb = 0 ):
      transp( 0 ),  
      r( clip( ( rgb & 0xFF0000 ) >> 16 )), 
      g( clip( ( rgb & 0x00FF00 ) >>  8 )), 
      b( clip( ( rgb & 0x0000FF ) >>  0 )){}
      
   //! the color in RGB15 (NintendoDS) format
   constexpr unsigned int rgb15_get( void ) const {
      return (
           ((unsigned int)( r & 0xF8 ) >>  3 )
         | ((unsigned int)( g & 0xF8 ) <<  2 )
         | ((unsigned int)( b & 0xF8 ) <<  7 ) 
      );
   }      
   
   //! transparency indicator
   //
   //! When a color is transparent its colors are irrelevant.
   constexpr bool is_transparent() const { return transp; }
   
   //! return the red component
   //
   //! The returned component is relevant only when the
   //! color is not transparent.
   constexpr unsigned char red_get() const { return r; } 
   
   //! return the green component
   //
   //! The returned component is relevant only when the
   //! color is not transparent.
   constexpr unsigned char green_get() const { return g; }
   
   //! return the blue component
   //
   //! The returned component is relevant only when the
   //! color is not transparent.
   constexpr unsigned char blue_get() const { return b; }    

   //! adds two colors; addition works towards white
   constexpr color operator + ( const color c ) const {
      return color( 
         r + (int)c.r, 
         g + (int)c.g, 
         b + (int)c.b, 
         transp && c.transp ); }
      
   //! adds a color to an existing color   
   const color & operator += ( const color c ){
      r = clip( r + (int)c.r ); 
      g = clip( g + (int)c.g ); 
      b = clip( b + (int)c.b ); 
      transp = transp && c.transp; 
      return *this;
   }
      
   //! returns a color unmodified   
   constexpr color operator + ( void ) const {
      return color( r, g, b, transp ); }          
      
   //! subtracts two colors; subtraction works towards black      
   constexpr color operator - ( const color c ) const {
      return color( 
         r - (int)c.r, 
         g - (int)c.g, 
         b - (int)c.b, 
         transp && c.transp ); }
      
   //! subtracts a color from an existing color   
   color & operator -= ( const color c ){
      r = clip( r - (int)c.r ); 
      g = clip( g - (int)c.g );
      b = clip( b - (int)c.b );
      transp = transp && c.transp; 
      return *this;
   }          
      
   //! returns the negative of a color   
   constexpr color operator - ( void ) const {
      return color( 
         0xFF - (int)r, 
         0xFF - (int)g, 
         0xFF - (int)b, 
         transp ); }
      
   //! divides a color by an integer; division works towards black   
   constexpr color operator / ( unsigned int n ) const {
      return color( r / n, g / n, b / n, transp ); }
      
   //! divides an exiting color by an integer   
   color & operator /= ( unsigned int n ){
      r = clip( r / n ); 
      g = clip( g / n ); 
      b = clip( b / n ); 
      return *this;
   }
      
   //! muliplies a color by an integer; multiplication works towards white   
   constexpr color operator * ( unsigned int n ) const {
      return color( r * n, g * n, b * n, transp ); }
   
   //! multiplies an existing color by an integer 
   color & operator *= ( unsigned int n ){
      r = clip( r * n ); 
      g = clip( g * n ); 
      b = clip( b * n ); 
      return *this;
   }
      
   //! reports whether two colors are equal   
   constexpr bool operator == ( const color c ) const {
      return transp ? c.transp : 
         ( ! c.transp ) && ( r == c.r ) && ( g == c.g ) && ( b == c.b ); }

   //! reports whether two colors are unequal
   constexpr bool operator != ( const color c ) const {
      return ! ( *this == c );  }   
   
   //! returns the mix of the current color and the argument   
   constexpr color mixed_with( const color c ) const {
      return color( 
         ( r + c.r ) / 2, 
         ( g + c.g ) / 2, 
         ( b + c.b ) / 2,
         transp && c.transp ); }          
         
}; // class color

   //! some basic colors
   //
   //! These static member functions return some common colors.
   //! These are not plain constants to avoid the static
   //! initialisation order problem: inline_font objects
   //! would have a problem with the black and white parameters
   //! for their drawable subpart.

static constexpr color black       = color( 0,       0,    0 );
static constexpr color white       = color( 0xFF, 0xFF, 0xFF );
static constexpr color red         = color( 0xFF,    0,    0 ); 
static constexpr color green       = color( 0,    0xFF,    0 );
static constexpr color blue        = color( 0,       0, 0xFF );
static constexpr color gray        = color( 0x80, 0x80, 0x80 );
static constexpr color yellow      = color( 0xFF, 0xFF,    0 );
static constexpr color cyan        = color(    0, 0xFF, 0xFF );
static constexpr color magenta     = color( 0xFF,    0, 0xFF );
static constexpr color transparent = color( 0, 0, 0, 1 );      
static constexpr color violet      = color( 0xEE82EE );        
static constexpr color sienna      = color( 0xA0522D );        
static constexpr color purple      = color( 0x800080 );         
static constexpr color pink        = color( 0xFFC8CB );        
static constexpr color silver      = color( 0xC0C0C0 );        
static constexpr color brown       = color( 0xA52A2A );        
static constexpr color salmon      = color( 0xFA8072 );

   // =======================================================================
   //
   // vector ADT: an x,y pair
   //
   // =======================================================================


class vector {
private:   
     
   //! returns the sign (-1, 0, 1) of the argument  
   static constexpr int sign( short int x ){ 
      return ( x > 0 ) - (x < 0); }  
      
   //! returns whether the x is within <m,0] or [0,m>    
   static constexpr bool is_within( short int x, short int m ){
      return (( x >= 0 ) && ( x < m )) || (( x <= 0 ) && ( x > m )); }
      
   static constexpr unsigned int max( unsigned int a, unsigned int b ){
      return a > b ? a : b; }
   
   static constexpr unsigned int max( 
      unsigned int a, unsigned int b,
      unsigned int c, unsigned int d 
   ){
      return max( a, max ( b, max( c, d )));
   } 

   //! the x coordinate
   short int x;
  
   //! the y coordinate
   short int y;

public:      

   //! construct a vector, the value defaults to (0,0)
   constexpr vector(): x( 0 ), y( 0 ) {}   
     
   //! construct a vector from its x and y coordinates
   constexpr vector( short int x, short int y ): x( x ), y( y ) {}   
     
   //! get the x component
   constexpr short int x_get() const { return x; }
   
   //! get the y component
   constexpr short int y_get() const { return y; }
   
   //! add two vectors by adding the x and y coordinates
   constexpr vector operator + ( const vector p ) const {
      return vector( x + p.x, y + p.y ); }          
      
   //! add a vector to an existing vector   
   vector operator += ( const vector p ){
      return vector( x += p.x, y += p.y ); }          
      
   //! return the vector unmodified   
   constexpr vector operator +() const {
      return vector( x, y ); }
   
   //! subtract two vectors by subtracting the coordinates
   constexpr vector operator - ( const vector p ) const {
      return vector( x - p.x, y - p.y ); }          
      
   //! subtract a vector from an existing vector   
   vector operator -= ( const vector p ){
      return vector( x -= p.x, y -= p.y ); }          
      
   //! returns the negative of the vector (point-mirrored in the origin)
   constexpr vector operator - () const {
      return vector( - x, - y ); }
   
   //! divides a vector by an integer by dividing the coordinates
   constexpr vector operator / ( int n ) const {
      return vector( x / n, y / n ); }          
      
   //! divides an existing vector by an integer   
   vector & operator /= ( int n ){
      x /= n; 
 	   y /= n;
	   return *this;
   }	  
      
   //! multiplies a vector by an integer by multiplying the coordinates
   constexpr vector operator * ( int n ) const {
      return vector( x * n, y * n ); }         
      
   //! multiplies an existing vector by an integer
   vector & operator *= ( int n ){
      x *= n;
	   y *= n;
      return *this;
   }         
      
   //! multiplying two vectors multiplies their X and Y components
   constexpr vector operator * ( const vector rhs ) const {
      return vector( x * rhs.x, y * rhs.y ); }         
      
   //! reports whether two vectors are equal  
   constexpr bool operator == ( const vector p ) const {
      return ( x == p.x ) && ( y == p.y );  }          

   //! reports whether two vectors are unequal
   constexpr bool operator != ( const vector p ) const {
      return ! ( *this == p );  }     
      
   //! returns the direction of a vector      
   //
   //! The direction of a vector is a vector that, 
   //! for both its x and y component, has the 
   //! value 1 or -1, and the same sign
   //! as the original vector.
   constexpr vector direction() const {
      return vector( sign( x ), sign( y )); }           
           
   //! returns the absolute of a vector
   // 
   //! The absolute of a vector is the original vector,
   //! mirrored into the first quadrant by the x and y axises.
   //! In other words, the x and y of the absolute 
   //! are the absolutes of the original x and y.
   constexpr vector abs() const {
      // std::abs is not present in DevKitPro??
      return vector( 
         ( x >= 0 ) ? x : -x,
         ( y >= 0 ) ? y : -y  ); 
   }  
      
   //! returns the projection of the vector on the x axis
   //
   //! In other words, this method returns the 
   //! vector with y set to 0.   
   constexpr vector x_projection() const {
      return vector( x, 0 ); }        
      
   //! returns the projection of the vector on the y axis
   //
   //! In other words, this method returns 
   //! the vector with x set to 0.
   constexpr vector y_projection() const {
      return vector( 0, y ); }        
      
   //! returns with x and y swapped
   //
   //! In other words, this method returns
   //! vector mirrored in the y=x line.
   constexpr vector mirrored() const {
      return vector( y, x ); }        
      
   //! reports whether te vector is within the box [0,p>
   //   
   //! The call a.is_within(b) returns true iff a is within 
   //! the rectangle [(0,0),b], where the boundary lines that go through (0,0) 
   //! are included, but the boundaries that go through b 
   //! are excluded.
   constexpr bool is_within( const vector p ) const {
      return is_within( x, p.x ) && is_within( y, p.y ); }
      
   //! the vector (0,0)   
   constexpr static vector origin(){ return vector( 0, 0 ); }
   
   //! the vector (0,0)   
   constexpr static vector zero(){ return vector( 0, 0 ); }
   
   //! the vector (1,1)   
   constexpr static vector one(){ return vector( 1, 1 ); }
   
   //! multiplies a vector by an integer by multiplying the coordinates
   friend constexpr vector operator * ( int n, const vector v ){
      return v * n;
   }
   
   //! returns the vector that is the maximum of the arguments on each axis
   //
   //! For two vectors the returned vector is
   //! \code
   //!    return vector( 
   //!      max( a.x_get(), b.x_get() ),
   //!      max( a.y_get(), b.y_get() )
   //!   );
   //! \endcode
   friend constexpr vector max( vector a, vector b, vector c, vector d ){
      return vector( 
         max( a.x_get(), b.x_get(), c.x_get(), d.x_get() ),
         max( a.y_get(), b.y_get(), c.y_get(), d.y_get() )
      );
      
   } 


   // =======================================================================
   //
   // tvector : a vector template
   //
   // =======================================================================
   
   template< int _x = 0, int _y = 0 >
   struct tvector {
      typedef void has_tvector;
      static constexpr int x = _x;
      static constexpr int y = _y;
      
      template< class a, class b >
      class add : public tvector< a::x + b::x, a::y + b::y > {};
   
      template< class a >
      class minus : public tvector< - a::x, - a::y > {};         
      
      template< class a >
      class x_projection : public tvector< a::x, 0 > {};         
      
      template< class a >
      class y_projection : public tvector< 0, a::y > {};         
      
      template< class a, int n >
      class times : public tvector< n * a::x, n * a::y > {};         
      
   };

   
   // =======================================================================
   //
   // graphic frame template
   //
   // =======================================================================
   
   template< class tsize >
   struct tframe {
      typedef void has_tframe;
      
      typedef tvector< tsize::x, tsize::y > size;
      static color bg;
      
      static void init();
               
      static constexpr hardware::vector translate_outfrom( const hardware::vector p );
   
      static constexpr hardware::vector translate_into( const hardware::vector p );
   
      static constexpr bool is_valid( hardware::vector p ){
         return p.is_within( hardware::vector( tsize::x, tsize::y ) ); 
      }   
   
      static void clear( const color c = white );
      
      static void pixel_write( const hardware::vector p, const color c );      
   };
   
   template< class tsize > 
      color frame< tsize >::bg = white;
      
   struct frame_readable {
      typedef void is_readable;
      static color pixel_read( const hardware::vector p );  
   };    


   // =======================================================================
   //
   // graphic frame
   //
   // =======================================================================
   
   class frame_class {
   private: 
   
      void operator=( const frame_class & rhs );
      
   protected:
   
      frame_class( const vector size ): 
         size( size ),
         bg( white )
      {}
         
   public:
   
      const vector size;
      color bg;
     
      bool is_valid( const vector p ) const {
         return p.is_within( size ); 
      }         
      
      virtual void pixel_write( const vector p, const color c ) = 0;
      
      virtual void clear( const color c = white ){
         bg = c;
         /*
         for( auto coo : size ){
            pixel_write( coo, c );
         } 
         */
         for( int x = 0; x < size.x_get() ; x++ ){
            for( int y = 0; y < size.y_get(); y++ ){
               pixel_write( vector( x, y ), c );
            }
         }      
      }   
   }; 
   
   template< typename frame >
   class frame_class_adapter_from_static : public frame_class {
   public:
   
      frame_class_adapter_from_static(): 
         frame_class( vector( frame::size::x, frame::size::y ) ){}
      
      void pixel_write( const vector p, const color c ) override {
         frame::pixel_write( p, c );
      }
      
      void clear( const color c = white ) override { 
         frame::clear( c );
      }
   };      
      

/*
   template< 
      class master,
      class _origin,
      class _size
   > struct subframe : public frame< _size > {
   
      static constexpr auto origin = vector( _origin::x, _origin::y );
      static constexpr auto size = vector( _size::x, _size::y );
   
      static constexpr vector translate_outfrom( const vector p ){
         return origin + p; 
      }   
      
      static constexpr bool is_valid( vector p ){
         return p.is_within( size ); 
      }  
   
      static constexpr vector translate_into( const vector p ){
         return p - origin; 
      }      
      
      static void pixel_write( const vector p, const color c ){
         if( is_valid( p )){
            master::pixel_write( translate_outfrom( p ), c );
         }   
      }
   };      
*/   
  
   struct drawable {
      frame_class &f;
      vector start;
      color fg;
      
      drawable( frame_class &f, vector start, const color fg ):
         f( f ), start( start ), fg( fg ){}
   
      virtual void draw() const;
   };

   class line : public drawable {
   private:

      template <class T> static void swap( T& a, T& b ){
        T c(a); a=b; b=c;
      }
     
      template <class T> static T max( T a, T b ){
        return a > b ? a : b;
      }
     
      template <class T> static T abs( T a ){
        return a > 0 ? a : -a;
      }
     
   public:
   
      vector size;
      int width;
      
      line( 
         frame_class &f, 
         const vector start, 
         const vector span,
         color fg = black,
         int width = 1         
      ):
         drawable( f, start, fg ), size( span ), width( width ){}
   
      void draw() const {
    
         // don't bother to draw anything 
         // when the size would be 0 or the color transparent
         if( width < 1 || fg.is_transparent() ){
            return;       
         }
                    
         // http://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
         // http://homepages.enterprise.net/murphy/thickline/index.html
         
         // int i0 = 0; int i1 = 1;
         int i0 = - ( width / 2 ); 
         // int i1 = 1;
         int i1 = width + i0;
         // i1 = width;
         
         int x0 = 0;
         int y0 = 0;
         int x1 = size.x_get();
         int y1 = size.y_get();
         int Dx = x1 - x0; 
         int Dy = y1 - y0;
         int steep = (abs(Dy) >= abs(Dx));
         vector offset( 0, 1);
         if( steep ){
            swap(x0, y0);
            swap(x1, y1);
            // recompute Dx, Dy after swap
            Dx = x1 - x0;
            Dy = y1 - y0;
            offset = vector( 1, 0 );
         }
         int xstep = 1;
         if( Dx < 0 ){
            xstep = -1;
            Dx = -Dx;
         }
         int ystep = 1;
         if( Dy < 0 ){
            ystep = -1;    
            Dy = -Dy; 
         }
         int TwoDy = 2*Dy; 
         int TwoDyTwoDx = TwoDy - 2*Dx; // 2*Dy - 2*Dx
         int E = TwoDy - Dx; //2*Dy - Dx
         int y = y0;
         int xDraw, yDraw;  
         for( int x = x0; x != x1; x += xstep ){    
            if (steep) {     
               xDraw = y;
               yDraw = x;
            } else {     
               xDraw = x;
               yDraw = y;
            }
            for( int i = i0; i < i1; i++ ){
               //drawable_draw_pixel(
               f.pixel_write(
                 start + vector( xDraw, yDraw ) + offset * i, 
                 fg );
            }   
            // trace << xDraw << " " << yDraw;
            if( E > 0 ){
               E += TwoDyTwoDx; //E += 2*Dy - 2*Dx;
               y = y + ystep;
            } else {
               E += TwoDy; //E += 2*Dy;
            }
         }
      }
            
   };
   
   struct line_to : public line {
      line_to( 
         frame_class &f, 
         const vector start, 
         const vector end,
         color fg = black,
         int width = 1         
      ): line( f, start, end - start, fg, width ){}
   };      
   
   class rectangle : public drawable {
   public:
   
      vector span;
      int width;
      
      rectangle( 
         frame_class &f, 
         const vector start, 
         const vector span,
         color fg = black,
         int width = 1
      ):
         drawable( f, start, fg ), span( span ), width( width ){}      
   
      void draw() const {  
         line( f, start, span.x_projection(), fg ).draw();
         line( f, start, span.y_projection(), fg ).draw();
         line( f, start + span.x_projection(), span.y_projection(), fg ).draw();
         line( f, start + span.y_projection(), span.x_projection(), fg ).draw();
      }      
   
   }; // class rectangle
   
   class circle : public drawable {
   
      template <class T> static T abs( T a ){
        return a > 0 ? a : -a;
      }
   
void circle_draw_pixel( 
   const vector v,
   const color c
) const {
   
   int st = width / 2;
   int end = (int) width - st;
   for( int x = - st; x < end; x++ ){
      for( int y = - st; y < end; y ++ ){
         if( abs( x ) + abs( y ) < (int) width ){
            f.pixel_write( start + v + vector( x, y ), c );   
         }   
      }
   }      
}   

void circle_draw (
   const color c,
   bool fill
) const {

   // don't draw anything when the size would be 0 
   if( radius < 1 ){
      return;       
   }
   
   // http://en.wikipedia.org/wiki/Midpoint_circle_algorithm
   
   int fx = 1 - radius;
   int ddFx = 1;
   int ddFy = -2 * radius;
   int x = 0;
   int y = radius;
    
   if( fill ){
   
      // top and bottom
      f.pixel_write( vector( 0, + radius ), c );
      f.pixel_write( vector( 0, - radius ), c );

      // left and right
      line( 
	     f, 
		 start - vector( radius, 0 ), 
		 vector( 2 * radius, 0 ), 
		 c 
	  ).draw();
      
   } else {
   
      // top and bottom
      circle_draw_pixel( vector( 0, + radius ), c );
      circle_draw_pixel( vector( 0, - radius ), c );

      // left and right 
      circle_draw_pixel( vector( + radius, 0 ), c );
      circle_draw_pixel( vector( - radius, 0 ), c );
   }   
    
   while( x < y ){
      
      // calculate next outer circle point
      if( fx >= 0 ){
        y--;
        ddFy += 2;
        fx += ddFy;
      }
      x++;
      ddFx += 2;
      fx += ddFx;   
                    
      if( fill ){
         line( f, start + vector( -x,  y ), vector( 2 * x, 0 ), c ).draw();
         line( f, start + vector( -x, -y ), vector( 2 * x, 0 ), c ).draw();
         line( f, start + vector( -y,  x ), vector( 2 * y, 0 ), c ).draw();
         line( f, start + vector( -y, -x ), vector( 2 * y, 0 ), c ).draw();
      } else {
         circle_draw_pixel( vector( + x, + y ), c );
         circle_draw_pixel( vector( - x, + y ), c );
         circle_draw_pixel( vector( + x, - y ), c );
         circle_draw_pixel( vector( - x, - y ), c );
         circle_draw_pixel( vector( + y, + x ), c );
         circle_draw_pixel( vector( - y, + x ), c );
         circle_draw_pixel( vector( + y, - x ), c );
         circle_draw_pixel(  vector( - y, - x ), c );
      }
   }
}   
   
   public:
   
      int radius;
      color bg;
      int width;
      
      circle( 
         frame_class &f, 
         const vector start, 
         int radius,
         const color fg = black,
         const color bg = transparent,         
         int width = 1
      ):
         drawable( f, start, fg ), radius( radius ), bg( bg ), width( width ){}     
   
   void draw() const {
      circle_draw( bg, 1 );
      circle_draw( fg, 0 );
   }

}; // class circle
      
} // namepsace hwcpp