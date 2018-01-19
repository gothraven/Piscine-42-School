# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szaghban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 21:13:26 by szaghban          #+#    #+#              #
#    Updated: 2017/07/19 21:19:32 by szaghban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = srcs/
INCLUDES_DIR = includes/
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
BINS = $(patsubst %,%.o,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	gcc -I $(INCLUDES_DIR) -Wall -Wextra -Werror -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
