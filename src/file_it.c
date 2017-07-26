/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 08:21:41 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 10:35:03 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		open_it(char *fname)
{
	if (!ft_strcmp(fname, "stdin"))
		return (0);
	return (open(fname, O_RDONLY));
}

int		close_it(int fd)
{
	if (close(fd) == -1)
		return (0);
	else
		return (1);
}
