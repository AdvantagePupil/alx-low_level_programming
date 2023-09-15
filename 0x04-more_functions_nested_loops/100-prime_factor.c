#include <stdio.h>

/**
 * main - Entry point
 *
 * description: a that finds largest prime factor of the number 612852475143
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int j = 612852475143;

	for (i = 3; i < 782849; i++)
	{
		while ((j % i == 0) && (j != i))
		{
			j = j / i;
		}
	}
	printf("%lu\n", j);
	return (0);
}
