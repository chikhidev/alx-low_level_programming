#include "main.h"

/**
* print_line - prints underscores a number of times
* @n: an int given by main
*
* Return: void. no return.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
