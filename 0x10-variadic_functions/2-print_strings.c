#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator
 * @n: number of elms
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
char *s, *p;
unsigned int i = 0;
va_list vlist;

if (separator == NULL || *separator == 0)
s = "";
else
s = (char *) separator;

va_start(vlist, n);

if (n > 0)
{
printf("%s", va_arg(vlist, char *));
i++;
while (i < n)
{
p = va_arg(vlist, char*);
if (p == NULL)
p = "(nil)";
printf("%s%s", s, p);
i++;
}
}
printf("\n");

va_end(vlist);
}

