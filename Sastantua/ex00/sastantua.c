/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:28:00 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/09 02:13:30 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sastantua(int size);

void	ft_putchar(char c);

int		delta_finder(int size)
{
	int level;
	int delta;
	int level_base;

	level = 1;
	delta = 1;
	level_base = 4;
	while (level <= size)
	{
		delta += 2 * (2 + level);
		level++;
		delta += level_base;
		if (level % 2 && level < size)
			level_base += 2;
	}
	delta -= level_base;
	return (delta);
}

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
	while (i < width - 1)
	{
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
	int delta;

	if (size < 1)
		return ;
	width = 1;
	level = 1;
	delta = delta_finder(size);
	while (level <= size)
	{
		height = level + 2;
		floor = 1;
		while (floor <= height)
		{
			width += 2;
			s_spaces((delta - width) / 2);
			s_rocks(width, floor, level, size);
			floor++;
		}
		level++;
		width += 4 + 2 * ((level - 2) / 2);
	}
}
