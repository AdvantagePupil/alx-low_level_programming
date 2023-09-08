#include <stdio.h>

/**
 * main - entry point
 *
 * description: a c program that prints all single digit numbers of base 10
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);

	}

	putchar('\n');

	return (0);
}
