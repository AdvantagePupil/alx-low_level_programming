#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *array_range - Entry point
 *
 * description: a function that creates an array of integers.
 *
 * @min: minimum
 *
 * @max: maximum
 *
 * Return: always 0 (success)
 */

int *array_range(int min, int max)
{
	int *i;

	int j, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	i = malloc(sizeof(int) * size);

	if (i == 0)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		i[j] = min++;
	}
	return (i);
}
