#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: number int given
 * Return: factorial if not n is not 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
