/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:01:01 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 01:52:19 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		else
			return (1 + ft_collatz_conjecture((3 * base) + 1));
	}
	else
		return (0);
}
