/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:22:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 20:09:12 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "sudoku.h"



void	find_solution(char nbr, int position, char **sudoku)
{
	int i;
	int j;
	int k;

	if (position == (SIZE * SIZE))
	{
		printf("end\n");
		printf("%d\n",is_valid(sudoku));
	}
	i = position % SIZE;
	j = position / SIZE;
	if (sudoku[i][j] != '.')
		find_solution(nbr, position + 1, sudoku);
	else
	{
		k = 1;
		while (k <= 9)
		{
			if(is_possible(k + '0', i, j, sudoku))
			{
				sudoku[i][j] = k + '0';
				find_solution(k + '0', position + 1, sudoku);
			}
			k++;
		}
	}
			sudoku[i][j] = '.';
}
