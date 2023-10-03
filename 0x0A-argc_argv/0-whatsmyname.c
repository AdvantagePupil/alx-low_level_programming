#include <stdio.h>

/**
 * main - Entry point
 *
 * description: a program that prints its name, followed by a new line.
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
