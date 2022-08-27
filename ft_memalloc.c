#include <stdlib.h>
#include <stddef.h>
void * ft_memalloc(size_t size)
{
	size_t		*allocate;
	size_t		i;

	if ( size == 0 ) 
	{
		allocate = NULL; 
	}

	i	= 0; 

	if ( i < size ) 
	{
		allocate = malloc((size) * sizeof (size_t));

		while ( i < size ) 
		{
		allocate[i] = 0;
		i++;
	        }	
	}
     
	return allocate; 
}
