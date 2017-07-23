/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:11:11 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 19:28:10 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	*buffer;
	int		size;

	buffer = (char*)malloc(BUFFSIZE * sizeof(char*));
	if (buffer == NULL)
		return (0);
	size = read(0, buffer, BUFFSIZE);
	buffer[size] = '\0';
	if (size <= 1)
		ft_putstr("aucune");
	else if (rush(buffer, size))
		ft_putstr("aucune");
	free(buffer);
	ft_putchar('\n');
	return (0);
}
