/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:39:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:13:25 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_colle01(char *buff, int lignes, int col)
{
	char *shape;

	shape = colle01(lignes, col);
	if (ft_strcmp(shape, buff))
	{
		free(shape);
		return (0);
	}
	free(shape);
	return (1);
}

char	*colle01(int x, int y)
{
	int		i;
	char	*shape;

	shape = malloc((x * y) * sizeof(shape));
	if (shape == NULL)
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	i = 0;
	while (i < x)
	{
		ligne01(shape, i, x, y);
		i++;
	}
	shape[x * y] = '\0';
	return (shape);
}

void	ligne01(char *buff, int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (i == 0 || i == x - 1)
		{
			if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				buff[i * y + j] = '/';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				buff[i * y + j] = '\\';
			else
				buff[i * y + j] = '*';
		}
		else
		{
			if (j == 0 || j == y - 1)
				buff[i * y + j] = '*';
			else
				buff[i * y + j] = ' ';
		}
		j++;
	}
}
