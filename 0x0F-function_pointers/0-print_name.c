#include "function_pointersi.h"

/**
 * print_name - function that prints string given
 * @name: pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
