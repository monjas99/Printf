LIB = ar rcs
RM = rm -f

cc = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = printf.a
SRC = printf.c
OBJ = $(SRC:.=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
