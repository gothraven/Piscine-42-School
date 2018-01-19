/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:45:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/13 19:32:44 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < nb)
	{
		if (!src[j])
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[j];
		}
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
