/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 11:22:57 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 11:24:41 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		free_it(int **obst, t_map *map, t_square *square, int status)
{
	free(*obst);
	free(obst);
	free(map);
	free(square);
	return (status);
}
