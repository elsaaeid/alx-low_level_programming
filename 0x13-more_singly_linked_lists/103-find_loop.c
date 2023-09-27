#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *objectx, *objecty;

	objectx = objecty = head;
	while (objectx && objecty && objecty->next)
	{
		objectx = objectx->next;
		objecty = objecty->next->next;
		if (objectx == objecty)
		{
			objectx = head;
			break;
		}
	}
	if (!objectx || !objecty || !objecty->next)
		return (NULL);
	while (objectx != objecty)
	{
		objectx = objectx->next;
		objecty = objecty->next;
	}
	return (objecty);
}
