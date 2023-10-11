#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = 0;
	int i = 0;
	int sqrt_size = 0;

	if (array == NULL || array[0] > value)
		return (-1);
	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		sqrt_size = sqrt(size);
		end += sqrt_size;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end > (int)size - 1)
		end = size - 1;
	for (i = start; i <= end && array[i] <= value ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
