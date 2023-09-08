#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints the alphabet in lower case except q and e
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; (ch != 'q' && ch != 'e') ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
