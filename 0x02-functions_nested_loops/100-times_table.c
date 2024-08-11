#include "main.h"

/**
 * print_times_table - the function prints the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int x = 0, y, i;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			i = x * y;
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10 % 10) + '0');
				_putchar(i % 10 + '0');
			}
			else if (i > 9)
			{
				_putchar(' ');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i + '0');
			}
			else
				_putchar(i + '0');

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
