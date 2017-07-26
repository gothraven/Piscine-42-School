/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 15:28:57 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			convert_it(int *obst, char *str, int y, t_map *map)
{
	int			i;
	static int	pos = 0;

	i = 0;
	if (!y)
		pos = 0;
	while (str[i])
	{
		if (str[i] == map->obst)
		{
			obst[pos] = y * map->width + i;
			pos++;
		}
		i++;
	}
	return (pos);
}
