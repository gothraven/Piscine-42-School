/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 09:04:11 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		read_it(int fname, t_obst **list, t_map *map)
{
	char		*str;
	int			i;
	int			fd;

	i = 0;
	fd = open_it(fname);
	str = get_next_line(fd);
	map_it(map, str);
	str = get_next_line(fd);
	map->width = strlen(str);
	verify_it(str, map);
	convert_it(list, str, i, map->obst);
	free(str);
	while ((str = get_next_line(fd)))
	{
		verify_it(str, map);
		convert_it(list, str, i, map->obst);
		free(str);
		i++;
	}
	close_it(fd);
}
