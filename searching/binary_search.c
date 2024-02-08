/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:33:24 by khalid            #+#    #+#             */
/*   Updated: 2024/02/08 10:14:05 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_search.h"

bool	binary_search_helper(int *arr, int low, int high, int item)
{
	int	mid;

	mid = (low + high) / 2;
	if ((low > high))
		return (false);
	if (item == arr[mid])
		return (true);
	if (item < arr[mid])
		return (binary_search_helper(arr, low, (mid - 1), item));
	else
		return (binary_search_helper(arr, (mid + 1), high, item));
}
bool	binary_search(int *arr, int size, int item)
{
	return (binary_search_helper(arr, 0, (size - 1), item));
}

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t n = sizeof(array) / sizeof(array[0]);
	print_array(array, n);
	printf("bool: %d\n", binary_search(array, n, 8));
}