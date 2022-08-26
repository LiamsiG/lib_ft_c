int	check(int c)
{
	if ( c >= 1 && c <= 127 ) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int	isprint(int c)
{
	while ( c ) 
	{
		if ( check(c) ) 
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
