/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 06:24:58 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_it(char *fname, int **obst, t_map *map)
{
	char		*str;
	int			i;
	int			fd;
	int			pos;
	int			*obstt;

	fd = open_it(fname);
	str = get_next_line(fd);
	map_it(map, str);
	str = get_next_line(fd);
	map->width = strlen(str);
	obstt = (int *)malloc((map->width * map->height) * sizeof(int*));
	convert_it(obstt, str, 0, map);
	free(str);
	i = 1;
	while ((str = get_next_line(fd)) && i < map->height - 1)
	{
		pos = convert_it(obstt, str, i, map);
		free(str);
		i++;
	}
	obstt[pos] = -1;
	*obst = obstt;
	return (close_it(fd));
}
