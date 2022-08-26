void 	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src = (char *) s;

	if ( NULL == s ) 
	{
		return NULL; 
	}

	unsigned int	i = 0; 

	while ( i < n ) 
	{
		if ( src[i] == (unsigned char) c)
		{
			return (src+1);
		}
		i++;
	}
	return (NULL); 
}
