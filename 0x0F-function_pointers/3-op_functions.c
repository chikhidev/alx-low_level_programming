#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 *
 * @a: First integer to add
 * @b: Second integer to add
 *
 * Return: The sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: The integer to subtract from
 * @b: The integer to subtract
 *
 * Return: The result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 *
 * Return: The product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 *
 * @a: The integer to be divided
 * @b: The integer to divide by
 *
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers
 *
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

