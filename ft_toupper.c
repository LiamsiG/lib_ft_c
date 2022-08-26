int	ft_toupper(int c)
{
	while ( c >= 'a' && c <=  'z' ) 
	{
		return c - 32;
	}
	return c;
}
