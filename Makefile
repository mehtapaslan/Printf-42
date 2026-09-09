NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_print_char.c ft_print_hex.c \
		ft_print_nbr.c ft_print_ptr.c ft_print_str.c \
		ft_print_unnbr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re