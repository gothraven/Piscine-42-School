/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:43:48 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/25 23:36:52 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		show_it(t_square *s, t_obst *l, t_map *m)
{
	int		i;
	int		j;
	char	*str;

	printf("x=%d y= %d  size=%d\n",s->x,s->y , s->size);
	str = malloc(sizeof(char) * (m->width + 2));
	i = 0;
	while (i < m->height)
	{
		j = 0;
		while (j < m->width)
		{
			if (l->x == j && l->y == i)
			{
				str[j] = m->obst;
				l = l->next;
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
