char *ft_strcpy(char *dest, const char *src)
{
	char	*dest_dest = (char *) dest; 
	char	*src_src = (char *) src;
         
	int	i; 

	i = 0; 


	while ( src_src[i] != '\0' ) 
	{
		dest_dest[i] = src_src[i];  
		i++;
	}
	dest_dest[i] = '\0';

	return dest_dest; 
}
