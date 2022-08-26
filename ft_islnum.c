int	check_char(char c) 
{
	if ( c >= '0' && c <= '9' || c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= 0 && c <= 9 ) 
	{
		return 1; 
	}
	return 0;
}

int	ft_islnum(int c) 
{
	while ( c ) 
	{
		if ( check_char(c) ) 
		{
			return 1;
		}
		else 
		{
			return 0; 
		}
	}
	return 0;
}
