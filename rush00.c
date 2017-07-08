/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 05:38:48 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/08 06:24:06 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
				if (j == i || j == y - 1 || j == 0)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if (j == 0 || j == y - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
