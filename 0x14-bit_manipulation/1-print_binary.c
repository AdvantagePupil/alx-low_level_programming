#include "main.h"

/**
 * print_binary - Entry point
 *
 * description: function that prints the binary representation of a number
 *
 * @n: unsigned int
 *
 * Return: the binary repres of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i > 0)
	{
		if ((n & i) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
