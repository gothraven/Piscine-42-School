/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:11:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 18:49:08 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		firstcases(int *iscol, int ligne, int col)
{
	if (iscol[0])
		return (show_result(COLLE0, ligne, col));
	else if (iscol[1])
		return (show_result(COLLE1, ligne, col));
	else
		return (multicases(iscol, ligne, col));
}

int		multicases(int *iscol, int ligne, int col)
{
	if (iscol[2] && iscol[3] && iscol[4])
	{
		show_result(COLLE2, ligne, col);
		ft_putstr(" || ");
		show_result(COLLE3, ligne, col);
		ft_putstr(" || ");
		return (show_result(COLLE4, ligne, col));
	}
	else if (iscol[2] && iscol[4])
	{
		show_result(COLLE2, ligne, col);
		ft_putstr(" || ");
		return (show_result(COLLE4, ligne, col));
	}
	else if (iscol[3] && iscol[4])
	{
		show_result(COLLE3, ligne, col);
		ft_putstr(" || ");
		return (show_result(COLLE4, ligne, col));
	}
	else
		return (lastcases(iscol, ligne, col));
}

int		lastcases(int *iscol, int ligne, int col)
{
	if (iscol[2])
		return (show_result(COLLE2, ligne, col));
	else if (iscol[3])
		return (show_result(COLLE3, ligne, col));
	else if (iscol[4])
		return (show_result(COLLE4, ligne, col));
	else
		return (1);
}
