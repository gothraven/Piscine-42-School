/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 09:15:39 by vlay              #+#    #+#             */
/*   Updated: 2017/07/08 10:39:40 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y){
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0 || i == x - 1)
			{
				if (j == i)
					ft_putchar('A');
				else if (j == y - 1 || j == 0)
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
		ft_putchar('\n');
		i++;
	}
}

int	main()
{
	rush(5, 5);
	return (0);
}
