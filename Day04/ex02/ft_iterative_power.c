/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:04:12 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/08 00:49:16 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	if (power < 0)
		return (0);
	result = 1;
	i = -1;
	while (++i < power)
	{
		result *= nb;
	}
	return (result);
}
