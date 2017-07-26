/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 00:02:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 05:03:46 by szaghban         ###   ########.fr       */
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

typedef struct		s_map
{
	int		height;
	int		width;
	char	empty;
	char	obst;
	char	full;
}					t_map;

int				solve_it(char *fname);
void			map_it(t_map *map, char *str);
int				show_it(t_square *square, int *obst, t_map *map);
int				find_it(int *obst, int *t1, int *t2, t_square *square);
int				verify_it(char *str, t_map *map);
int				convert_it(int *obst, char *str, int y, t_map *map);
int				read_it(char *fname, int **obst, t_map *map);
int				close_it(int fd);
int				open_it(char *fname);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*get_next_line(const int fd);

#endif
