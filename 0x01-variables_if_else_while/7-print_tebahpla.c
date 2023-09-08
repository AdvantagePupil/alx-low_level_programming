#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints the alphabet in lower case reversed
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
