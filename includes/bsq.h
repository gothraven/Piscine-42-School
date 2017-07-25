/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 00:02:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/25 09:04:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define MEM_SIZE 4096

typedef struct	s_square
{
	int			size;
	int			x;
	int			y;
}				t_square;

typedef struct	s_obst
{
	struct s_obst		*next;
	int					x;
	int					y;
}						t_obst;

typedef struct		s_map
{
	int		height;
	int		width;
	char	empty;
	char	obst;
	char	full;
}					t_map;

int				close_it(int fd);
int				open_it(char fname);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*get_next_line(const int fd);

#endif
