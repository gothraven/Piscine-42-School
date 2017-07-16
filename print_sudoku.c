/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 17:46:25 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 16:02:35 by szaghban         ###   ########.fr       */
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
			if (j != 9)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
