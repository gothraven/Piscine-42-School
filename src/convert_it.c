/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 07:40:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 02:23:00 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		convert_it(int **obst, char *str, int x, t_map *map)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == map->obst)
		{
			//something here
		}
		i++;
	}
}
