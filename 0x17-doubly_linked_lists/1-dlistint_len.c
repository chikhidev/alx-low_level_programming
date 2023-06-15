#include "lists.h"

/**
 * dlistint_len - function that returns elements in a linked list
 * @h: header pointer
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		curr = curr->next;
		counter++;
	}

	return (counter);
}
