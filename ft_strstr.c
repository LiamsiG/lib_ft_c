int	compare(const char *x, const char *y) 
{
	while ( *x && *y ) 
	{
		if ( *x != *y ) 
		{
			return 0; 
		}
		x++; 
		y++; 
	}
	return ( *y == '\0' ); 
}

char	*ft_str_str(const char *x, const char *y )
{
	while ( *x != '\0' ) 
	{
		if ( *x == *y && compare(x,y)) 
		{
			return ((char*)x);
		}
		x++;
	}

	return NULL;
}
