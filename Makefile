NAME = libft.a
#libft
CC=gcc
INCDIRS = -I.
CFLAGS=-Wall -Wextra -Werror -c -g $(INCDIRS) $(OPT)

CFILES=ft_toupper.c main.c
OBJECTS=ft_toupper.o main.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(BINARY): $(CFILES) 
	ar -rcs libft.a ft_toupper.o

libs: libft.a

clean:
	rm -rf $(BINARY) $(OBJECTS)

fclean: clean

re: fclean all
