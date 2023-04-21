#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of variables
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int i = 0, sum = 0;

if (n == 0)
return (0);

va_start(valist, n);

while (i < n)
{
sum += va_arg(valist, const unsigned int);
i++;
}

va_end(valist);

return (sum);
}

