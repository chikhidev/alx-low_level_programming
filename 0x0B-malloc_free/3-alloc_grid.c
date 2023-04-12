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
int **arr, i = 0;
arr = (int **)malloc(height * sizeof(int) + 1);
if (arr && width && height)
{
while (i < height)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
return (NULL);
i++;
}
return (arr);
}
return (NULL);
}
