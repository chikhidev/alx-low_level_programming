#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n;

	if (!head)
		return (NULL);

	while (*head)
	{
		/* switching */
		n = (*head)->next;
		(*head)->next = p;
		p = (*head);
		(*head) = n;
	}

	(*head) = p;
	return (*head);
}
