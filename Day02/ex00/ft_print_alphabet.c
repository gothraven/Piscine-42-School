/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:44:52 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/06 14:14:34 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char i;

	i = 96;
	while (++i <= 122)
		ft_putchar(i);
}
