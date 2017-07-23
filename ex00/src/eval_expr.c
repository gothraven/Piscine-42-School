/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 22:59:14 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 04:15:31 by szaghban         ###   ########.fr       */
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
	int number;

	if (*formula >= '0' && *formula<= '9')
	{
		number = ft_digits(formula);
		return (number);
	}
	else if (*formula == '(')
	{
		formula++; //ignore '('
		number = ft_levelone(formula);
		printf("%d\n", number);
		formula++; //ignore ')'
		return number;
	}
	write(1, ERROR, ft_strlen(ERROR));
	return (0);
}

int		leveltwo(char *formula)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = ft_number(formula);
	formula++;
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
		formula++;
		op = *formula;
	}
	return (nbr1);
}

int		ft_levelone(char *formula)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = leveltwo(formula);
	formula++;
	op = *formula;
	while (op == '+' || op == '-')
	{
		formula++;
		nbr2 = leveltwo(formula);
		if (op == '+')
			nbr1 = nbr1 + nbr2;
		else if (op == '-')
			nbr1 = nbr1 - nbr2;
		formula++;
		op = *formula;
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
