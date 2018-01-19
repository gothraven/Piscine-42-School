/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 03:35:23 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/17 19:23:54 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_tohex(int nbr, char *base, int size)
{
	if ((nbr / size > 0))
	{
		ft_tohex(nbr / size, base, size);
	}
	ft_putchar(base[(nbr % size)]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 1 && str[i] <= 31)
		{
			ft_putchar('\\');
			if (str[i] <= 16)
				ft_putchar('0');
			ft_tohex(str[i], "0123456789abcdef", 16);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
