#include <stdio.h>


void	*ft_memccpy(void *dest, void *src, char c , int size )
{
	char	*dest_ = (char *) dest; 
	char	*src_  = (char *) src; 

	int	i;

	i = 0; 

	while ( i < size ) 
	{
		src_[i] = dest_[i];
		

		if ( dest_[i] == c ) 
		{
			printf("FIND\n"); 
		}
		i++;
	}
}

int	main() 
{
	char  i[] = "hello"; 
	char j [] = "ismail"; 
	char c = 'l'; 
	int size = 7; 
	ft_memccpy(i,j,c,size);
}
