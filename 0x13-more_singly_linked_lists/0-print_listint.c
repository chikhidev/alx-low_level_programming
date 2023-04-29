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

	while (curr)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

