#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * description: a function that prints the sum of the two diagonals
 *
 * @a: int
 *
 * @size: size of array
 *
 * Return: he sum of the two diagonals
 */

void print_diagsums(int *a, int size)
{
	int i;

	int j;

	int n;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		n += a[size - i - 1];
		a += size;
	}
	printf("%d, ", j);
	printf("%d\n", n);
}
