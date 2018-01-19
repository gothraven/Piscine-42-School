/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 01:34:27 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/19 01:25:33 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		dlen;
	char	*dest;

	dlen = 0;
	while (src[dlen])
		dlen++;
	dest = malloc((dlen + 1) * sizeof(char*));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*stock;
	t_stock_par		*pointer;

	stock = malloc((ac + 2) * sizeof(t_stock_par));
	if (!stock)
		return (NULL);
	pointer = stock;
	i = 0;
	while (i < ac)
	{
		pointer->size_param = ft_strlen(av[i]);
		pointer->str = av[i];
		pointer->copy = ft_strdup(av[i]);
		pointer->tab = ft_split_whitespaces(av[i]);
		pointer++;
		i++;
	}
	pointer->str = NULL;
	return (stock);
}
