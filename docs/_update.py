# update the markdown files:
# insert/update code 
# insert/update TOC

example_files_path = ""

def example( input, file_name ):
   result = []
   
   # open quote line
   result.append( input.pop( 0 ) )

   # insert the quoted file
   with open( example_files_path + file_name, "r" ) as f:
      for line in f:
         if not line.endswith( "\n" ):
            line += "\n"
         result.append( line )

   # result.append( "example[%s]" % file_name )

   # skip quoted source lines
   line = input.pop( 0 )		 
   while not line.startswith( "```" ):
      line = input.pop( 0 )   
   result.append( line )
   
   return result
   
def example_path( path ):
   global example_files_path
   example_files_path = "" + path
   return []   
   
def table_of_contents( input, n = 10 ):

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
   if len( num ) < n:
      num.append( 0 )
   # print( n, num )
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
		    		
      elif line.startswith( "```" ):
         result.append( line )
         line = input.pop( 0 )	
         result.append( line )	 
         while not line.startswith( "```" ):
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
         toc.append( list_entry( d ) + "[%s](#toc-anchor-%d)\n\n" % ( line , n ))
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
         else:
            f.write( line )   
	
update( "hwcpp-getting-started.md" )
update( "hwcpp-primer.md" )
update( "hwcpp-reference.md" )
update( "hwcpp-targets.md" )
