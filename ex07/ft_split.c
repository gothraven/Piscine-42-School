/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 23:02:16 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/19 20:00:58 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**alloc_buffer(char **table, char *str, char *charset)
{
	int i;
	int n_words;

	i = 0;
	n_words = 0;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		i++;
		if (ft_is_sep(str[i], charset))
		{
			n_words++;
			while (ft_is_sep(str[i], charset))
				i++;
		}
	}
	if (!ft_is_sep(str[i - 1], charset))
		n_words++;
	table = malloc(sizeof(*table) * (n_words + 1));
	table[n_words] = NULL;
	return (table);
}

char	**alloc_words(char **table, char *str, char *charset)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		i++;
		if (ft_is_sep(str[i], charset) || !str[i])
		{
			table[j] = malloc(sizeof(**table) * (k + 1));
			j++;
			k = 0;
			while (ft_is_sep(str[i], charset))
				i++;
		}
		k++;
	}
	return (table);
}

char	**fill_table(char **table, char *str, char *charset)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		table[j][k] = str[i];
		i++;
		k++;
		if (ft_is_sep(str[i], charset) || !str[i])
		{
			table[j][k] = '\0';
			j++;
			k = 0;
			while (ft_is_sep(str[i], charset))
				i++;
		}
	}
	return (table);
}

char	**ft_split(char *str, char *charset)
{
	char**table;

	table = NULL;
	table = alloc_buffer(table, str, charset);
	table = alloc_words(table, str, charset);
	table = fill_table(table, str, charset);
	return (table);
}
