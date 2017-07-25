/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 10:32:40 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_it(char *fname, t_obst **list, t_map *map)
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
	if (!verify_it(str, map))
		return (0);
	convert_it(list, str, i, map->obst);
	free(str);
	while ((str = get_next_line(fd)))
	{
		if (!verify_it(str, map))
			return (0);
		convert_it(list, str, i, map->obst);
		free(str);
		i++;
	}
	return (close_it(fd));
}
