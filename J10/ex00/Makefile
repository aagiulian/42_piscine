# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiulian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 11:09:17 by agiulian          #+#    #+#              #
#    Updated: 2016/07/18 16:41:44 by agiulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c \
		  srcs/ft_strcmp.c srcs/ft_putstr.c

HEAD = includes/

OBJECTS = ft_putchar.o ft_strlen.o ft_swap.o \
		  ft_putstr.o ft_strcmp.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAG) $(SRC) -I$(HEAD)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean: 
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
