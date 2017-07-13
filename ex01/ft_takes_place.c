/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 20:10:29 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/13 21:45:19 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int h;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	h = hour;
	if (hour > 12)
		h = hour % 12;
	else if (hour == 0)
		h = 12;
	if (hour < 11)
		printf("%.2d.00 A.M AND %.2d.00 A.M\n", h, ((h + 1) % 12));
	else if (hour == 11)
		printf("11:00 A.M AND 12:00 P.M\n");
	else if (hour == 23)
		printf("11:00 P.M AND 12:00 A.M\n");
	else if (hour == 24)
		printf("12:00 A.M AND 01:00 A.M\n");
	else
		printf("%.2d:00 P.M AND %.2d:00 P.M\n", h, ((h + 1) % 12));
}
