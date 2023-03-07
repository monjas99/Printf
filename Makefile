LIB = ar rcs
RM = rm -f

cc = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = printf.a
SRC = printf.c ft_putchar.c ft_putstr.c ft_putnbr_atoi.c ft_putnbr_base.c ft_strlen.c
OBJ = $(SRC:.=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
