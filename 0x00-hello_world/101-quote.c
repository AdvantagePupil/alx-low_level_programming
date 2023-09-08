#include <stdio.h>

/**
 *  main - entry point
 *
 *  Description: A C program that prints a string without using printf or puts
 *
 * Return: always 1 (success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fputs(str, stderr);

	return (1);
}
