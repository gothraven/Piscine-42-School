/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:40:10 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:13:48 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_colle03(char *buff, int lignes, int col)
{
	char *shape;

	shape = colle03(lignes, col);
	if (ft_strcmp(shape, buff))
	{
		free(shape);
		return (0);
	}
	free(shape);
	return (1);
}

char	*colle03(int x, int y)
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
		ligne03(shape, i, x, y);
		i++;
	}
	shape[x * y] = '\0';
	return (shape);
}

void	ligne03(char *buff, int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (i == 0 || i == x - 1)
		{
			if (j == 0)
				buff[i * y + j] = 'A';
			else if (j == y - 1)
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
