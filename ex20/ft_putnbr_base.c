/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:02:08 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/17 19:15:13 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		isvalide(char *base)
{
	int		i;
	int		j;
	char	c;

	if (!base[0] || !base[1])
		return (0);
	else
	{
		i = 0;
		while (base[i])
		{
			c = base[i];
			j = i + 1;
			while (base[j])
			{
				if (c == base[j] || (base[j] >= 1 && base[j] <= 47))
					return (0);
				j++;
			}
			i++;
		}
	}
	return (1);
}

void	ft_print_number(int nbr, char *base, int size)
{
	if ((nbr / size) > 0)
		ft_print_number(nbr / size, base, size);
	ft_putchar(base[(nbr % size)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (isvalide(base))
	{
		ft_print_number(nbr, base, ft_strlen(base));
		ft_putchar('\n');
	}
}
