/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:57:54 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/17 14:34:17 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nbr, int power)
{
	if (power == 0)
		return (1);
	else
		return (nbr * ft_power(nbr, power - 1));
}

int		find_in_base(char c, char *base, int option)
{
	int i;

	i = 0;
	if (option == 0)
	{
		while (base[i])
		{
			if (base[i] == c)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	else
	{
		while (base[i])
			i++;
		return (i);
	}
}

int		isvalide(char *base)
{
	int		i;
	int		j;
	char	c;

	if (!base[0] || !base[1])
		return (0);
	else
		i = 0;
	while (base[i])
	{
		c = base[i];
		j = i + 1;
		while (base[j])
		{
			if (c == base[j] || (base[j] >= 1 && base[j] <= 47))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_get_number(char *str, char *base, int index)
{
	int result;

	result = 0;
	if (str[index])
	{
		result = (find_in_base(str[index], base, 0) *
				ft_power(find_in_base('c', base, 1),
					find_in_base('c', str, 1) - (index + 1)));
		return (result + ft_get_number(str, base, index - 1));
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int k;

	if (isvalide(base))
	{
		i = 0;
		sign = 1;
		while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r')
				|| (str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f'))
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		k = i - 1;
		while (str[++k])
			if ((find_in_base(str[k], base, 0) == -1))
				return (0);
		return (sign * (ft_get_number(str + i, base,
						(find_in_base('c', str + i, 1)) - 1)));
	}
	return (0);
}
