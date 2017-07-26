/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:42 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 22:37:56 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		norme1(int *pos)
{
	*pos = *pos + 1;
	return (0);
}

int		norme2(int j, int *t2, t_square *res, int i)
{
	if (t2[j] > res->size)
	{
		res->x = j;
		res->y = i;
		res->size = t2[j];
	}
	return (j + 1);
}

int		norme3(t_square *res, int *t1, int *h)
{
	int pos;
	int k;

	k = res->x;
	*h = res->y;
	pos = 0;
	while (pos < k && t1[pos] == 0)
		pos++;
	if (pos == k)
		res->size = 0;
	else
	{
		res->x = pos;
		res->size = 1;
	}
	res->y = 0;
	return (k);
}

int		ft_find_bis(int *tab, int *t1, int *t2, t_square *res)
{
	int		h;
	int		k;
	int		pos;
	int		v[2];

	v[0] = 1;
	k = norme3(res, t1, &h);
	pos = 0;
	while (v[0] < h)
	{
		v[1] = 1;
		t2[0] = 1;
		if (tab[pos] % k == 0 && tab[pos] / k == v[0])
			t2[v[1]] = norme1(&pos);
		while (v[1] < k)
		{
			if (tab[pos] % k == v[1] && tab[pos] / k == v[0])
				t2[0] = norme1(&pos);
			else
				t2[v[1]] = min(t2[v[1] - 1], t1[v[1]], t1[v[1] - 1]) + 1;
			v[1] = norme2(v[1], t2, res, v[0]);
		}
		v[0] = ft_swap(&t1, &t2, v[0]);
	}
	return (res->size);
}

int		find_it(int *tab, int *t1, int *t2, t_square *res)
{
	int		i;
	int		j;
	int		pos;

	i = 1;
	j = -1;
	pos = 0;
	res->size = 0;
	while (++j < res->x)
	{
		if (tab[pos] == j)
		{
			t1[j] = 0;
			pos++;
		}
		else
			t1[j] = 1;
	}
	ft_find_bis(&tab[pos], t1, t2, res);
	return (res->size);
}
