/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:07:46 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 09:11:30 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		solve_it(char *fname)
{
	int			**obst;
	t_map		*map;
	t_square	*square;
	int			*t1;
	int			*t2;

	obst = (int**)malloc(sizeof(int*));
	*obst = NULL;
	map = (t_map*)malloc(sizeof(t_map*));
	if (!read_it(open_it(fname), obst, map))
		return (0);
	t1 = (int*)malloc(map->width * sizeof(int));
	t2 = (int*)malloc(map->width * sizeof(int));
	square = (t_square*)malloc(sizeof(t_square*));
	square->x = map->width;
	square->y = map->height;
	if (find_it(*obst, t1, t2, square))
		return (show_it(square, *obst, map));
	else
		return (0);
}
