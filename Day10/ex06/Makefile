# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 04:20:22 by szaghban          #+#    #+#              #
#    Updated: 2017/07/20 00:19:52 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := do-op
SRC := src/
INCLUDES := includes/
FUNS := ft_atoi ft_err ft_putnbr ft_ops ft_putstr ft_strlen ft_strdup
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	@gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	@gcc $(INCF) $(FLAGS) main.c $(BINS) -o $(NAME)

clean:
	@/bin/rm -f $(BINS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
