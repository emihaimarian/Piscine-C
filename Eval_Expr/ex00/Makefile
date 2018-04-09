# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mienache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/29 15:25:40 by mienache          #+#    #+#              #
#    Updated: 2017/10/29 15:42:25 by mienache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c eval_expr.c ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_check_minus.c

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) main.o eval_expr.o ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_check_minus.o

clean:
	/bin/rm -f main.o eval_expr.o ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_check_minus.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
