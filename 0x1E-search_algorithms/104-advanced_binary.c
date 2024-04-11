#include "search_algos.h"

/**
 * recursive_binary_search - function that finds a value in an array of
 * integers using the Binary search algorithm.
 * @array: input array
 * @low: The starting index of the [sub]array to search.
 * @high: The ending index of the [sub]array to search.
 * @value: value to search in
 * Return: index of the number
 */

int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; ++i)
	{
		printf("%d", array[i]);
		if (i != high)
		{
			printf(", ");
		}
	}
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
		{
			return ((int)(mid));
		}
		else
		{
			return (recursive_binary_search(array, low, mid, value));
		}
	}
	else if (array[mid] < value)
	{
		return (recursive_binary_search(array, mid + 1, high, value));
	}
	else
	{
		return (recursive_binary_search(array, low, mid - 1, value));
	}
}

/**
 * advanced_binary - function that calls to recursive_binary_search
 * function to return an index of the value
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (recursive_binary_search(array, 0, size - 1, value));
}
