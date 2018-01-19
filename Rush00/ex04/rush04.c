/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 05:38:48 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/09 21:38:21 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne(int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (i == 0 || i == x - 1)
		{
			if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('A');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		else
		{
			if (j == 0 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		j++;
	}
}

void	rush(int x, int y)
{
	int i;

	if (x < 0 || y < 0)
		return ;
	i = 0;
	while (i < x)
	{
		ligne(i, x, y);
		ft_putchar('\n');
		i++;
	}
}
