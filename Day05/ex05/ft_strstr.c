/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:13:12 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/17 15:59:40 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (to_find[j] == str[i])
			j++;
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	if (!to_find[j])
		return (&str[i - j]);
	else
		return (0);
}
