/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:07:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 18:03:22 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "libstr.h"

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

int		is_sudoku(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		j = 0;
		while (argv[i][j])
		{
			if (!((argv[i][j] >= '1' && argv[i][j] <= '9')
					|| argv[i][j] == '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_same_solution(char **sudoku1, char **sudoku2)
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (sudoku1[i][j] != sudoku2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
