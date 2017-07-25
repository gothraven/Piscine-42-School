/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 00:02:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 02:58:59 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFSIZE 2147483647
# define TMPSIZE 1000

typedef struct	s_square
{
	int			size;
	int			x;
	int			y;
}				t_square;

typedef struct	s_obst
{
	int			x;
	int			y;
}				t_obst;

#endif
