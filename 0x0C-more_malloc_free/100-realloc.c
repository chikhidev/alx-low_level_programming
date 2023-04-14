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
char *new_ptr, *temp_ptr;

if (!ptr)
return (malloc(new_size));
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);

temp_ptr = (char *)ptr;

new_ptr = malloc(sizeof(int) * new_size);
if (new_ptr == NULL)
return (NULL);

while (i < old_size)
{
*(new_ptr + i) = *(temp_ptr + i);
i++;
}
free(ptr);
return (new_ptr);
}

