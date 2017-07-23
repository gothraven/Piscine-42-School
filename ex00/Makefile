# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 04:20:22 by szaghban          #+#    #+#              #
#    Updated: 2017/07/23 02:32:40 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := eval_expr
SRC := src/
INCLUDES := includes/
FUNS := eval_expr ft_atoi ft_putnbr ft_putstr ft_strdup ft_strlen
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	gcc $(INCF) $(FLAGS) main.c $(BINS) -o $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
