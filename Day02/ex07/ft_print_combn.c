/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:35:17 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 21:33:29 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);

void	ft_putchar(char c);

void	ft_print_buffer(int *buffer, int size)
{
	int		i;
	char	c;

	i = -1;
	while (++i < size)
	{
		c = buffer[i] + '0';
		ft_putchar(c);
	}
}

void	ft_saperate(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_buffer_init(int *buffer, int size)
{
	int i;

	i = -1;
	while (++i < size)
		buffer[i] = i;
}

void	ft_print_combn(int nb)
{
	int	buffer[nb];
	int	i;
	int	k;

	k = 0;
	ft_buffer_init(buffer, nb);
	i = 0;
	while (k < nb)
	{
		if (buffer[nb - 1 - k] < 9 - k)
		{
			ft_print_buffer(buffer, nb);
			ft_saperate();
			buffer[nb - 1 - k]++;
			while (k-- > 0)
			{
				buffer[nb - 1 - k] = buffer[nb - k - 2] + 1;
			}
			k = 0;
		}
		else
			k++;
	}
	ft_print_buffer(buffer, nb);
}
