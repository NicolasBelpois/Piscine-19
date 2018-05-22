# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 16:51:20 by nbelpois          #+#    #+#              #
#    Updated: 2018/05/15 19:43:28 by nbelpois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -c -I
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
AR = ar
ARFLAGS = rc
SRC_P = ./srcs/
HEAD_P = ./includes/
SRC = $(SRC_P)ft_putchar.c $(SRC_P)ft_putstr.c $(SRC_P)ft_swap.c $(SRC_P)ft_strlen.c $(SRC_P)ft_strcmp.c
OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME):
	$(CC) $(HEAD_P) $(CFLAGS) $(SRC)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

.PHONY: clean 

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
