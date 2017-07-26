/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:43:48 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 06:33:57 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		show_bis(int j, char *str, t_map *m, int i)
{
	str[j] = '\n';
	str[j + 1] = '\0';
	write(1, str, m->width + 1);
	return (i + 1);
}

char	norm(t_map *m, int *pos)
{
	*pos = *pos + 1;
	return (m->obst);
}

int		show_it(t_square *s, int *tab, t_map *m)
{
	int		i;
	int		j;
	char	*str;
	int		pos;

	pos = 0;
	str = malloc(sizeof(char) * (m->width + 2));
	i = 0;
	while (i < m->height)
	{
		j = 0;
		while (j < m->width)
		{
			if (tab[pos] % m->width == j && tab[pos] / m->width == i)
				str[j] = norm(m, &pos);
			else if ((i > s->y - s->size && i <= s->y) &&
					(j > s->x - s->size && j <= s->x))
				str[j] = m->full;
			else
				str[j] = m->empty;
			j++;
		}
		i = show_bis(j, str, m, i);
	}
	return (1);
}
