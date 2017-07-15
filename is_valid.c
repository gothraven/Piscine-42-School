/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:07:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 20:37:44 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
