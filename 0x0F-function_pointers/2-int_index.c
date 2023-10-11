#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * description: a function that searches for an integer.
 *
 * @array: array
 *
 * @size: size
 *
 * @cmp: pointer
 *
 * Return: always 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (1);
		}
	}
	return (-1);
}
