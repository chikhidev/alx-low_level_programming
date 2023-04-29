#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees nodes of a listint_t list
* @head: head pointer
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
