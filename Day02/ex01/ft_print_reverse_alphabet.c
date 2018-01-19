/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:00:44 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 14:19:21 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 123;
	while (--i >= 97)
		ft_putchar(i);
}
