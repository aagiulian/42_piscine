# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiulian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/20 14:12:00 by agiulian          #+#    #+#              #
#    Updated: 2016/07/20 16:32:30 by agiulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_display_file

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_putstre.c \
	  srcs/ft_putnbr.c \
	  main.c

HEAD = -Iincludes/

OBJECT = $(SRC:.c=.o)

CFLAGS = $(HEAD) -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJECT)
	gcc $(CFLAG) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re: fclean all
