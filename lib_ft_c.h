#ifndef lib_ft_c
# define lib_ft_c

# include <stdlib.h>
# include <unistd.h>
#include <string.h>

int     atoi(const char *ptr);
char    *ft_bzero(char *ptr, int n);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(char c);
int     ft_islnum(int c);
int     isprint(int c);
void * ft_memalloc(size_t size);
void    *ft_memccpy(void *dest, void *src, char c , int size );
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    ft_memdel(void **p);
void    *ft_memmove(void *dest, void *src, long unsigned int n );
char    *ft_memset(char *dest, char c, int size);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strchr(const char *s, int c);
void ft_strclr(char *s);
int     ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dest, const char *src);
char    *strdub(char *str);
size_t  ft_strlcat(char *dest, const char *src, size_t n);
int     ft_strlen(const char *str);
char    *ft_strncat(char *dest, const char *src, size_t n );
char *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strnew(size_t size);
char    *ft_strnstr(const char *x, const char *y, size_t n);
char *ft_strrchr(const char *s, int c);
char    *ft_str_str(const char *x, const char *y );
int     ft_tolower(int c);
int     ft_toupper(int c);
void    ft_memdel(void **p);
void * ft_memalloc(size_t size);



#endif
