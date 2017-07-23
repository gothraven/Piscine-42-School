/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 23:01:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 20:52:02 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

# include <unistd.h>
# include <stdlib.h>

# define ERROR "PROBLEM - THAT IS NOT A NUMBER"

int		eval_expr(char *str);
char	*ft_init(char *str);
int		ft_digits(void);
int		ft_number(void);
int		ft_level2(void);
int		ft_level1(void);
int		ft_atoi(char *str);
void	ft_nbr(long nb);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);

#endif
