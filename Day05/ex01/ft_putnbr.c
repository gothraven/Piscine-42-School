/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:42:04 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 22:10:15 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

void	ft_print_buffer(int *buffer, int b, int n)
{
	char c;

	if (b == 1)
		ft_putchar('-');
	while (--n > -1)
	{
		c = (char)buffer[n] + '0';
		ft_putchar(c);
	}
}

void	ft_putnbr(int nb)
{
	int		buffer[10];
	int		n;
	int		b;
	long	tmp;

	n = 0;
	b = 0;
	tmp = nb;
	if (tmp < 0)
	{
		b++;
		tmp = tmp * -1;
	}
	while (tmp > 0)
	{
		buffer[n] = tmp % 10;
		n++;
		tmp = tmp / 10;
	}
	if (nb == 0)
		ft_putchar('0');
	else
		ft_print_buffer(buffer, b, n);
}
