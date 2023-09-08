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
	int i;

	int m;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (m = '0' ; m <= '9' ; m++)
		{
			if (i != m)
			{
			putchar(i);

			putchar(m);

			putchar(',');

			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
