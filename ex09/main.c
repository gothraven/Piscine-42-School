/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 04:35:08 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/21 03:09:32 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_op.h"
#include "ft_opp.h"

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 4)
	{
		if (ft_err(argv[2], ft_atoi(argv[3])))
			return (0);
		i = 0;
		while (i < 5)
		{
			if (ft_strcmp(g_opptab[i].sign, (argv[2])) == 0)
			{
				ft_putnbr(g_opptab[i].op(ft_atoi(argv[1]), ft_atoi(argv[3])));
				return (0);
			}
			i++;
		}
		g_opptab[5].op(ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	return (0);
}
