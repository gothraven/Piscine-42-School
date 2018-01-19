/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:46:25 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 23:10:12 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"
#include "sudoku.h"

void	print_sudoku(char **sudoku)
{
	int i;
	int j;

	i = 0;
	while (sudoku[i])
	{
		j = 0;
		while (sudoku[i][j])
		{
			ft_putchar(sudoku[i][j]);
			if (j < SIZE - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		free_sudoku(char **sudoku)
{
	int i;

	i = 0;
	while (sudoku[i])
	{
		free(sudoku[i]);
		i++;
	}
	free(sudoku);
	return (0);
}
