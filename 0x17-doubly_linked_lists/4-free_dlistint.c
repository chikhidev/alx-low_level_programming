#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *next = NULL;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
