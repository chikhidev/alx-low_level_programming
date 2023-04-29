#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - frees head
* @head: head pointer to pointer
* Return: head data
*/

int pop_listint(listint_t **head)
{
	int head_data = 0;
	listint_t *holder;

	if (!*head)
		return (0);

	head_data = (*head)->n;
	holder = (*head)->next;
	free(*head);
	*head = holder;
	
	return (head_data);
}
