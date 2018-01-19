/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:39:00 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/07 12:52:17 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	swap;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len -= 1;
	swap = 's';
	while (i < len)
	{
		swap = str[len];
		str[len] = str[i];
		str[i] = swap;
		i++;
		len--;
	}
	return (str);
}
