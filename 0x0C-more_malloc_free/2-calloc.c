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
	void *p;

	if ((nmemb || size) == 0)
		return (NULL);
	p = calloc(nmemb, size);
	if (!p)
		return (NULL);
	return (p);
}

