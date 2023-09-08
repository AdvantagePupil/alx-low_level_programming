#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints the alphabet lowercase except q and e
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
