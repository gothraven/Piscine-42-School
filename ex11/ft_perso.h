/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:40:47 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 13:52:46 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PERSP_H
#define FT_PERSP_H

#include <string.h>

#define SAVE_AUSTIN_POWERS "SAVE_AUSTIN_POWERS"

typedef struct perso {
	char *name;
	float life;
	int age;
	char *profession;
} t_perso;

#endif
