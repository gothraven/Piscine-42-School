/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:07:46 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 01:57:31 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	list_show(t_obst *list);

int		solve_it(char *fname)
{
	t_obst		**list;
	t_map		*map;
	t_square	*square;
	int			*t1;
	int			*t2;

	map = malloc(sizeof(t_map*));
	list = malloc(sizeof(t_obst**));
	*list = NULL;
	read_it(fname, list, map);
	t1 = (int*)malloc(map->width * sizeof(int));
	t2 = (int*)malloc(map->width * sizeof(int));
	square = (t_square*)malloc(sizeof(t_square));
	square->x = map->width;
	square->y = map->height;
	if (find_it(list,t1, t2, square))
		return show_it(square, *list, map);
	else
		return (0);
}
