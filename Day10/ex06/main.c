/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 04:35:08 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/22 02:31:31 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_op.h"

t_fun		g_ops[5] = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

int		main(int argc, char *argv[])
{
	int		i;
	char	*ops;

	if (argc == 4)
	{
		if (ft_err(argv[2], ft_atoi(argv[3])))
			return (0);
		i = 0;
		ops = ft_strdup(OPS);
		while (ops[i])
		{
			if (ops[i] == *(argv[2]))
			{
				ft_putnbr(g_ops[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
				return (0);
			}
			i++;
		}
		ft_putnbr(0);
	}
	return (0);
}
