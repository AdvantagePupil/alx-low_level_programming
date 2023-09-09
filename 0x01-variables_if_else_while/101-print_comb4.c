#include <stdio.h>

/**
 * main -entry point
 *
 * description: a program that prints all possible three digits combinations
 *
 * return: always 0 (success)
 */

int main(void)
{
	int i = '0';

	int m;

	int n;

	m = i + 1;

	n = m + 1;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (m = i + 1 ; m <= '9' ; m++)
		{
			for (n = m + 1 ; n <= '9' ; n++)
			{
			putchar(i);

			putchar(m);

			putchar(n);

				if (i != '7' || m != '8' || n != '9')
				{
					putchar(',');

					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
