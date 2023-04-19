#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int target, i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			target = cmp(array[i]);

			if (target > 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
