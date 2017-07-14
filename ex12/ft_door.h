/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:54:49 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 14:06:19 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
#define FT_DOOR_H

#include <unistd.h>

#define OPEN 1
#define CLOSE 0

typedef struct door {
	int state;
} t_door;

#endif
