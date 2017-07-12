/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:20:03 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/12 15:06:50 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int a, int b)
{
	int temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

int		partition(int *tab, int start, int end)
{
	int i;
	int j;
	int pivot;

	i = start - 1;
	pivot = tab[end];
	j = start;
	while (j <= end - 1)
	{
		if (tab[j] <= pivot)
		{
			i++;
			swap(tab, i, j);
		}
		j++;
	}
	swap(tab, i + 1, end);
	return (i + 1);
}

void	quicksort(int *tab, int start, int end)
{
	int		pivot;

	if (start < end)
	{
		pivot = partition(tab, start, end);
		quicksort(tab, start, pivot - 1);
		quicksort(tab, pivot + 1, end);
	}
}

void	ft_sort_integer_table(int *tab, int size)
{
	quicksort(tab, 0, size - 1);
}
