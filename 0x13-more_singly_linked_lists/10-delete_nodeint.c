#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index -  deletes the node at index index
* @head: pointer to pointer
* @index: index to delete
* Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *curr;

while (*head)
{
if (i == index)
{
curr = (*head);
(*head) = (*head)->next;
free(curr);
return (1);
}

i++;
head = &(*head)->next;
}

return (-1);
}
