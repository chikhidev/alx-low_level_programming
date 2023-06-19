#include "main.h"

/**
 * *_strncat - appends the src string to the dest string
 *
 * @dest: char to check
 * @src: char to check
 * @n: int limiter for the src
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
