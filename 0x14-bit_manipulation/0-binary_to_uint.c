#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: char
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int B = 1, i = 0;
unsigned int result = 0;

if (!b)
return (0);


while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}

while (i >= 0)
{
result += ((b[i] - '0') * B);

B *= 2;
i--;
}


return (result);
}

