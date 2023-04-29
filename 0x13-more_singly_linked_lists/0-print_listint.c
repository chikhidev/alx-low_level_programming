#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		counter++;
	}
	return (counter);
}

