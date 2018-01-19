/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:51:10 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/22 01:55:05 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(char *str, int opt)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] < 32 || str[i] == 127)
			return (0);
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i] && opt == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		pos(char c, char *str, int pui, int opt)
{
	int i;
	int j;

	if (opt == 0)
	{
		i = 0;
		while (c != str[i] && str[i])
			i++;
		if (!str[i])
			return (-1);
		else
			return (i);
	}
	else
	{
		if (pui == 0)
			return (1);
		i = ft_size(str, 1);
		j = 1;
		pui++;
		while (--pui > 0)
			j *= i;
		return (j);
	}
}

char	*ft_rev(int nb, char *b2, char *res, int i)
{
	if (i == -1)
		return (res);
	res[i] = b2[nb % ft_size(b2, 1)];
	return (ft_rev((nb / ft_size(b2, 1)), b2, res, i - 1));
}

int		ft_conv(char *str, char *b1, int i)
{
	if (i < ft_size(str, 1))
		return (pos(str[i], b1, 0, 0) * pos('c', b1, ft_size(str, 1) - 1 - i, 2)
				+ ft_conv(str, b1, i + 1));
	else
		return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		nb;
	int		i;

	i = 0;
	if (!(ft_size(base_from, 0) > 1 || ft_size(base_to, 0) > 1))
		return (0);
	nb = ft_conv(nbr, base_from, 0);
	res = malloc(128);
	if (nb == 0)
		i++;
	while (pos('c', base_to, i, 2) <= nb)
		i++;
	res[i] = '\0';
	ft_rev(nb, base_to, res, i - 1);
	return (res);
}
