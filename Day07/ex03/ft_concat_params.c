/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 02:54:59 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/19 20:06:38 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define MAX 1024

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	dest = malloc(MAX * sizeof(char*));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			dest[k++] = argv[i][j++];
		if (i < argc)
			dest[k++] = '\n';
		i++;
	}
	dest[--k] = '\0';
	return (dest);
}
