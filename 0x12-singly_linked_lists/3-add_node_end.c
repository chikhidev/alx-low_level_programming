#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to list_t
* @str: pointer to the first node in list_t
* Return: a pointer to the new node or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tail = NULL;
size_t len;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

len = strlen(str);
new_node->len = len;
new_node->next = NULL;

if (!*head)
*head = new_node;
else
{
tail = *head;
while (tail->next)
tail = tail->next;
tail->next = new_node;
}

return (new_node);
}

