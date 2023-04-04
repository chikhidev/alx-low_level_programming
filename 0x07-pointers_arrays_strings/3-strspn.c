#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @accept: pointer to get the bytes
 * @s: pointer to string char type
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b = 0;

	for (; s[a]; a++)
	{
		for (; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}

	return (a);
}
