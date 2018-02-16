# update the markdown files:
# insert/update code 
# insert/update TOC

example_files_path = ""

def example( input, file_name, marker = "", quote = 0 ):
   result = []
   count = 0
   
   # open quote line
   line = input.pop( 0 )
   result.append( line )
   if not line.startswith( "~~~" ):
      print( "no quote block after example call [%s]" % line )
      exit();

   # insert the quoted file
   selected = ( marker == "" )
   with open( example_files_path + file_name, "r" ) as f:
      for line in f:
         if not line.endswith( "\n" ):
            line += "\n"
         if marker != "" and line.find( marker ) > 0:
            selected = not selected
            if selected and quote:
               n = line.split( marker )[ 1 ].strip().split( " " )[ 0 ].strip()
               print( "[%s] %s" % ( n, line ))
               if n != "":
                  count = int( n )
         elif selected:
            if count > 0:
               count = count - 1
               if count == 0:
                  selected = 0
                  line = line.replace( "{", ";" )
            result.append( line )

   # result.append( "example[%s]" % file_name )

   # skip quoted source lines
   line = input.pop( 0 )
   while not line.startswith( "~~~" ):
      line = input.pop( 0 )   
   result.append( line )
   
   return result

def quote( input, file_name, marker ):
   return example( input, file_name, marker, 1 )
   
def example_path( path ):
   global example_files_path
   example_files_path = "" + path
   return []   

toc_one_line = -1;
   
def table_of_contents( input, n = -1 ):
   global toc_one_line
   toc_one_line = n

   # skip lines until the end marker
   line = input.pop( 0 )		 
   while not line.startswith( "<!-- update end" ):
      line = input.pop( 0 )   
   
   return [ "%%TOC%%\n", line ]
   
def list_entry( n ):
   return " " * ( 2 * n ) + "- " 
   
def num_add( num, n ):
   while len( num ) > n:
      num.pop()
   while len( num ) < n:
      num.append( 0 )
#   print( n, num )
   num[ n - 1 ] = num[ n - 1 ] + 1
   return num

def num_str( num ):
   result = ""
   while len( num ) > 0:
      n = num.pop( 0 )   
      if result != "":
         result += "."
      result += str( n )
   return result	  

def update( file_name ):
   print( "updating %s" % file_name )

   # read input file
   input = []
   with open( file_name, "r" ) as f:
      for line in f:
         input.append( line )
		 
   # process
   result = []
   toc = []
   num = []
   while len( input ) > 0:
      line = input.pop( 0 )
		 
      if line.startswith( "<!-- update " ):
         result.append( line )

         line = line.replace( "<!-- update ", "" )	
         line = line.replace( "-->", "" )	
         result = result + eval( line )
		    		
      elif line.startswith( "~~~" ):
         result.append( line )
         line = input.pop( 0 )	
         result.append( line )	 
         while not line.startswith( "~~~" ):
            line = input.pop( 0 )   
            result.append( line )         
	  
      elif line.startswith( '<a name="toc-anchor-' ):
         line = input.pop( 0 )
         if line.strip() != "":
            input = [ ":" + line ] + input
	  
      elif line.startswith( "#" ):
         n = len( toc )
         d = 0
         while line.startswith( "#" ):
            d = d + 1
            line = line[ 1 : ]
         num = num_add( num, d )			
         while ( line + ' ' )[ 0 ] in "1234567890. ":
            line = line[ 1 : ]
         line = line.replace( "\n", "" ).strip()
         line = num_str( num[:] ) + " " + line
         if d == toc_one_line:
            c = "-" if num[ -1 ] == 1 else " "
            nl = "\n" if num[ -1 ] == 1 else ""
            toc.append( 
              nl + list_entry( d ).replace( "-", c ) 
              + "[%s](#toc-anchor-%d)\n" % ( line , n ))
         else:
            toc.append( 
               "\n" + list_entry( d ) 
               + "[%s](#toc-anchor-%d)\n" % ( line , n ))
         result.append( '<a name="toc-anchor-%d"></a>\n' % n )
         result.append( '\n' )
         result.append( d * "#" + " " + line + "\n" )
      
      else:
         result.append( line )
		 
   # write output to the same file
   with open( file_name, "w" ) as f:
      for line in result:
         if line == "%%TOC%%\n":
            for line in toc:
               f.write( line )
            f.write( "\n" )
         else:
            f.write( line )   
 	
update( "hwcpp-getting-started.md" )
update( "hwcpp-nrf24l01.md" )
update( "hwcpp-primer.md" )
update( "hwcpp-reference.md" )
update( "hwcpp-targets.md" )
