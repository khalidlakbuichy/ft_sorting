/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:57:21 by khalid            #+#    #+#             */
/*   Updated: 2024/02/07 09:53:21 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	insertion_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		print_array(tab, size);
		while ((j > 0) && (tab[j] < tab[j - 1]))
		{
			ft_swap(&tab[j], &tab[j - 1]);
			j--;
			print_array(tab, size);
		}
		i++;
	}
}

void	tri_insertion(int tab[], int taille)
{
	for (int i = 1; i < taille; i++)
	{
		int tmp = tab[i];
		j = i - 1;
		while (j >= 0 && (tmp < tab[j]))
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = tmp;
	}
}