/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_it.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:59:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 08:33:07 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	map_it(t_map *map, char *str)
{
	int slen;

	slen = ft_strlen(str);
	map->empty = str[slen - 3];
	map->obst = str[slen - 2];
	map->full = str[slen - 1];
	str[slen - 3] = 'k';
	str[slen - 2] = 'k';
	str[slen - 1] = 'k';
	map->height = ft_atoi(str);
	map->width = 0;
}
