/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:50:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/13 05:48:35 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 8

void	ft_putchar(char c);

void	show_possibility(int queens[SIZE])
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		ft_putchar((queens[i] + 1) + '0');
		i++;
	}
	ft_putchar('\n');
}

int		ispossible(int queens[SIZE], int line)
{
	int i;

	i = 0;
	while (i < line)
	{
		if (queens[line] == queens[i])
			return (0);
		if (queens[line] + i == queens[i] + line)
			return (0);
		if (queens[line] - i == queens[i] - line)
			return (0);
		i++;
	}
	return (1);
}

void	eight_queens_possibilities(int queens[8], int line)
{
	int col;

	if (line == SIZE)
	{
		show_possibility(queens);
	}
	else
	{
		col = 0;
		while (col < SIZE)
		{
			queens[line] = col;
			if (ispossible(queens, line))
			{
				eight_queens_possibilities(queens, line + 1);
			}
			col++;
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens[SIZE];

	eight_queens_possibilities(queens, 0);
}
