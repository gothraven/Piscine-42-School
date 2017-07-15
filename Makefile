NAME = sudoku
PATH_SRC = ./src/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)find_solution.c $(PATH_SRC)ft_str.c $(PATH_SRC)is_valid.c \
		$(PATH_SRC)possible_move.c $(PATH_SRC)print_sudoku.c $(PATH_SRC)main.c
OBJ = find_solution.o ft_str.o is_valid.o possible_move.o print_sudoku.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)

re: fclean all
