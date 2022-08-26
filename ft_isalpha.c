int	check(char c) 
{
	if ( c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' )
	{
		return 1;
	}
	return 0; 
}

int	ft_isalpha(int c)
{
	while ( c ) 
	{
            if (check(c))
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
