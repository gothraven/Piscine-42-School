/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:05:00 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 16:03:57 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTR_H
# define LIBSTR_H

# include <unistd.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	**copy_array(char **str);

#endif
