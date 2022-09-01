NAME = lib_ft_c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_memset.c     \
        ft_bzero.c      \
        ft_memcpy.c     \
        ft_memmove.c    \
        ft_memchr.c     \
        ft_strlen.c     \
        ft_isalpha.c    \
        ft_isdigit.c    \
        ft_isascii.c    \
        ft_isprint.c    \
	ft_strnstr.c	\
        ft_toupper.c    \
        ft_tolower.c    \
        ft_strchr.c     \
        ft_strrchr.c    \
	ft_memcmp.c     \
        ft_atoi.c       \
        ft_strcpy.c    \
        ft_strdup.c     \
        ft_strlcat.c    \
        ft_strdup.c     \
	ft_strncmp.c    \
        ft_islnum.c     \
	ft_memalloc.c   \
	ft_memdel.c     \
	ft_strnew.c     \


OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) lib_ft_c.h
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
