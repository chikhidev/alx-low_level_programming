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
va_list vlist;
unsigned int i = 0;

va_start(vlist, n);

while (i < n)
{
printf("%d", va_arg(vlist, int));
if (i != (n - 1) && separator)
printf("%s", separator);

i++;
}

printf("\n");
va_end(valist);
}

