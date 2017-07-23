/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 22:59:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:03:23 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	*buffer;
	int		size;

	buffer = malloc(BUFF_SIZE * sizeof(char));
	if (buffer == NULL)
		return (0);
	size = read(0, buffer, BUFF_SIZE);
	buffer[size] = '\0';
	if (size <= 1)
		ft_putstr("aucune");
	else if (rush(buffer, size))
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
