#include "lists.h"

/**
 * add_dnodeint_end - functions adds node at the end of the list
 * @head: head pointer
 * @n: number int data
 * Return: head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head, *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (*head);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (curr->next)
		curr = curr->next;
	/* after this curr is the last one (at least for now)*/
	curr->next = new_node;
	new_node->prev = curr;

	return (*head);
}
