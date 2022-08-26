#include <stddef.h>


char *ft_strncpy(char *dest, const char *src, size_t n)
{
              char	*dest_dest = (char *) dest; 
	      char	*src_src = (char *) src;

	      if ( dest_dest && src_src == NULL ) 
	      {
		      return NULL; 
	      }

	      size_t 	i = 0; 

	      while ( i < n  && src[i] != '\0' ) 
	      {
		      dest_dest[i] = src_src[i]; 
		      i++;
	      }
              dest_dest[i] = '\0';
	       
   
	      return dest_dest; 
}
