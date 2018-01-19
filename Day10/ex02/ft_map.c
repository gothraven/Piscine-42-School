/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 23:33:18 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/20 21:39:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *buffer;
	int i;

	i = 0;
	if (!length)
		return (NULL);
	buffer = malloc(length * sizeof(int));
	while (i < length)
	{
		buffer[i] = f(tab[i]);
		i++;
	}
	return (buffer);
}
