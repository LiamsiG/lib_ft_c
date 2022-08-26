#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, long unsigned int n ) 
{
	char	*dest_dest = (char *) dest; 
	char	*src_src = (char *)   src; 

	long unsigned int	count = 0; 

	while (  count < n ) 
	{
		count++; 
	}

	char	*tmp;
     
	tmp = malloc((count) * sizeof(char));

	if ( NULL == tmp ) 
	{
		return NULL; 
	}

  
        long unsigned int	i = 0;

        while ( src_src[i] != '\0' ) 
	{
	       tmp[i] = src_src[i];
               i++; 
	}
        tmp[i] = '\0';
	
        long unsigned int	index = 0; 

	while ( index < n ) 
	{
		dest_dest[index] = tmp[index]; 
		index++; 
	}
	dest_dest[index] = '\0';

        free(tmp);
 
       return dest; 	
}
