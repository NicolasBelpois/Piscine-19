# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 11:10:31 by nbelpois          #+#    #+#              #
#    Updated: 2018/05/20 09:44:00 by nbelpois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = eval_expr
SRC_P = ./srcs/
HEAD_P = ./includes/
SRC = $(SRC_P)ft_putchar.c $(SRC_P)ft_atoi.c $(SRC_P)ft_find_sum.c $(SRC_P)ft_find_nb.c $(SRC_P)ft_putnbr.c $(SRC_P)main.c $(SRC_P)ft_find_op.c
OBJ = ft_putchar.o ft_find_sum.o ft_find_nb.o ft_find_op.o ft_putnbr.o main.o ft_atoi.o

all: $(NAME)

$(NAME):
	@$(CC) -c -I $(HEAD_P) $(CFLAGS) $(SRC)
	@$(CC) -o $(NAME) $(OBJ)

.PHONY: clean

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

