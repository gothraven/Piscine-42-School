/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 23:01:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/21 23:11:39 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
#define EVAL_H

# include <unistd.h>
# include <stdlib.h>

int		eval_expr(char *str);
int		ft_atoi(char *str);
void	ft_number(long nb);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);

#endif
