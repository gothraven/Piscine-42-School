/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:20:40 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/22 03:36:12 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_err(char *op, int b)
{
	if (!(*op && ft_strlen(op) == 1))
	{
		ft_putnbr(0);
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
