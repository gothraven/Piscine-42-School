/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:01:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 16:03:10 by szaghban         ###   ########.fr       */
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
			if (i != ligne && j != col)
			{
				if (sudoku[i][j] == nbr)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}



