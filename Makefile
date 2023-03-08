# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 12:13:47 by dmonjas-          #+#    #+#              #
#    Updated: 2023/03/08 12:40:04 by dmonjas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
NAME = printf.a

cc = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr_itoa.c ft_putnbr_base.c ft_putnbr_base_void.c ft_strlen.c

OBJ = $(SRC:.=.o)
INCLUDE= ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:		fclean all

.PHONY:	all clean fclean re
