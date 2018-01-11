examples_source = ""

def example( input, file_name ):
   result = []
   
   # open quote line
   result.append( input.pop( 0 ) )

   # insert the quoted file
   with open( file_name, "r" ) as f:
      for line in f:
         if not line.endswith( "\n" ):
            line += "\n"
         result.append( line )
      		 

   # result.append( "example[%s]" % file_name )

   # skip quoted source lines
   line = input.pop( 0 )		 
   while not line.startswith( "```" ):
      line = input.pop( 0 )   
	  
   # closing quote line	  
   result.append( line )
   
   return result

def parse( file_name ):
   # read input file
   input = []
   with open( file_name, "r" ) as f:
      for line in f:
         input.append( line )
		 
   # process
   result = []
   skipping = 0
   while len( input ) > 0:
      line = input.pop( 0 )
		 
      if line.startswith( "[](python" ):
         result.append( line )

         line = line.replace( "[](python", "" )	
         line = line.strip()[:-1]		 
         result = result + eval( line )
		    		
      else:
         result.append( line )
		 
   # write output to the same file
   with open( "result.md", "w" ) as f:
      for line in result:
         f.write( line )   
	
parse( "primer.md" )