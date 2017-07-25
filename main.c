/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 05:05:35 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 07:31:27 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		read_it(char *fname)
{
	int		fd;
	char	*s;

	if ((fd = open(fname, O_RDONLY)) == -1)
		return (-1);
	while ((s = get_next_line(fd)))
	{
		write(1, s, strlen(s));
		write(1, "\n", 1);
		free(s);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}

int		solve_it(char *fname)
{
	read_it(fname);
	return (1);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			if (!solve_it(argv[i]))
				printf("map error\n");
			i++;
		}
	}
	return (0);
}

