/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:15:32 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/11 13:35:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		result;
	int		i;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	i = 0;
	while (++i <= nb)
	{
		result *= i;
	}
	return (result);
}
