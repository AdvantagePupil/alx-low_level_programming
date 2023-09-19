#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 *
 * description: a function that prints n elements of an array of integers
 *
 * @a: is a pointer
 *
 * @n: is the number of elements
 *
 * Return: the number of elements of an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
