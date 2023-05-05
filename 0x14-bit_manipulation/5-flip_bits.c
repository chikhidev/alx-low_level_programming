#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get from one number to another.
 * @n: u l int
 * @m: u l int
 * Return: u int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int inc = 0;

n = n ^ m;

while (n)
{
inc += n & 1;
n >>= 1;
}

return (inc);
}
