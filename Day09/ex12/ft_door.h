/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:54:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 16:56:13 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define OPEN 1
# define CLOSE 0

typedef struct	s_door
{
	int			state;
}				t_door;

void	ft_putstr(char *str);
void	open_door(t_door *door);
int		close_door(t_door *door);
int		is_door_open(t_door *door);
int		is_door_close(t_door *door);

#endif
