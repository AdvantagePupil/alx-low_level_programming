#include "main.h"

/**
 * print_square - Entry point
 *
 * description: a function that prints a square, followed by a new line.
 *
 * @size: our input and it's integer
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
