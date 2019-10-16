#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees 2D array
 * @grid: The grid to freed
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
if (grid == NULL)
return;
while (height > 0)
{
height--;
free(grid[height]);
}
free(grid);
}
