#include "search_algos.h"

/**
 * _binary_search - function that finds a value in
 * a sorted array of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @low: The starting index of the [sub]array to search.
 * @high: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	do {
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

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return ((int)(mid));
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	} while (low <= high);

	return (-1);
}


/**
 * exponential_search - function that finds a value
 * in a sorted array of integers using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			(unsigned long)low, (unsigned long)high);
	return (_binary_search(array, low, high, value));
}
