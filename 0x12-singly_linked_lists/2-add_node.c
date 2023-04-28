#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: head
* @str: string
* Return: new_node pointer
*/


list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int n = 0;

if (!str)
return (NULL);


new_node = malloc(sizeof(list_t));

if (!new_node)
return (NULL);


new_node->str = strdup(str);

if (!new_node->str)
{
free(new_node);
return (NULL);
}

while (new_node->str[n])
n++;

new_node->len = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
