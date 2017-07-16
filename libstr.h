/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 15:05:00 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/16 17:36:42 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSTR_H
# define LIBSTR_H

# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	**copy_array(char **str);
char	**create_copy(char **str);

#endif
