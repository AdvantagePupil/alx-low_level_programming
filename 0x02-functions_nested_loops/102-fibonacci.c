#include <stdio.h>

/**
 * main - main block
 * Description: this prints the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int n;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		n = j;
		j += i;
		i = n;
		count++;
	}

	return (0);
}
