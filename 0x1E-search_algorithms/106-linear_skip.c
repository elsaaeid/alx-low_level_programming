#include "search_algos.h"

/**
 * linear_skip: function that finds a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;
	size_t index;

	if (list == NULL)
		return (NULL);

	current = list;
	express = list->express;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
			break;
		current = express;
        	express = express->express;
	}

	if (express == NULL)
	{
		index = current->index;
		while (current->next != NULL)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n", index, current->index);
	}
	else
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);
	}

	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
