/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:28:00 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/08 22:50:11 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		s_calculat(int size);

void	s_spaces(int spaces)
{
	int i;

	i = 0;
	while (i < spaces)
	{
		ft_putchar(' ');
		i++;
	}
}

void	s_rocks(int width, int floor, int level, int size)
{
	int i;
	int door;
	
	door = (((level + 1) / 2) * 2) - 1;
	ft_putchar('/');
	i = 1;
	while (i < width - 1){
		if (level == size && i >= (width - door) / 2 && 
				i < (width + door) / 2 && 3 + level - floor <= door)
			if (door >= 5 && floor == ((level + 2) / 2) + 2 
					&& i == (width + door) / 2 - 2)
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int level;
	int floor;
	int height;
	int width;

	if (size < 1)
		return ;
	width = 1;
	height = 1;
	level = 1;
	while (level <= size)
	{
		height = level + 2;
		floor = 1;
		while (floor <= height)
		{
			width += 2;
			s_spaces(85- width / 2);
			s_rocks(width, floor, level, size);
			floor++;
		}
		level++;
		width += 4 + 2 * ((level - 2) / 2);
	}
}

int main()
{
	sastantua(1);
	return 0;
}
