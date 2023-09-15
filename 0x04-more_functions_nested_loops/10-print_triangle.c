#include "main.h"

/**
 * print_triangle - Entry point
 *
 * description: a function that prints a triangle, followed by a new line.
 *
 * @size: our input and it's integer
 *
 * Return: a triangle based on the int size
 */

void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size <= 0)

		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (n = 1; n <= i; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
