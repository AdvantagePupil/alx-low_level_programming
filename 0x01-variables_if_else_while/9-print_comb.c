#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints all possible combinations of single-digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
