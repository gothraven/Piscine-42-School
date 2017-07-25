/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 01:53:03 by szaghban         ###   ########.fr       */
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
	/*if (!verify_it(str, map))
		return (0);*/
	convert_it(list, str, i, map->obst);
	free(str);
	i++;
	while ((str = get_next_line(fd)))
	{
		/*if (!verify_it(str, map))
			return (0);*/
		convert_it(list, str, i, map->obst);
		free(str);
		i++;
	}
	push_in(list, -1, -1);
	return (close_it(fd));
}
