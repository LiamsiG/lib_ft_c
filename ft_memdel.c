#include <stdlib.h>

void	ft_memdel(void **p)
{
	char	*ptr = (char *) p;

	ptr = (char *) malloc(15);

	int	i = 0; 

	while ( i < 15 )
	{
		i++;
	}

	ptr[i] = '\0';

	free(ptr);

	ptr = NULL;
}
