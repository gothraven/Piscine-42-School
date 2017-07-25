/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:07:46 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 09:20:23 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		solve_it(char *fname)
{
	t_list		*list;
	t_map		*map;
	t_square	*square;
	int			*t1;
	int			*t2;

	read_it(fname, &list, map);
	t1 = (int*)malloc(map->width * sizeof(int));
	t2 = (int*)malloc(map->width * sizeof(int));
	square = (int*)malloc(sizeof(t_square));
	square->x = map->width;
	square->y = map->hieght;
	if (find_it(&list,t1, t2, square))
		return show_it(square, list, map);
	else
		return (0);
}
