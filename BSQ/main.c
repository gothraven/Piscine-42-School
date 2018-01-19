/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 05:05:35 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 23:33:22 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			if (!solve_it(argv[i]))
				write(1, ERROR, ft_strlen(ERROR));
			if (i + 1 != argc)
				write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		if (!solve_it("stdin"))
			write(1, ERROR, ft_strlen(ERROR));
	}
	return (0);
}
