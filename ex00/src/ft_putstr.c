/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:42:48 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 17:44:24 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

char	*no_newline(char *str)
{
	int i;
	int index;

	index = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '\n')
		{
			str[index] = str[i];
			index++;
		}
		i++;
	}
	str[index] = '\0';
	return (str);
}
