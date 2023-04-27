#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
size_t nodes = 0;

while (h)
{
if (!h->str)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);

nodes++;
h = h->next;
}

return (nodes);
}


