/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:06:21 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 15:41:53 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		ft_keyword(char *str, char *keyword)
{
	int i;
	int j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	j = 0;
	while (((keyword[j] == str[i]) || ((keyword[j] - 32) == str[i]))
			&& keyword[j] && str[i] > 32)
	{
		i++;
		j++;
	}
	if (!keyword[j])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		if (!str[i])
			return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_keyword(argv[i], "president")
				|| ft_keyword(argv[i], "attack")
				|| ft_keyword(argv[i], "powers"))
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
