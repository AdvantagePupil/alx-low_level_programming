#include <stdio.h>

/**
 * main - Entry point
 *
 * description:  a program that prints all arguments it receives
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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
