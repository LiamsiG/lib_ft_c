#include <stdlib.h>

size_t		ft_strlen(char *str)
{
	size_t	i = 0; 

	while ( str[i] != '\0' ) 
	{
		i++; 
	}

	return i; 
}

void	test(char **str)
{
	char	*allocate;
	char	*ptr = (char *)str;
	size_t	i;
	if ( ptr == NULL ) 
        return;
	if ( *ptr != '\0' ) 
	{
	allocate = malloc((ft_strlen(ptr) * sizeof(char)));
	while ( *ptr != '\0' ) 
	{
		allocate = NULL;
		ptr++;
	}
	}
	free(allocate);
}
