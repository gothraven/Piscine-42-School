/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:35:58 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 14:30:02 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);

void	ft_putchar(char c);

void	ft_number(int i, int j, int k)
{
	char n1;
	char n2;
	char n3;

	n1 = i + '0';
	n2 = j + '0';
	n3 = k + '0';
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (i != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_number(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
