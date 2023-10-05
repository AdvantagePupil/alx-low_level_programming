#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Entry point
 *
 * description: a function that frees a 2 dimensional grid previously created
 *
 * @grid: grid
 *
 * @height: int
 *
 * Return: always 0 (success)
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
