/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 09:57:31 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_it(int fd, int **obst, t_map *map)
{
	char		*str;
	int			i;
	int			pos;
	int			*obstt;

	str = get_next_line(fd);
	map_it(map, str);
	str = get_next_line(fd);
	map->width = ft_strlen(str);
	obstt = (int *)malloc((map->width * map->height) * sizeof(int*));
	if (!verify_it(str, map))
		return (0);
	convert_it(obstt, str, 0, map);
	i = 1;
	while ((str = get_next_line(fd)) && i < map->height)
	{
		if (!verify_it(str, map))
			return (0);
		pos = convert_it(obstt, str, i, map);
		free(str);
		i++;
	}
	obstt[pos] = -1;
	*obst = obstt;
	return (close_it(fd));
}
