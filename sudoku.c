/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:50:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 18:07:04 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"
#include "sudoku.h"

int		main(int argc, char *argv[])
{
	char **sudoku;

	if (argc == 10)
	{
		argv = copy_array(argv);
		if (is_sudoku(argv) && is_valid(argv))
		{
			sudoku = create_copy(argv);
			if (find_solution(0, argv) && find_solution_reverse(81, sudoku))
			{
				if (is_same_solution(sudoku, argv))
					print_sudoku(argv);
				else
					ft_putstr("Error\n");
			}
			else
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
