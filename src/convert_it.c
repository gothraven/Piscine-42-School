/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 09:26:25 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_obst		*ft_create_elem(int x, int y)
{
	t_obst	*node;

	node = (t_obst*)malloc(sizeof(t_obst*));
	node->x = x;
	node->y = y;
	node->next = NULL;
	return (node);
}

void		push_in(t_obst **list, int x, int y)
{
	t_obst	*tmp;

	if (!*list)
	{
		tmp = ft_create_elem(x, y);
		list = &tmp;
	}
	 else
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(x, y);
	}
}

void		convert_it(t_obst **list, char *str, int x, char obst)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == obst)
			push_in(list, x, str[i]);
		i++;
	}
}
