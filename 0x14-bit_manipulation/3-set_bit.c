#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: u long int
 * @index: u int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int size = (sizeof(unsigned long int) * 8);

if (index >= size)
return (-1);

*n ^= (1 << index);

return (1);
}
