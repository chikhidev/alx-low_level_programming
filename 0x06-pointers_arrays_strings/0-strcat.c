#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 *
 * @dest: char to check
 * @src: char to check
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
       	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
