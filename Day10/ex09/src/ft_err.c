/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:20:40 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/21 03:13:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_err(char *op, int b)
{
	if (!(*op && ft_strlen(op) == 1))
	{
		ft_usage(1, 1);
		return (1);
	}
	if (ISOP(*op))
	{
		if (!b && *op == '/')
		{
			ft_putstr(DIV0);
			return (1);
		}
		if (!b && *op == '%')
		{
			ft_putstr(MOD0);
			return (1);
		}
	}
	return (0);
}

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr(USAGE);
	return (0);
}
