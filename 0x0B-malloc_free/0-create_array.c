#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array - Entry point
 *
 * description: a function that creates an array of chars
 *
 * @c: char
 *
 * @size: size of array
 *
 * Return: always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr  == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
