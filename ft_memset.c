char	*ft_memset(char *dest, char c, int size)
{

	int	i;

	i = 0; 


	while ( i < size ) 
	{
		dest[i] = c; 
		i++;
	}
	dest[i] = '\0'; 
	return	dest;
}
