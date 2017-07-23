/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:37:25 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:43:05 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

char	*ft_init(char *str)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[index] = str[i];
			index++;
		}
		i++;
	}
	str[index] = '\0';
	return (str);
}
