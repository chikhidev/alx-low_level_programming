#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at end of a listint_t list
* @head: head pointer
* @n: int data
* Return: the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *curr;

if (!n)
return (NULL);

new_node = (listint_t *) malloc(sizeof(listint_t));

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;


if (!*head)
*head = new_node;
else
{
curr = *head;
while (curr->next)
{
curr = curr->next;
}
curr->next = new_node;
}

return (new_node);
}
