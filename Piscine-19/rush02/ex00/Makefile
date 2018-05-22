# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karbenna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 17:47:04 by karbenna          #+#    #+#              #
#    Updated: 2018/05/20 13:11:38 by karbenna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCS = gcolle.c checkinput.c ft_lib.c
OBJ = gcolle.o checkinput.o ft_lib.o
LIB_FLAG = -lft

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRCS) 
	@ar rc libft.a $(OBJ)
	@ranlib libft.a
	@gcc -Wall -Wextra -Werror  main.c -L. $(LIB_FLAG) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.a

re: fclean all
