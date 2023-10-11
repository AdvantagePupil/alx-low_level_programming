#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * description: executes a function given as a parameter on each element of an array
 *
 * @array: array
 *
 * @size: size
 *
 * @action: pointer
 *
 * Retur: always 0 (success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
