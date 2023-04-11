#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string given
 * Return: pinter of string
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *temp;

	if (str)
	{
		while (*(str + i))
		{
			i++;
		}
		temp = malloc(i * sizeof(char) + 1);

		if (temp)
		{
			while (j < i)
			{
				*(temp + j) = *(str + j);
				j++;
			}

			return (temp);
		}
	}
	return (NULL);
}
