# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 04:20:22 by szaghban          #+#    #+#              #
#    Updated: 2017/07/23 12:27:21 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := colle-2
SRC := src/
INCLUDES := includes/
CACHE := cache/
FUNS := ft_putnbr ft_putstr ft_strdup ft_strlen
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	@gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	@gcc $(INCF) $(FLAGS) main.c $(BINS) -o $(NAME)
	@/bin/mkdir $(CACHE)
	@/bin/mv *.o $(CACHE)

clean:
	@/bin/rm -rf $(CACHE)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
