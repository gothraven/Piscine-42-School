/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 00:06:21 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 07:32:29 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

/*
int		is_square(t_obst **obst, int i, int j, int size);

t_square	*bsq(t_obst **obst, int height, int width)
{
	int i;
	int j;
	t_square *s;

	s = (t_square*)malloc(sizeof(t_square*));
	i = 0;
	s->size = 0;
	while (i + s->size < width)
	{
		j = 0;
		while (j + s->size < height)
		{
			if (is_square(obst, i, j, s->size))
			{
				s->x = i;
				s->y = j;
				s->size++;
				j--;
			}
			j++;
		}
		i++;
	}
	return (s);
}


int		is_square(t_obst **obst, int i, int j, int size)
{
	int k;

	k = 0;
	while (obst[k] != NULL)
	{
		if (obst[k]->x <= j + size || obst[k]->y <= i + size)
			return (0);
		k++;
	}
	return (1);
}
*/
