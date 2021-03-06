/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:22:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 18:00:08 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		find_solution(int position, char **sudoku)
{
	int		i;
	int		j;
	char	k;

	if (position == (SIZE * SIZE))
		return (is_valid(sudoku));
	i = position % SIZE;
	j = position / SIZE;
	if (sudoku[i][j] != '.')
		return (find_solution(position + 1, sudoku));
	else
	{
		k = '0';
		while (++k <= '9')
		{
			if (is_possible(k, i, j, sudoku))
			{
				sudoku[i][j] = k;
				if (find_solution(position + 1, sudoku))
					return (1);
			}
		}
	}
	sudoku[i][j] = '.';
	return (0);
}

int		find_solution_reverse(int position, char **sudoku)
{
	int		i;
	int		j;
	char	k;

	if (position == 0)
		return (is_valid(sudoku));
	i = position % SIZE;
	j = position / SIZE;
	if (sudoku[i][j] != '.')
		return (find_solution_reverse(position - 1, sudoku));
	else
	{
		k = '0';
		while (++k <= '9')
		{
			if (is_possible(k, i, j, sudoku))
			{
				sudoku[i][j] = k;
				if (find_solution_reverse(position - 1, sudoku))
					return (1);
			}
		}
	}
	sudoku[i][j] = '.';
	return (0);
}
