/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:40:18 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:13:02 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_colle04(char *buff, int lignes, int col)
{
	char *shape;

	shape = colle04(lignes, col);
	if (ft_strcmp(shape, buff))
	{
		free(shape);
		return (0);
	}
	free(shape);
	return (1);
}

char	*colle04(int x, int y)
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
		ligne04(shape, i, x, y);
		i++;
	}
	shape[x * y] = '\0';
	return (shape);
}

void	ligne04(char *buff, int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (i == 0 || i == x - 1)
		{
			if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				buff[i * y + j] = 'A';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				buff[i * y + j] = 'C';
			else
				buff[i * y + j] = 'B';
		}
		else
		{
			if (j == 0 || j == y - 1)
				buff[i * y + j] = 'B';
			else
				buff[i * y + j] = ' ';
		}
		j++;
	}
}
