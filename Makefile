NAME = libft.a
#libft
CC=gcc
INCDIRS = -I.
CFLAGS=-Wall -Wextra -Werror -c -g $(INCDIRS) $(OPT)

CFILES=ft_toupper.c ft_atoi.c ft_bzero.c main.c
OBJECTS=ft_toupper.o ft_atoi.o ft_bzero.o main.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(BINARY): $(CFILES) 
	ar -rcs libft.a ft_toupper.o ft_atoi.o ft_bzero.o

libs: libft.a

clean:
	rm -rf $(BINARY) $(OBJECTS)

fclean: clean

re: fclean all
