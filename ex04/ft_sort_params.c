/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:55:03 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/13 13:39:04 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (!s1[i] && !s2[i])
		return (0);
	else
		return ((int)(s1[i] - s2[i]));
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		if (argv[i + 1] && ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = swap;
			i = 1;
		}
		else
			i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
