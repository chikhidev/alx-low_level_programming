#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the biggining of the list
 * @head: head pointer
 * @n: number of the node
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (*head);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
		*head = new_node;
	}

	return (*head);
}
