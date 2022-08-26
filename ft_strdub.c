#include <stdlib.h>
#include <string.h>

char	*strdub(char *str)
{
	char	*dest;

	dest = malloc((strlen(str+1)) * sizeof (char));

	int	i;


	i = 0;

	while ( str[i] != '\0' ) 
	{
		dest[i] = str[i];
	}
	
	dest[i] = '\0';

	return dest;
}
