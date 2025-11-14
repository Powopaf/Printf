# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 12:57:34 by pifourni          #+#    #+#              #
#    Updated: 2025/11/14 23:33:01 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
LIB = lib/libft.a
CFLAGS = -Wall -Wextra -Werror -I. -Includes -g
SRC = ./ft_printf.c \
	  ./src/print_chr.c \
	  ./src/print_num.c \
	  ./src/print_hex.c \
	  ./main.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $+ $(LIB)
#	ar -rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
