# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 12:57:34 by pifourni          #+#    #+#              #
#    Updated: 2025/11/17 11:45:54 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
LIB = libft/libft.a
CFLAGS = -Wall -Wextra -Werror -I. -Iincludes
SRC = ./ft_printf.c \
	  ./src/print_chr.c \
	  ./src/print_num.c \
	  ./src/print_hex.c \

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(LIB):
	$(MAKE) -C libft

$(NAME): $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar -rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all
