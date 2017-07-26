/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_it.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:59:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 07:08:32 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	map_it(t_map *map, char *str)
{
	map->height = atoi(str);
	map->width = 0;
	map->empty = str[strlen(str) - 3];
	map->obst = str[strlen(str) - 2];
	map->full = str[strlen(str) - 1];
}
