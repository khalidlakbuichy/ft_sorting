/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:23:05 by khalid            #+#    #+#             */
/*   Updated: 2024/02/06 09:50:17 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	selection_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	min_index;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_index])
				min_index = j;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[min_index];
		tab[min_index] = tmp;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	tab[] = {0, 0, 0, -1};
	int	size;

	size = sizeof(tab) / sizeof(int);
	selection_sort(tab, size);
	for (int i = 0; i < size; i++)
		printf("%d\t", tab[i]);
	printf("\n");
}
