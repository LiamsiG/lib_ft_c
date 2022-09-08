#include <stddef.h>

int ft_strnequ(char const *s1, char const *s2,size_t n)
{
	int	count_s1; 
	int	count_s2;
	size_t	i;

	count_s1 = 0;
	count_s2 = 0;
	i = 0;

	while ( i < n ) 
	{
		if ( s1[i] < s2[i] )
		{
		     count_s2++;
		}
                if ( s1[i] > s2[i] ) 
		{
	            count_s1++;
		}
                i++;
	}
	if ( count_s1 < count_s2 ) 
	{
		return 0; 
	}
	else 
	{
		return 1;
	}
	return 0;
}
