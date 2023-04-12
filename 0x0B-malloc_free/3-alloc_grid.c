#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dims
 * Each element of the grid should be initialized to 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: array
 */

int **alloc_grid(int width, int height)
{
    int **grid;
    int row, col;

    if (width < 1 || height < 1)
        return NULL;

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return NULL;

    row = 0;
    while (row < height)
    {
        grid[row] = malloc(sizeof(int) * width);
        if (grid[row] == NULL)
        {
            col = row - 1;
            while (col >= 0)
            {
                free(grid[col]);
                col--;
            }
            free(grid);
            return NULL;
        }
        row++;
    }

    row = 0;
    while (row < height)
    {
        col = 0;
        while (col < width)
        {
            grid[row][col] = 0;
            col++;
        }
        row++;
    }

    return grid;
}

