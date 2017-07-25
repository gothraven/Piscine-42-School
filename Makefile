# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 04:20:22 by szaghban          #+#    #+#              #
#    Updated: 2017/07/25 09:48:55 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := bsq
SRC := src/
INCLUDES := includes/
CACHE := cache/
FUNS := getnextline convert_it file_it find_it read_it solve_it verify_it
MAIN := main.c
FLAGS := -Wall -Wextra -Werror
INCF = -I $(INCLUDES)
BINS = $(patsubst %,%.o,$(FUNS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	@gcc $(INCF) $(FLAGS) -c $(patsubst %.o,$(SRC)%.c,$@)

$(NAME): $(BINS)
	@gcc $(INCF) $(FLAGS) $(MAIN) $(BINS) -o $(NAME)
	@mkdir $(CACHE)
	@mv *.o $(CACHE)
clean:
	@/bin/rm -rf $(CACHE)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
