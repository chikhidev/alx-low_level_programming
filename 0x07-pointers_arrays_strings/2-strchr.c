#include "main.h"

/**
* _strchr- a function find char
* @s: string given
* @c: char to look for
*
* Return: returns a pointer to the first occurance
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (s + i);
}
