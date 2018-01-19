/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:40:38 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:13:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_colle00(char *buff, int lignes, int col)
{
	char *shape;

	shape = colle00(lignes, col);
	if (ft_strcmp(shape, buff))
	{
		free(shape);
		return (0);
	}
	free(shape);
	return (1);
}

char	*colle00(int x, int y)
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
		ligne00(shape, i, x, y);
		i++;
	}
	shape[x * y] = '\0';
	return (shape);
}

void	ligne00(char *shape, int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (i == 0 || i == x - 1)
		{
			if (j == 0 || j == y - 1)
				shape[i * y + j] = 'o';
			else
				shape[i * y + j] = '-';
		}
		else
		{
			if (j == 0 || j == y - 1)
				shape[i * y + j] = '|';
			else
				shape[i * y + j] = ' ';
		}
		j++;
	}
}
