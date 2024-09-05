# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 19:39:36 by raydogmu          #+#    #+#              #
#    Updated: 2024/09/05 13:47:46 by raydogmu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HFILES = includes
OFILES = ${CFILES:.c=.o}
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(HFILES)

$(NAME): $(OFILES)
	ar rcs $@ $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re