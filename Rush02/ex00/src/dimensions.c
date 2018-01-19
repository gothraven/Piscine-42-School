/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimensions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 13:49:58 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 18:49:42 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	dimensions(char *buff, int size, int *l, int *c)
{
	int i;
	int col;
	int ligne;

	i = -1;
	col = 0;
	while (buff[++i] != '\n')
		col++;
	ligne = 0;
	i = -1;
	while (++i < size)
		if (buff[i] == '\n')
			ligne++;
	*l = ligne;
	*c = col;
}

int		show_result(char *str, int ligne, int col)
{
	ft_putstr(str);
	ft_putstr(" [");
	ft_putnbr(ligne);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("]");
	return (0);
}
