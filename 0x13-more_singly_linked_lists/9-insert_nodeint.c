#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *cases_handle(unsigned int idx, listint_t *new_node, listint_t *temp)
{
unsigned int index = 0;

if (!temp && idx > 0)
return (NULL);

if (idx == 0)
{
new_node->next = temp;
return (new_node);
}

while (index < (idx - 1))
{
temp = temp->next;
if (!temp && idx > index + 1)
return (NULL);
index++;
}

new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: head pointer
* @idx: index
* @n: number (data)
* Return: adress of inserted
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;

if (!head)
return (NULL);

temp = *head;

new_node = malloc(sizeof(listint_t));

if (!new_node)
return (NULL);

new_node->n = n;

if (!temp && idx > 0)
return (NULL);

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

return (cases_handle(idx, new_node, temp));
}

