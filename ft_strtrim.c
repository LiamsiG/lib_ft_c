#include <stdio.h>
#include <stdlib.h>

size_t		ft_strlen(char const *s)
{
	size_t		i;
	i = 0;
	while ( s[i] != '\0' ) 
	{
		i++;
	}
	return i;
}

char	*ft_strtrim(char const *s)
{
	if ( s == NULL )
		return NULL;
	size_t	len;
	char	*allocate;
	
	len = ft_strlen(s);
	size_t		i;
	i = 0;
        size_t	start = 0;
	size_t	end = len - 1;
	allocate = malloc((len+1) * sizeof (char));

	if ( s[start] == ' ' && s[end] == ' ' ) 
	{
		while ( s[i] != '\0' ) 
		{
			if ( s[i] == '-' )
			{
				*(allocate + (char const)i);
				i++;
			}
		         *(allocate + (char const )i);
			i++;
		}
	}
}		
int	main()
{
	char const *s = " hello ";
	ft_strtrim(s);
}
