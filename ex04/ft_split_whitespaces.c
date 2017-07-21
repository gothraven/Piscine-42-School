/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:44:28 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/18 01:04:36 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1024

char	**ft_split_words(int *i, int *j, int *k, char *str)
{
	char **buff;

	buff = malloc(MAX * sizeof(char**));
	buff[*i] = malloc(MAX * sizeof(char*));
	while (str[*k])
	{
		while (str[*k] == ' ' || str[*k] == '\n' || str[*k] == '\t')
			*k = *k + 1;
		if (*k != 0 && (str[*k - 1] == ' '
					|| str[*k - 1] == '\n' || str[*k - 1] == '\t'))
		{
			buff[*i][*j] = '\0';
			*i = *i + 1;
			buff[*i] = malloc(MAX * sizeof(char*));
			*j = 0;
		}
		buff[*i][*j] = str[*k];
		*j = *j + 1;
		*k = *k + 1;
	}
	buff[*i + 1] = 0;
	return (buff);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**buff;

	i = 0;
	j = 0;
	k = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	buff = ft_split_words(&i, &j, &k, str);
	k = 0;
	while (str[k])
		k++;
	if (str[k - 1] == ' ' || str[k - 1] == '\n' || str[k - 1] == '\t')
	{
		buff[i] = 0;
		return (buff);
	}
	else
		return (buff);
}
