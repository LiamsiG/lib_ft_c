char *ft_strrchr(const char *s, int c)
{
    int     i = 0; 

    while (s[i] != '\0') 
    {
        i++; 
    }
     
    i--;

    if ( s[i]== c ) 
       
	return ((char *) (s+i));
        return NULL;
  
}
