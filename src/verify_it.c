/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 09:26:26 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/25 09:34:16 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		verify_it(char *str, t_map *map)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == map->empty || str[i] == map->obst))
		i++;
	if (i == map->width)
		return (0);
	return (1);
}
