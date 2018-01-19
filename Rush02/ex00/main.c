/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:11:11 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 22:47:30 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(void)
{
	char	*buffer;
	int		size;
	char	*tmp;

	if (!(tmp = (char*)malloc((TMPSIZE + 1) * sizeof(char))))
		return (0);
	if (!(buffer = (char*)malloc(BUFFSIZE * sizeof(char))))
		return (0);
	while ((size = read(0, tmp, TMPSIZE)))
	{
		tmp[size] = '\0';
		buffer = ft_strcat(buffer, tmp);
	}
	size = ft_strlen(buffer);
	if (size <= 1)
		ft_putstr("aucune");
	else if (rush(buffer, size))
		ft_putstr("aucune");
	free(buffer);
	ft_putchar('\n');
	return (0);
}
