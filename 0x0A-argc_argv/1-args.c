#include <stdio.h>

/**
 * main - Entry point
 *
 * description: a program that prints the number of arguments passed into it
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
