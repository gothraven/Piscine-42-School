/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:21:41 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 09:56:27 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		open_it(char *fname)
{
	int fd;

	if ((fd =open(fname, O_RDONLY) == -1))
		printf("Error: open (%s)\n", fname);
	return (fd);
}

int		close_it(int fd)
{
	if (close(fd) == -1)
		return (0);
	else
		return (1);
}
