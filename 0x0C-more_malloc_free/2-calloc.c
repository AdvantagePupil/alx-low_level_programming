#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_calloc - Entry point
 *
 * description: a function that allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 *
 * @size: unsigned int
 *
 * Return: always 0 (success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;

	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	i = malloc(nmemb * size);

	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		i[j] = 0;
	}
	return (i);
}
