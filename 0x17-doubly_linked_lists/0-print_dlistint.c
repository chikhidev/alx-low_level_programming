#include "lists.h"

/**
 * print_dlistint - function that print list nodes and count them
 * @h: head pointer
 * return: counter
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		counter++;
	}

	return (counter);
}
