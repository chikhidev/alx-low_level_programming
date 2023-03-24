#include "main.h"

/**
* _isupper - check if the chaaracter is in uppercase
* @c: the character param
* Return: 1 if ture, else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

