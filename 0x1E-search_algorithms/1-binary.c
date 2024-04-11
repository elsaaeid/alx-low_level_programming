#include "search_algos.h"

/**
 * binary_search - function that finds the position of a target
 * within a sorted array using binary search algorithm.
 * @array: input array
 * @size: size of the array
 * @value: value of the searching
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int low, high, mid;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= (size_t)high; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)high)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
