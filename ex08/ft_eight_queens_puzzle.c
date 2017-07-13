/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:50:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/12 13:36:36 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 8

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

void	eight_queens_possibilities(int queens[SIZE], int line, int *possibility)
{
	int col;

	if (line == SIZE)
	{
		*possibility = *possibility + 1;
	}
	else
	{
		col = 0;
		while (col < SIZE)
		{
			queens[line] = col;
			if (ispossible(queens, line))
			{
				eight_queens_possibilities(queens, line + 1, possibility);
			}
			col++;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int queens[SIZE];
	int possibility;

	possibility = 0;
	eight_queens_possibilities(queens, 0, &possibility);
	return (possibility);
}
