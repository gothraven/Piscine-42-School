/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:42:04 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/21 23:09:46 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

#define ABS(x) (x < 0 ? -x : x)

void	ft_number(long nb)
{
	if (nb / 10 > 0)
		ft_number(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	ft_number(ABS((long)nb));
	ft_putchar('\n');
}
