/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:06:21 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 02:54:46 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>





int		ft_keyword(char *str)
{
	
	return (1);
}



int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_keyword(argv[i]))
			write(1, "Alert!!!\n",9);
		i++;
	}
	return 0;
}
