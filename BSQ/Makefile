# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiulian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 12:29:55 by agiulian          #+#    #+#              #
#    Updated: 2016/07/27 19:04:14 by agiulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = bsq

SRC = srcs/main.c \
	  srcs/set_grid.c \
	  srcs/ft_base.c \
	  srcs/ft_read.c \
	  srcs/ft_strfn.c \
	  srcs/exec_bsq.c \
	  srcs/check_fcnt.c \
	  srcs/find_square.c \
	  srcs/ft_split_lines.c

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
