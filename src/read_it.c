/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 02:23:24 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_it(char *fname, int **obst, t_map *map)
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
	*obst = (int *)malloc((map->width * map->height) * sizeof(int));
	convert_it(obst, str, i, map);
	free(str);
	i++;
	while ((str = get_next_line(fd)))
	{
		convert_it(obst, str, i, map);
		free(str);
		i++;
	}
	return (close_it(fd));
}
