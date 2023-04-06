#include "main.h"

/**
 * equelizer - function that checks the square root
 * @n: number given
 * @x: checker
 *
 * Return: x if success
 */

int equelizer(int n, int x)
{
    if (x * x == n)
        return (x);
    else if (x * x > n)
        return (-1);
    return (equelizer(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns the natural squar root
 *
 * @n: number given
 * Return: equelizer function
 */

int _sqrt_recursion(int n)
{
    return equelizer(n, 1);
}

