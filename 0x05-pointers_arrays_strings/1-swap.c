#include "main.h"

/**
 * swap_int - Entry point
 *
 * description: a function that swaps the value of 2 ints
 *
 * @a: our first value
 *
 * @b: our second value
 *
 * Return: always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;

	*b = i;

}
