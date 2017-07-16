/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:04:36 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 17:59:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"
#include "sudoku.h"

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

char	**copy_array(char **str)
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
	str[index] = 0;
	return (str);
}

char	**create_copy(char **argv)
{
	char	**copy;
	int		i;
	int		j;

	i = 0;
	copy = malloc((SIZE + 1) * sizeof(char **));
	while (i < SIZE)
	{
		j = 0;
		copy[i] = malloc((SIZE + 1) * sizeof(char*));
		while (j < SIZE)
		{
			copy[i][j] = argv[i][j];
			j++;
		}
		copy[i][j] = '\0';
		i++;
	}
	copy[i] = 0;
	return (copy);
}
