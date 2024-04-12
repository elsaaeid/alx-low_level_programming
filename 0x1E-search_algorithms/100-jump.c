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
	size_t step, key;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = (size_t)sqrt(size);
	key = 0;

	do {
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)key, array[key]);
		key = step;
		step += (size_t)sqrt(size);
		if (key >= size)
		{
			return (-1);
		}
	} while (array[step - 1] < value);

	printf("Value found between indexes [%lu] and [%lu]\n",
			(unsigned long)key, (unsigned long)step - 1);

	while (array[key] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)key, array[key]);
		key++;
		if (key == step || key >= size)
		{
			return (-1);
		}
	}

	if (array[key] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)key, array[key]);
		return ((int)(key));
	}
	return (-1);
}
