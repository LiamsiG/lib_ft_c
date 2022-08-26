int	ft_strcmp(const char *s1, const char *s2)
{
	if ( *s1 && *s2 == 0 ) 
	{
		return 0; 
	}

	int	count = 0; 
	int	count1 = 0; 

	while ( count[s1] != '\0' ) 
	{
		count++; 
	}

	while ( count1[s2] != '\0' ) 
	{
		count1++; 
	}

	if ( count == count1 ) 
	{ 
		return 0; 
	}
	if ( count < count1 ) 
	{
		return -1;
	}
	else 
	{
		return 1;
	}

	return 0; 
}
