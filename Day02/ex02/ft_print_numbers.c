/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:09:34 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 14:23:13 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char i;

	i = 47;
	while (++i < 58)
		ft_putchar(i);
}
