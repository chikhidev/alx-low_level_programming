#include "main.h"

/**
* _print_rev_recursion -  function that prints a string in reverse.
* @s: string given
* Returns nothing
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
s++;
_print_rev_recursion(s);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
