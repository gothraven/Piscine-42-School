/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:22:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 20:54:48 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		find_solution(int position, char **sudoku)
{
	int i;
	int j;
	int k;

	if (position == (SIZE * SIZE))
	{
		return is_valid(sudoku);
	}
	i = position % SIZE;
	j = position / SIZE;
	if (sudoku[i][j] != '.')
		return find_solution(position + 1, sudoku);
	else
	{
		k = 1;
		while (k <= 9)
		{
			if(is_possible(k + '0', i, j, sudoku))
			{
				sudoku[i][j] = k + '0';
				if (find_solution(position + 1, sudoku) == 1)
					return 1;
			}
			k++;
		}
	}
	sudoku[i][j] = '.';
	return 0;
}
