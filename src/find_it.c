/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:42 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 02:44:37 by anyahyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		return (c);
	}
	else if (c < b)
		return (c);
	return (b);
}

int		ft_find_bis(int *tab, int *t1, int *t2, t_square *res)
{
	int		j;
	int		h;
	int		i;
	int		k;
	int		pos;
	int		*swp;

	i = 1;
	h = res->y;
	k = res->x;
	res->size = 0;
	res->x = 0;
	res->y = 0;
	pos = 0;
	while (i < h)
	{
		j = 1;
		t2[0] = 1;
		if (tab[pos] % k == 0 && tab[pos] / k == i)
		{
			t2[0] = 0;
			pos++;
		}
		while (j < k)
		{
			if (tab[pos] % k == j && tab[pos] / k == i)
			{
				t2[j] = 0;
				pos++;
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
