#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * **alloc_grid - Entry point
 *
 * description: returns a pointer to a 2 dimensional array of integers
 *
 * @width: int
 *
 * @height: int
 *
 * Return: always 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int **n;

	n = malloc(sizeof(*n) * height);

	if (width <= 0 || height <= 0 || n == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(*n) * width);

		if (n[i] == NULL)
		{
			free(n);
			for (j = 0; j <= height; j++)
			{
				free(n[j]);
			}
			return (NULL);
		}
		for (j = 0; j <= width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
