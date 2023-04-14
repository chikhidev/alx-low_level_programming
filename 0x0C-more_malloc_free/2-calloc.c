#include "main.h"
#include <stdio.h>
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
	void *p;

	if ((nmemb || size) == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	while (counter < nmemb)
	{
		*p[counter] = 0;
		counter++;
	}

	return (p);
}

