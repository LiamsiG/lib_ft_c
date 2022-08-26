int	compare(const char *x , const char *y ) 
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
char	*ft_strnstr(const char *x, const char *y, size_t n)
{
	int	i;

	i = 0;

	while ( i < n ) 
	{
		if ( x[i] == y[i] )
		{
			if (compare(x,y))
			{
			return ((char *)x);
			}
		}
		i++;
	}
	return NULL;
}
