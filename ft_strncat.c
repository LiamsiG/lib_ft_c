#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n ) 
{
	size_t	len = strlen(dest); 

	size_t	i = 0; 

	while ( i < n  && src[i] != '\0' ) 
	{
		dest[len+i] = src[i]; 
		i++; 
	}

	dest[len+i] = '\0';
       
	return dest; 
}
