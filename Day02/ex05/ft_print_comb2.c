/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:15:42 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 16:29:59 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void);

void	ft_putchar(char c);

void	ft_number(int i, int j)
{
	char nb1;
	char nb2;
	char nb3;
	char nb4;

	nb1 = i / 10 + '0';
	nb2 = i % 10 + '0';
	nb3 = j / 10 + '0';
	nb4 = j % 10 + '0';
	ft_putchar(nb1);
	ft_putchar(nb2);
	ft_putchar(' ');
	ft_putchar(nb3);
	ft_putchar(nb4);
	if (i * 100 + j != 9899)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_number(i, j);
			j++;
		}
		i++;
	}
}
