// Lexicographical comparison between two strings 

int	ft_strequ(char *str , char *str_1 ) 
{
	int	count_str;
   	int	count_str1;

	while ( *str && *str_1 != '\0' ) 
	{
		if ( *str < *str_1 ) 
		{
			count_str1++;
		}
		if ( *str > *str_1 ) 
		{
			count_str++;
		}
		str++;
		str_1++;
	}
	if ( count_str < count_str1 ) 
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
