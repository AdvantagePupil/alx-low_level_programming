#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: a program that adds positive numbers.
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	char *j;

	while (--argc)
	{
		for (j = argv[argc]; *j; j++)
		{
			if (*j < '0' || *j > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);
}
