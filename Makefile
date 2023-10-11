# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 17:54:31 by zelmoura          #+#    #+#              #
#    Updated: 2023/02/02 18:11:16 by zelmoura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

INCLUDE = ft_printf.h

CFLAGS = -Wall -Wextra -Werror  

sources = ft_printf.c ft_hexamaj.c ft_hexamin.c  ft_putchar.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsigned.c




objet = $(sources:%.c=%.o)

all: $(NAME)

$(NAME): $(objet)
	ar -rcs $(NAME) $(objet)

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(objet)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
