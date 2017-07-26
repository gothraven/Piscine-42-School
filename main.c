/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 05:05:35 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 06:18:46 by szaghban         ###   ########.fr       */
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
				printf("map error\n");
			i++;
		}
	}
	else
	{
		if (solve_it(""))
			printf("map error\n");
	}
	return (0);
}
