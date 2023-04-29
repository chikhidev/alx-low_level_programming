#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: pointer
 * @index: idnex
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		head = head->next;

		if (!head)
			return (NULL);

		i++;
	}

	return (head);
}
