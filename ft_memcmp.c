#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*src = (char *) s1;
	char	*src1 = (char *) s2;

	if ( src && src1 == NULL ) 
	{
		return 0;
	}

	size_t i = 0; 

	while ( i < n )
	{
		if ( src[i] != src1[i] ) 
		{
			return src[i] - src1[i];
		}
		i++;
	}
	return(0);
}
