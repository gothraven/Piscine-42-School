/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:11:11 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:11:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	*buffer;
	int		size;

	buffer = malloc(BUFF_SIZE * sizeof(char*));
	if (buffer == NULL)
		return (0);
	size = read(0, buffer, BUFF_SIZE);
	buffer[size] = '\0';
	if (size <= 1)
		ft_putstr("aucune");
	else if (rush(buffer, size))
		ft_putstr("aucune");
	free(buffer);
	ft_putchar('\n');
	return (0);
}
