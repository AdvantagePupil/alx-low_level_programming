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
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);

		a = a + 1;
	}

	printf("\n");

	return (0);
}
