/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 16:15:17 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/17 16:46:06 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int word;

	word = 1;
	i = 0;
	while (str[i])
	{
		if (min(str[i]) && word)
			str[i] = str[i] - 32;
		else if (maj(str[i]) && !word)
			str[i] = str[i] + 32;
		if (!alpha(str[i]))
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}
