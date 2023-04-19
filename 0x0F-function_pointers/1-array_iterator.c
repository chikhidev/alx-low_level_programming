#include "function_pointers.h"

/**
 * array_iterator - function calls a function each element
 * @array: array given pinter
 * @size: size of array
 * @action: action to call
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i = 0;

	if (array && size && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}

