/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:07:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 15:59:59 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_valid(char **sudoku)
{
	int i;
	int j;

	i = 0;
	while (sudoku[i])
	{
		j = 0;
		while (sudoku[i][j])
		{
			if (sudoku[i][j] != '.')
				if (!(not_in_square(sudoku[i][j], i, j, sudoku)
					&& not_in_row(sudoku[i][j], i, j, sudoku)
					&& not_in_col(sudoku[i][j], i, j, sudoku)))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
