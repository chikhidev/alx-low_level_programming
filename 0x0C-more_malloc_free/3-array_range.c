#include "main.h"
#include <stdlib.h>

/**
 * array_range - fujnction returns array range
 * @min: int to start
 * @max: int to end
 * Return: array pointer
 */

int *array_range(int min, int max)
{
int i = min;
if (min > max)
return (NULL);
int *p = malloc(sizeof(int) * (max - min));
if (!p)
return (NULL);
while (i <= max)
{
*(p + i) = i;
i++;
}
return (p);
}
