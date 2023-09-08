#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints possible combinations of single-dig numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

		if (ch != 9)
		{
		putchar(',');

		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
