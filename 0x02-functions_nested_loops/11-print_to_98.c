#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * print_to_98 description: a function that prints all numbers from n to 98
 *
 * @n: the input number is integer
 *
 * Return: always 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
