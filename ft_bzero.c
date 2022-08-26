char	*ft_bzero(char *ptr, int n)
{
	int	i; 

	i = 0; 


	while ( i < n ) 
	{
		ptr[i] = '\0'; 
		i++;
	}

	return ptr; 
}
