#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * Discrition: while not end of string count
 * @s: string given
 * Returns: integer of strig length
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
