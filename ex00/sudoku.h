/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:03:21 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 17:57:55 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define SIZE 9

void	print_sudoku(char **sudoku);
int		is_sudoku(char **argv);
int		is_possible(char nbr, int ligne, int col, char **sudoku);
int		find_solution(int position, char **sudoku);
int		find_solution_reverse(int position, char **sudoku);
int		not_in_square(char nbr, int ligne, int col, char **sudoku);
int		not_in_row(char nbr, int ligne, int col, char **sudoku);
int		not_in_col(char nbr, int ligne, int col, char **sudoku);
int		is_valid(char **sudoku);
int		is_same_solution(char **sudoku1, char **sudoku2);

#endif
