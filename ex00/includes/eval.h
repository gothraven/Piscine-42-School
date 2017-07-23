/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 23:01:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 04:14:31 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
#define EVAL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // remove it later

# define ERROR "PROBLEM - THAT IS NOT A NUMBER"
//needed functions
int		eval_expr(char *str);
char	*ft_init(char *str);

int		ft_digits(char *str);
int		ft_number(char *str);
int		ft_leveltwo(char *str);
int		ft_levelone(char *str);
int		ft_formula(char *str);

//my lib
int		ft_atoi(char *str);
void	ft_nbr(long nb);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);

#endif
