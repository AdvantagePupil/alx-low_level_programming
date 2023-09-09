#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible different combinations of two digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i = '0';

	int m;

	m = i + 1;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (m = i + 1 ; m <= '9' ; m++)
		{
		putchar(i);

		putchar(m);


		putchar(',');

		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
