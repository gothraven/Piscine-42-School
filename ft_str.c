/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:04:36 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/15 15:25:53 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    **copy_array(char **str)
{
	int i;
	int index;

	i = 1;
	index = 0;
	while (str[i])
	{
		str[index] = str[i];
		i++;
		index++;
	}
	return str;
}
