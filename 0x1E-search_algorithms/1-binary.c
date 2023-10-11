#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number is located 
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, right_t, left_t;

	if (array == NULL)
		return (-1);

	for (left_t = 0, right_t = size - 1; right_t >= left_t;)
	{
		printf("Searching in array: ");
		for (i = left_t; i < right_t; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left_t + (right_t - left_t) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right_t = i - 1;
		else
			left_t = i + 1;
	}
	return (-1);
}

