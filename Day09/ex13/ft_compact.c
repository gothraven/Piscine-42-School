/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:06:40 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 16:24:54 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int index;
	int i;

	i = 0;
	index = 0;
	while (i < length)
	{
		if (tab[i])
		{
			tab[index] = tab[i];
			index++;
		}
		i++;
	}
	tab[index] = 0;
	return (index);
}
