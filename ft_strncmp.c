#include <stddef.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if ( *s1 && *s2 == 0 )
    {
        return 0; 
    }
    
    size_t      i = 0;

    while ( i < n && s1[i] != '\0' )
    {
        i++;
    }

    size_t      j = 0; 

    while ( j < n && s2[j] != '\0' ) 
    {
        j++;
    }
    if ( i == j ) 
    return 0;
    if ( i < j ) 
    return -1;
    if ( i > j )
    return 1;
    return 0;
}