#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid previously
* @grid: grid given
* @height: height given
* Return: void
*/

void free_grid(int **grid, int height)
{
	int temp = 0;

	if (grid == NULL || height <= 0)
		free(grid);

	while (temp < height)
	{
		free(grid[temp]);
		temp++;
	}
	free(grid);
}
