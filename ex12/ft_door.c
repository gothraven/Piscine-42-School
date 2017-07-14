/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:54:46 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 14:06:29 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str) {
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str, i);
		i++;
	}
}

void	open_door(t_door *door)
{
	door->state = OPEN;
}

bool	close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

void	is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

bool	ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
