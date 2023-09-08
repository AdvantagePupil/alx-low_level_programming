#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints the alphabet in lower case
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for ( ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	return (0);
}
