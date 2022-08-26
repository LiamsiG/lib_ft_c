int	compare(int c) 
{
	if ( c >= 0X00 && c <= 0X80 ) 
	{
		return 1; 
	}
	else 
	{
		return 0;
	}
}

int 	ft_isascii(int c)
{
	while ( c ) 
	{
		if ( compare(c) ) 
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
