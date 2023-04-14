#include "main.h"
#include <stlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: bytes to reserve
 * Return:char
 */

void *malloc_checked(unsigned int b)
{
	void *temp = malloc(b);

	if (temp == NULL)
		return (exit(98));
	return (temp);
}
