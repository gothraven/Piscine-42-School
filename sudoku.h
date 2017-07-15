/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:03:21 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 17:48:50 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
#define SUDOKU_H

void	print_sudoku(char **sudoku);

int		not_in_square(char nbr, int ligne, int col, char **sudoku);
int		not_in_row(char nbr, int ligne, int col, char **sudoku);
int		not_in_col(char nbr, int ligne, int col, char **sudoku);
int		is_valid(char **sudoku);

#endif
