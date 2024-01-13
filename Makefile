CC = gcc
CFLAGS =-Wall -Wextra -Werror

all:main
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

main:ft_bzero.c ft_memset.c ft_strlen.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_isdigit.c ft_isalpha.c reverse.c main.c 
	@echo "Compling main file"
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	@echo "Removing everything but not the sourcefile"
	@rm -rf *.o main

