/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 04:18:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/11 14:01:35 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return ((int)low);
}

int		ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb <= 1)
		return (0);
	sqrt = ft_sqrt(nb);
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
