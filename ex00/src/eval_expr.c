/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 22:59:14 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 20:58:43 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

char		*g_formula;

int			ft_digits(void)
{
	int result;

	result = 0;
	while (*g_formula >= '0' && *g_formula <= '9')
	{
		result = (result * 10) + (*g_formula - '0');
		++g_formula;
	}
	return (result);
}

int			ft_number(void)
{
	int number;

	if (*g_formula >= '0' && *g_formula <= '9')
	{
		number = ft_digits();
		return (number);
	}
	else if (*g_formula == '(')
	{
		++g_formula;
		number = ft_level1();
		++g_formula;
		return (number);
	}
	write(1, ERROR, ft_strlen(ERROR));
	return (0);
}

int			level2(void)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = ft_number();
	op = *g_formula;
	while (op == '*' || op == '/' || op == '%')
	{
		g_formula++;
		nbr2 = ft_number();
		if (op == '*')
			nbr1 = nbr1 * nbr2;
		else if (op == '/')
			nbr1 = nbr1 / nbr2;
		else if (op == '%')
			nbr1 = nbr1 % nbr2;
		op = *g_formula;
	}
	return (nbr1);
}

int			ft_level1(void)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = level2();
	op = *g_formula;
	while (op == '+' || op == '-')
	{
		++g_formula;
		nbr2 = level2();
		if (op == '+')
			nbr1 = nbr1 + nbr2;
		else if (op == '-')
			nbr1 = nbr1 - nbr2;
		op = *g_formula;
	}
	return (nbr1);
}

int			eval_expr(char *str)
{
	g_formula = ft_init(str);
	return (ft_level1());
}
