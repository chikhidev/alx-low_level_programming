#include "main.h"

/**
 * get_bit - value of a bit at a given index.
 * @n: long int
 * @index: int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;

if (index > 64)
return (-1);

bit = n >> index;

return (bit & 0x1);
}
