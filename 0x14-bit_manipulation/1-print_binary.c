#include "main.h"

/**
 * print_binary - Entry point
 *
 * description: function that prints the binary representation of a number
 *
 * @n: number
 *
 * Return: always 0 (success)
 */

void print_binary(unsigned long int n)
{
	int i;

	int j;

	i = sizeof(n) * 8;

	j = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
	{
		_putchar('0');
	}
}
