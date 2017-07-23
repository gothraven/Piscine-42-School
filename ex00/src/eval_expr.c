/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 22:59:14 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 02:27:19 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

char	*ft_init(char *str)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[index] = str[i];
			index++;
		}
		i++;
	}
	str[index] = '\0';
	return (str);
}

int		ft_digits(char *formula)
{
	int result;

	result = 0;
	while (*formula >= '0' && *formula <= '9')
	{
		result = (result *  10) + (*formula - '0');
		formula++;
	}
	return (result);
}

int		ft_number(char *formula)
{
	if (*formula >= '0' && *formula<= '9')
	{
		return ft_digits(str);
	}
	else if (*formula == '(')
	{
		formula++; //ignore '('
		return ft_levelone(str);
	}
}

int		leveltwo(char *formula)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = ft_number(formula);
	op = *formula;
	while (op == '*' || op == '/' || op == '%')
	{
		formula++; //pass the operation
		nbr2 = ft_number(formula);
		if (op == '*')
			nbr1 = nbr1 * nbr2;
		else if (op == '/')
			nbr1 = nbr1 / nbr2;
		else if (op == '%')
			nbr1 = nbr1 % nbr2;
	}
	return (nbr1);
}

int		ft_levelone(char *formula)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = leveltwo(formula);
	op = *formula;
	while (op == '+' || op == '-')
	{
		formula++;
		nbr2 = leveltwo(formula);
		if (op == '+')
			nbr1 = nbr1 + nbr2;
		else if (op == '-')
			nbr1 = nbr1 - nbr2;
	}
	return (nbr1);
}

int		ft_formula(char *formula)
{
	return (ft_levelone(formula));
}

int		eval_expr(char *str)
{
	char	*formula;

	formula = ft_init(str);
	return (ft_formula(formula));
}
