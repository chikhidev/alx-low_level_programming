#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: u l int
 * @index: u int
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n &= ~(1 << index);

return (1);
}
