#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @p: pointer to the string to be converted
*
* Return: pointer to the resulting string
*/

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] -= 32;
		i++;
	}
	return (p);
}
