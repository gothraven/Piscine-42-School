/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:40:01 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:13:37 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_colle02(char *buff, int lignes, int col)
{
	char *shape;

	shape = colle02(lignes, col);
	if (ft_strcmp(shape, buff))
	{
		free(shape);
		return (0);
	}
	free(shape);
	return (1);
}

char	*colle02(int x, int y)
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
		ligne02(shape, i, x, y);
		i++;
	}
	shape[x * y] = '\0';
	return (shape);
}

void	ligne02(char *buff, int i, int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (j == 0 || j == y - 1)
		{
			if (i == 0)
				buff[i * y + j] = 'A';
			else if (i == x - 1)
				buff[i * y + j] = 'C';
			else
				buff[i * y + j] = 'B';
		}
		else
		{
			if (i == 0 || i == x - 1)
				buff[i * y + j] = 'B';
			else
				buff[i * y + j] = ' ';
		}
		j++;
	}
}
