#include "main.h"

/**
 * reverse_array - Entry point
 *
 * description: a function that reverses the content of an array of integers
 *
 * @a: array
 *
 * @n: number of ints
 *
 * Return: the array of integers reversed
 */

void reverse_array(int *a, int n)
{
	int i;

	int x;

	int z;

	for (i = 0, x = n - 1; i < x; i++, x--)
	{
		z = a[i];
		a[i] = a[x];
		a[x] = z;
	}
}
