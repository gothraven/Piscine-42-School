/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:18:39 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 22:20:48 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_it(int fd, int **obst, t_map *map)
{
	char		*str;
	int			i;
	int			pos;
	int			*obstt;
	int			status;

	status = 1;
	str = get_next_line(fd);
	map_it(map, str);
	str = get_next_line(fd);
	map->width = ft_strlen(str);
	obstt = (int *)malloc((map->width * map->height) * sizeof(int*));
	if (!verify_it(str, map) || !obstt)
		status = 0;
	convert_it(obstt, str, 0, map);
	i = 0;
	while ((str = get_next_line(fd)) && ++i < map->height)
	{
		status *= verify_it(str, map);
		pos = convert_it(obstt, str, i, map);
	}
	status *= fit_it(fd, str, i, map);
	read_norme(fd, pos, obst, obstt);
	return (status);
}

int			fit_it(int fd, char *str, int i, t_map *map)
{
	if (str || (i + 1) != map->height)
	{
		while ((str = get_next_line(fd)))
			;
		return (0);
	}
	return (1);
}

void		read_norme(int fd, int pos, int **obst, int *obstt)
{
	obstt[pos] = -1;
	*obst = obstt;
	close_it(fd);
}
