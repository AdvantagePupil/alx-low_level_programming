#include <stdio.h>

/**
 * main - prints the sum
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j, n, next, sum;

	j = 1;
	n = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + n;
		j = n;
		n = next;
	}

	printf("%lu\n", sum);

	return (0);
}
