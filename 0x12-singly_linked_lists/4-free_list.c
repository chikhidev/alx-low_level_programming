#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees list_t
*@head: pointer
* Return: a pointer to the new node or NULL if it failed
*/

void free_list(list_t *head)
{
list_t *start;

while (head)
{
start = head;
head = head->next;
free(start->str);
free(start);
}
}
