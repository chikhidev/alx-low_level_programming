#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to fill with
 * Return: the array on sucess | 0 on fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size)
	{
		char *arr = malloc(sizeof(char) * size);

		if (arr)
		{
			while (i < size)
			{
				*(arr + i) = c;
				i++;
			}
			return (arr);
		}
	}
	return (NULL);
}
