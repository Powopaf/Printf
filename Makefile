# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 12:57:34 by pifourni          #+#    #+#              #
#    Updated: 2025/11/13 10:59:44 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
LIB = 
CFLAGS = -Wall -Wextra -Werror -I. -Includes
SRC = ./main.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $+
#	ar -rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
