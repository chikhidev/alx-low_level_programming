#include "main.h"

/**
 * is_prime - function that check if there's any other deviser
 *
 * @n: the number given
 * @counter: that countes from 2 to the number
 * Return: 1 on success
 */

int is_prime(int n, int counter) {
if (n == counter)
{
return (1);
}
else if (n % counter == 0)
{
return (0);
}
else
{
return (is_prime(n, counter + 1));
}
}

/**
 * is_prime_number - function that returns if number is prime
 *
 * @n: number given
 * Return: 1 on sucess
 */

int is_prime_number(int n) {
if (n <= 1)
{
return (0);
}
else
{
return is_prime(n, 2);
}
}
