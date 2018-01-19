/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:25:54 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 18:32:55 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		rush(char *buffer, int size)
{
	int iscol[5];
	int ligne;
	int col;

	dimensions(buffer, size, &ligne, &col);
	buffer = no_newline(buffer);
	iscol[0] = is_colle00(buffer, ligne, col);
	iscol[1] = is_colle01(buffer, ligne, col);
	iscol[2] = is_colle02(buffer, ligne, col);
	iscol[3] = is_colle03(buffer, ligne, col);
	iscol[4] = is_colle04(buffer, ligne, col);
	return (firstcases(iscol, ligne, col));
}
