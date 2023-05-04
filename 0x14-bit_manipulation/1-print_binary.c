#include "main.h"

/**
 * print_binary - decimal to binary
 * @n: int
 * Return:void
 */
void print_binary(unsigned long int n)
{
	unsigned long int c = 1;
	unsigned int i = 0;

	c <<= 63;

	if (n == 0)
		_putchar('0');

	while (c > 0)
	{
		if ((n & c) == 0 && i == 1)
			_putchar('0');

		if ((n & c))
		{
			_putchar('1');
			i = 1;
		}

		c = c >> 1;

	}
}
