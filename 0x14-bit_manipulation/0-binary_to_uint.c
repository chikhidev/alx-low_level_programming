#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, base = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		if (b[len++] != '0' && b[len - 1] != '1')
			return (0);

	while (--len >= 0)
		if (b[len] == '1')
			result += base, base *= 2;

	return (result);
}

