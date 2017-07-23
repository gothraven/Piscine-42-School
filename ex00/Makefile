# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 04:20:22 by szaghban          #+#    #+#              #
#    Updated: 2017/07/23 21:08:40 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := eval_expr
SRC := src/
INCLUDES := includes/
CACHE := cache/
FUNS := eval_expr ft_putnbr ft_putstr ft_strlen ft_init
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	@gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	@gcc $(INCF) $(FLAGS) main.c $(BINS) -o $(NAME)
	@mkdir $(CACHE)
	@mv *.o $(CACHE)
clean:
	@/bin/rm -rf $(CACHE)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
