/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:42 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 00:10:54 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		return (c);
	}
	else if (c < b)
		return (c);
	return (b);
}

t_square	*ft_find_bis(t_obst **list, int *t1, int *t2, t_square *res)
{
	int		j;
	int		h;
	int		i;
	int		k;
	int		*swp;
	t_obst	*l;

	l = *list;
	i = 1;
	h = res->y;
	k = res->x;
	res->size = 0;
	res->x = 0;
	res->y = 0;
	while (i < h)
	{
		j = 1;
		t2[0] = 1;
		if (l->x == 0 && l->y == i)
		{
			t2[0] = 0;
			l = l->next;
		}
		while (j < k)
		{
			if (l->x == j && l->y == i)
			{
				t2[j] = 0;
				l = l->next;
			}
			else
				t2[j] = min(t2[j - 1], t1[j], t1[j - 1]) + 1;
			if (t2[j] > res->size)
			{
				res->x = j;
				res->y = i;
				res->size = t2[j];
			}
			swp = t1;
			t1 = t2;
			t2 = swp;
			j++;
		}
		i++;
	}
	return (res);
}

int			find_it(t_obst **l, int *t1, int *t2, t_square *res)
{
	int		i;
	int		j;
	t_obst	*list;

	write (1,"gox\n",4);// test
	list = *l;
	i = 1;
	j = -1;
	while (++j < res->x)
		t1[j] = 1;

	while (list->y == 0 && list->next)
	{
		t1[list->x] = 0;
		list = list->next;
	}
	ft_find_bis(&list, t1, t2, res);
	return (res->size);
}
