#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - funciotn
 * @format: list
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: void
 */


void print_all(const char * const format, ...)
{
va_list vlist;
int n = 0, i = 0;
char *sep = ", ";
char *str;

va_start(vlist, format);

while (format && format[i])
i++;

while (n < i && format && format[n])
{
if (n == (i - 1))
sep = "";
switch (format[n++])
{
case 'c':
printf("%c%s", va_arg(vlist, int), sep);
break;
case 'i':
printf("%d%s", va_arg(vlist, int), sep);
break;
case 'f':
printf("%f%s", va_arg(vlist, double), sep);
break;
case 's':
str = va_arg(vlist, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, sep);
break;
}
}
printf("\n");
va_end(vlist);
}

