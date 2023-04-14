#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that reserves space for array
 * @nmemb: size of array
 * @size: size of each elemnt
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int counter = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (counter < (nmemb * size))
	{
		*(p + counter) = 0;
		counter++;
	}

	return (p);
}

