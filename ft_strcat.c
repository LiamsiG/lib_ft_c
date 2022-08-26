#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	if ( dest && src == NULL ) 
	{
		return NULL; 
	}

	int	i = 0;  
        
	int	len = strlen(dest);

	while ( src[i] != '\0' ) 
	{
		dest[len+i] = src[i]; 
		i++; 
	}
	dest[len+i] = '\0'; 
 
	return dest; 
}
