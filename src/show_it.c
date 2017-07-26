/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:43:48 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 04:21:19 by anyahyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		show_it(t_square *s, int *tab, t_map *m)
{
	int		i;
	int		j;
	char	*str;
	int pos;


	pos = 0;
	printf("x=%d y= %d  size=%d\n",s->x,s->y , s->size);
	str = malloc(sizeof(char) * (m->width + 2));
	i = 0;
	while (i < m->height)
	{
		j = 0;
		while (j < m->width)
		{
			if ( tab[pos] % m->width == j && tab[pos] / m->width == i)
			{
				str[j] = m->obst;
				pos ++;
			}
			else if ((i > s->y - s->size && i <= s-> y) &&
					(j > s->x - s->size && j <= s->x))
				str[j] = m->full;
			else
				str[j] = m->empty;
			j++;
		}
		str[j] = '\n';
		str[j + 1] = '\0';
		write(1, str, m->width + 1);
		i++;
	}
	return (1);
}
