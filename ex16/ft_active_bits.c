/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:01:05 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 15:11:35 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = 0;
	while (i < 32)
	{
		if ((value & 1) == 1)
			result++;
		value = value >> 1;
		i++;
	}
	return (result);
}
