#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char    *allocate;

    if ( size == 0 ) 
    {
        allocate = NULL; 
    }

    size_t      i = 0; 

    if ( i < size ) 
    {
        allocate = malloc((size) * sizeof (size_t));

        while ( i < size )
        {
            i++;
        }
        allocate[i] = '\0'; 
    }
    return allocate;
}