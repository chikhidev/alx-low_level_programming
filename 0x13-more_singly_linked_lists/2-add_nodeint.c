#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: head pointer
* @n: int data
* Return: the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (!n)
return (NULL);

new_node = (listint_t *) malloc(sizeof(listint_t));

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
