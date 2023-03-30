#include "holberton.h"
/**
 * *_strncpy - copies a string
 *
 * @dest: char to check
 * @src: char to check
 * @n: int to check
 *
 * Return: 0 is success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i = 0; i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n; i++)
		dest[i] = '\0';

	return (dest);
}
