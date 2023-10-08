#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *malloc_checked - Entry point
 *
 * description: a function that allocates memory using malloc.
 *
 * @b: unsigned int
 *
 * Return: always 0 (success)
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
