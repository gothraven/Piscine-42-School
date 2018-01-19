/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 02:23:14 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/08 04:03:04 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	long high;
	long low;
	long mid;

	low = 0;
	high = nb + 1;
	while (high - low > 1)
	{
		mid = (low + high) / 2;
		if (mid * mid == nb)
			return ((int)mid);
		else if (mid * mid < nb)
			low = mid;
		else
			high = mid;
	}
	return (0);
}
