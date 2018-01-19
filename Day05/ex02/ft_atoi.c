/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:16:53 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/07 12:56:55 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	sign = 0;
	i = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += ((int)str[i] - '0');
		i++;
	}
	if (sign)
		return (-result);
	else
		return (result);
}
