#include "main.h"

/**
* print_numbers - prints 0-9 with a new line
* Return: void. no return.
*/

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
