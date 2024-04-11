#include "search_algos.h"

/**
 * interpolation_search: function that finds a key in an array 
 * that has been ordered by numerical values assigned to the 
 * keys (key values) using the Interpolation search algorithm.
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value) {
	size_t low, high, key;

	if (array == NULL) {
		return -1;
	}

	low = 0;
	high = size - 1;

	do {
		key = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)key, array[key]);

        	if (array[key] == value) {
            		return (int)key;
		}
		else if (array[key] < value) {
			low = key + 1;
		}
		else {
			high = key - 1;
		}
	} while (low <= high && value >= array[low] && value <= array[high]);

	printf("Value checked array[%lu] is out of range\n", (unsigned long)high);
	return -1;
}
