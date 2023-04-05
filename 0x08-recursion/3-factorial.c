#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: number int given
 * Return: factorial if not n is not 0 and 1 otherwise gives 1 if negative gives -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1);
	}
	else
	{
		return (-1);
	}
}
