CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memcpy.c ft_bzero.c ft_memset.c ft_strlen.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_isdigit.c ft_isalpha.c reverse.c main.c
FILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(FILES)
	@ar rc $(NAME) $(FILES)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files"
	@rm -rf $(FILES)

fclean: clean
	@echo "Removing $(NAME)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
