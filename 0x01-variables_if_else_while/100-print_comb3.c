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
	int i = 0;

	int m;

	m = i + 1;

	for (int i = '0' ; i <= '9' ; i++)
	{
		for (int m = i + 1 ; m <= '9' ; m++)
		{
		putchar(i);

		putchar(m);

			if (i != '8' && m != '9')
			{
			putchar(',');

			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
