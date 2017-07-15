/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:01:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 16:48:06 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int        not_in_square(char nbr, int ligne, int col, char **sudoku)
{
	int i;
	int j;

	i = ligne - (ligne % 3);
	while (i < 3)
	{
		j = col - (col % 3);
		while (j < 3)
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
	while (i < 9)
	{
		if (sudoku[ligne][i] == nbr && i != col)
			return (0);
		i++;
	}
	return (1);
}

int not_in_col(char nbr, int ligne, int col, char **sudoku)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][col] == nbr && i != ligne)
			return (0);
		i++;
	}
	return (1);
}
