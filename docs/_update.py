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
   if n == 1 : return " - " 
   if n == 2 : return "   * " 
   return "   ?"

def update( file_name ):
   print( "updating %s" % file_name )
   toc = []

   # read input file
   input = []
   with open( file_name, "r" ) as f:
      for line in f:
         input.append( line )
		 
   # process
   result = []
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
         pass  
	  
      elif line.startswith( "#" ):
         n = len( toc )
         d = 0
         while line.startswith( "#" ):
            d = d + 1
            line = line[ 1 : ]
         while ( line + ' ' )[ 0 ] in "1234567890. ":
            line = line[ 1 : ]
         line = line.replace( "\n", "" ).strip()
         toc.append( " - [%s](#toc-anchor-%d)\n\n" % ( list_entry( n ) + line , n ))
         result.append( '<a name="toc-anchor-%d"></a>\n' % n )
         result.append( d * "#" + line )
      
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
