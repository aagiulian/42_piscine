# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiulian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 11:09:17 by agiulian          #+#    #+#              #
#    Updated: 2016/07/18 21:34:21 by agiulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c \
	  srcs/ft_putstr.c srcs/main.c srcs/operands.c

HEAD = includes/

OBJECTS = ft_putchar.o ft_putnbr.o ft_atoi.o \
		  ft_putstr.o main.o operands.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC) -I$(HEAD)
	@gcc $(FLAG) $(OBJECTS) -o $(NAME)
	

clean: 
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
