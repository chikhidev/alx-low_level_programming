#include "function_pointersi.h"

/**
 * print_name - function that prints string given
 * @name: pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(f)(name);
}
