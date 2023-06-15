#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *curr = head;
	
	while (curr)
	{
		if (counter == index)
			return (curr);
		curr = curr->next;
		counter++;
	}
	return (curr);
}
