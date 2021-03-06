/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:01:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 16:01:46 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		not_in_square(char nbr, int ligne, int col, char **sudoku)
{
	int i;
	int j;
	int ligne_fin;
	int col_fin;

	i = (ligne / 3) * 3;
	ligne_fin = i + 3;
	col_fin = ((col / 3) * 3) + 3;
	while (i < ligne_fin)
	{
		j = (col / 3) * 3;
		while (j < col_fin)
		{
			if (sudoku[i][j] == nbr && (i != ligne && j != col))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		not_in_row(char nbr, int ligne, int col, char **sudoku)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (sudoku[ligne][i] == nbr && i != col)
			return (0);
		i++;
	}
	return (1);
}

int		not_in_col(char nbr, int ligne, int col, char **sudoku)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (sudoku[i][col] == nbr && i != ligne)
			return (0);
		i++;
	}
	return (1);
}

int		is_possible(char nbr, int ligne, int col, char **sudoku)
{
	if (not_in_square(nbr, ligne, col, sudoku)
			&& not_in_row(nbr, ligne, col, sudoku)
			&& not_in_col(nbr, ligne, col, sudoku))
		return (1);
	else
		return (0);
}
