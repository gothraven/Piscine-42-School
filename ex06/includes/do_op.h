/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 04:47:17 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/20 00:38:07 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

# define DIV0 "Stop : division by zero\n"
# define MOD0 "Stop : modulo by zero \n"
# define ISOP(x) (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')
# define OPS "+-*/%"

typedef int		(*t_fun)(int, int);

char	*ft_strdup(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_mul(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_err(char *op, int b);

#endif
