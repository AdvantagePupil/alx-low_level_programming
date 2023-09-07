#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: a C program that prints the size of various types on the computer
 *
 *  Return: always 0 (success)
 */

int main (void)
{
	int i;

	char c;

	long int l;

	long long int ll;

	float f;

	printf("size of a char: %lu /n", (unsigned long)sizeof(c));

	printf("size of an int: %lu /n", (unsigned long)sizeof(i));

	printf("size of a long int: %lu /n", (unsigned long)sizeof(l));
	
	printf("size of a long long int: %lu /n", (unsigned long)sizeof(ll));

	printf("size of a float: %lu /n", (unsigned long)sizeof(f));

	return (0);
}
