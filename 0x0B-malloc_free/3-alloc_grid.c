#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dims
 * Each element of the grid should be initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j = 0;

	arr = (int **)malloc(height * sizeof(int) + 1);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);
	if (arr)
	{
		while (i < height)
		{
			arr[i] = malloc(width * sizeof(int) + 1);
			if (arr[i] == NULL)
				return (NULL);
			j = 0;
			while (j < width)
			{
				arr[i][j] = 0;
				j++;
			}
			i++;
		}
		return (arr);
	}
	return (NULL);
}
