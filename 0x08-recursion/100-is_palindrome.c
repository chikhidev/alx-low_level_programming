#include "main.h"

/**
 * length - takes length of the string
 * @c: caracter given
 * @len: length counter
 *
 * Return: 1 if success
 */

int length(char *c, int len)
{
	if (*c == 0)
		return (len - 1);
	return (length(c + 1, len + 1));
}

/**
 * compare - compares char with char in reverse
 * @c: char given
 * @len: length counter
 *
 * Return: 1 in success
 */

int compare(char *c, int len)
{
	if (*c != c[len])
		return (0);
	else if (*c == 0)
		return (1);
	return (compare(c + 1, len - 2));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 * @s: string given
 * Return: 1 if success
 */

int is_palindrome(char *s)
{
	int len;
	len = length(s, 0);
	return (compare(s, len));
}
