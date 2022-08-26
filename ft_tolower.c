int	ft_tolower(int c) 
{
	while ( c >= 'A' && c <= 'Z' ) 
	{
		return c + 32; 
	}

	return c;
}
