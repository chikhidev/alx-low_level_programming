#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: bytes to reserve
 * Return:char
 */
void *malloc_checked(size_t b)
{
void *p = malloc(b);

if (p == NULL)
{
exit(98);
}
return (p);
}
