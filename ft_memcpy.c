void    ft_memcpy(void *str, void *str1, int size)
{
        char *dest = (char *) str1;
        char *dest1 = (char *) str;

        int     i;

        i = 0;

        while ( i < size )
        {
                dest1[i] = dest[i];
                i++;
        }
        dest1[i] = '\0';
}
