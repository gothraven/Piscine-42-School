/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:42:04 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 01:33:03 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

#define ABS(x) (x < 0 ? -x : x)

void	ft_nbr(long nb)
{
	if (nb / 10 > 0)
		ft_nbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	ft_nbr(ABS((long)nb));
}
