#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_realloc - Entry point
 *
 * description: function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 *
 * @old_size: unsigned int
 *
 * @new_size: unsigned int
 *
 * Return: always 0 (success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	unsigned int i, j;

	char *pp = ptr;

	j = new_size;

	p = malloc(new_size);

	if (ptr == NULL)
	{
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		j = old_size;
	}
	for (i = 0; i < j; i++)
	{
		p[i] = pp[i];
	}
	free(ptr);
	return (p);
}
