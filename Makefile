NAME = libft.a
CC=gcc
INCDIRS = -I.
CFLAGS=-Wall -Wextra -Werror -c -g $(INCDIRS) $(OPT)

CFILES=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c main.c
OBJECTS=ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o main.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(BINARY): $(CFILES) 
	ar -rcs libft.a ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o

libs: libft.a

clean:
	rm -rf $(BINARY) $(OBJECTS)

fclean: clean

re: fclean all
