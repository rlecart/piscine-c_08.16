# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 19:04:41 by nlaubres          #+#    #+#              #
#    Updated: 2016/08/21 23:41:17 by rlecart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	colle-2
SRC		=	Ressources/main.c Ressources/ft_check_all.c Ressources/ft_putchar.c Ressources/ft_putstr.c Ressources/ft_strcmp.c Ressources/colle00.c Ressources/colle01.c Ressources/colle02.c Ressources/colle03.c Ressources/colle04.c Ressources/doline.c Ressources/ft_print_sol.c Ressources/ft_putnbr.c
OBJ		=	$(SRC:.c=.o)
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra

all:
	$(CC) -o $(NAME) $(FLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
