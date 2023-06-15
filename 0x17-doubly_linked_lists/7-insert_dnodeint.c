#include "lists.h"

/**
 * insert_dnodeint_at_index - function that adds node in an index
 * @h: header pointer
 * @idx: index to push the item at
 * @n: number data
 * Return: node at
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *curr = *h, *new_node, *next;
unsigned int index = 0;

new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!new_node)
return NULL;

new_node->n = n;

if (idx == 0 || *h == NULL)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return *h;
}

while (curr && index != idx - 1)
{
curr = curr->next;
index++;
}

if (curr == NULL)
{
free(new_node);
return NULL;
}

next = curr->next;
curr->next = new_node;
new_node->prev = curr;
new_node->next = next;
if (next != NULL)
next->prev = new_node;

return *h;
}

