#include <string.h>


size_t	ft_strlcat(char *dest, const char *src, size_t n)
{ 
	 if ( dest && src == NULL ) 
	 {
		 return 0; 
	 }

	 
         size_t		len = strlen(dest); 
     
	 size_t		i = 0;

	 while ( i < n  && src[i] != '\0' ) 
	 {
		 dest[len+i] = src[i]; 
		 i++; 
	 }

	 dest[len+i] = '\0'; 	 
}
