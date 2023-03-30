#include "main.h"

/**
* _srtcat - char function returns concat of two strings
* @dest: first array of chars param
* @src: second param
*
* Return: char (dest)
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while ( dest[i] != '\0' )
	{
		i++;
	}
 	
	while ( src[j] != '\0' )
       	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
