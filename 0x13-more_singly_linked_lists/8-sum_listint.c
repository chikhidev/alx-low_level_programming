#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
