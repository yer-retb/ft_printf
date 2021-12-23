# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 19:51:08 by yer-retb          #+#    #+#              #
#    Updated: 2021/12/08 17:48:53 by yer-retb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAG = -Wall -Werror -Wextra
SCRS = ft_printf.c \
	ft_putstr.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_puthexa.c \
	

OBJ = $(SCRS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)

$(OBJ) : $(SCRS)
	$(CC) $(CFLAG) -c $(SCRS)
	ar rc $(NAME) $(OBJ)
clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all