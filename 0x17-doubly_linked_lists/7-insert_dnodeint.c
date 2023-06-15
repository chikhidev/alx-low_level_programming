#include "lists.h"

/**
 * insert_dnodeint_at_index - function that adds node in an index
 * @h: header pointer
 * @idx: index to push the item at
 * @n: number data
 * Return: node at
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new_node, *next;
	unsigned int index = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (*h);
	
	new_node->n = n;

	if (idx == 0 || *h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}

	while (curr && index != idx)
	{
		curr = curr->next;
		index++;
	}
	curr = curr->prev;
	/* after this the current node will be at the position*/

	next = curr->next;
	curr->next = new_node;
	new_node->prev = curr;
	new_node->next = next;
	next->prev = new_node;

	return (*h);
}
