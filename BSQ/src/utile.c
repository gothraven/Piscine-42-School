/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyahyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 18:37:22 by anyahyao          #+#    #+#             */
/*   Updated: 2017/07/26 20:02:41 by anyahyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		return (c);
	}
	else if (c < b)
		return (c);
	return (b);
}

int		ft_swap(int **a, int **b, int c)
{
	int *swp;

	swp = *a;
	*a = *b;
	*b = swp;
	return (c + 1);
}
