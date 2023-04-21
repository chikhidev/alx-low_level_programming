#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator
 * @n: number elms
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int runner = 0;

	va_start(valist, n);

	while (runner < n)
	{
		/* print the numbers iterated for va_arg */
		printf("%d", va_arg(valist, int));
		if (runner != (n - 1) && separator)
		{
			printf("%s", separator);
		}
		runner++;
	}
	printf("\n");
	va_end(valist);
}

