#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: bytes to reserve
 * Return:char
 */

void *malloc_checked(unsigned int b)
{
	int *temp;

	temp = malloc(b);
	if (!temp)
		exit(98);
	return (temp);
}
