#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the biggining of the list
 * @head: head pointer
 * @n: number of the node
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (*head);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		return (new);
	}

	(*head)->prev = new;
	new->next = (*head);

	return (*head);
}
