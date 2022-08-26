#include <unistd.h>

void	ft_putchar(char c) 
{
	write(1, &c, 1);
}

int	atoi(const char *ptr)
{
	int	rest; 
	int	i;
 
        i = 0; 
        rest = 0;	
    	
        if ( ptr[0] == '-' ) 
	{
	    ft_putchar('-');
	    i++;
	}
	
        while ( ptr[i] != '\0' ) 
	{
	      rest = rest * 10 + (ptr[i] - '0');
	      i++; 
	}
	return rest;
}
