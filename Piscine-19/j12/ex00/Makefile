# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbelpois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 16:51:20 by nbelpois          #+#    #+#              #
#    Updated: 2018/05/17 13:11:57 by nbelpois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_display_file
SRC_P = ./srcs/
HEAD_P = ./includes/
SRC = $(SRC_P)ft_putchar.c $(SRC_P)ft_putstr.c $(SRC_P)ft_display_file.c $(SRC_P)main.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o main.o

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
