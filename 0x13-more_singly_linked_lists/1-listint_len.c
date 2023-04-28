#include "lists.h"

/**
 * listint_len - len elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;
	const listint_t *curr = h;

	while (curr)
	{
		curr = curr->next;
		counter++;
	}

	return (counter);
}

