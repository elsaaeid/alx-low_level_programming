#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that finds the exact position of the search key
 * in an array using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)

		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);

		if (step >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
