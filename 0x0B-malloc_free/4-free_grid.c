#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
for (height = height - 1; height >= 0; height--)
{
free(*(grid + height));
}
free(grid);
}
