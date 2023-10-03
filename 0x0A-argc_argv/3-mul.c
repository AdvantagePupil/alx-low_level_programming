#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description:  a program that multiplies two numbers.
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
