#include <stdio.h>

int	ft_strequ(char const *s1, char const *s2)
{
	char	*str = (char *)s1;
	char	*str_ = (char *)s2;
	if ( str && str_ == NULL )
		return 0;
	int	count = 0;
	int	count_ = 0;
	while ( str[count] != '\0' ) 
	{
		count++;

	}
	while ( str_[count_] != '\0' ) 
	{
		count_++;
	}
	if ( count < count_ )
	return 1;
	else 
	return 0;
}	
