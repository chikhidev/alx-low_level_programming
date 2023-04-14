#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function like realloc
 * @ptr: old pointer
 * @old_size: old pointer size
 * @new_size: new pointer size
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i = 0;
char *new;

if (!ptr)
return (malloc(new_size));
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

new = malloc(new_size);

if (new == NULL)
return (NULL);

while (i < old_size && i < new_size)
{
new[i] = ((char *) ptr)[i];
i++;
}

free(ptr);
return (new);
}

