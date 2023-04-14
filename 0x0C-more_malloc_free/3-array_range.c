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
int i = 0;
int *p;
    
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (!p)
return (NULL);
while ((i + min) <= max)
{
*(p + i) = i + min;
i++;
}
return (p);
}

