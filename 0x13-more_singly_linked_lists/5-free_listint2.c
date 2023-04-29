#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees nodes of a listint_t list
* @head: head pointer to pointer
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *_HEAD;

	if (!head)
		return;

	_HEAD = *head;

	while (_HEAD)
	{
		_HEAD = _HEAD->next;
		free(*head);
		*head = _HEAD;
	}

	*head = NULL;
}
