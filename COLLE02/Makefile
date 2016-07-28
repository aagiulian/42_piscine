# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiulian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 12:29:55 by agiulian          #+#    #+#              #
#    Updated: 2016/07/24 16:10:18 by agiulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = colle-2

SRC = srcs/readcolle.c \
	  srcs/checks.c \
	  srcs/colle.c \
	  srcs/print.c \
	  srcs/main.c 

HEAD = -Iincludes/

OBJECT = $(SRC:.c=.o)

CFLAGS = $(HEAD) -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECT)
	gcc $(CFLAG) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
