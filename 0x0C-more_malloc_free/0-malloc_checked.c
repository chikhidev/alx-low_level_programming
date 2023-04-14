#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: bytes to reserve
 * Return:char
 */

void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}
