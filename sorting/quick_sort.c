/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:40:50 by khalid            #+#    #+#             */
/*   Updated: 2024/02/07 12:25:10 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

int partitioning(int *arr, int start_index, int end_index)
{
    int i = start_index - 1;
    int pivot = arr[end_index];
    
    for (int j = start_index; j <= end_index - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            ft_swap(&arr[i], &arr[j]);
        }
    }
    ft_swap(&arr[i + 1], &arr[end_index]);
    return (i + 1);
}

void	quick_sort(int *arr, int start, int end)
{
	int	pivot_index;

	pivot_index = partitioning(arr, start, end);
	quick_sort(arr, start, (pivot_index - 1));
	quick_sort(arr, (pivot_index + 1), end);
}

int	main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);
    print_array(array, n);
    quick_sort(array, );
}
