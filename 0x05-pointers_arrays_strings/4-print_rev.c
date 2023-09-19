#include "main.h"

/**
 * print_rev - Entry point
 *
 * description: a function that prints a string, in reverse
 *
 * @s: is the string we wat to pring in reverse
 *
 * Return: the string reversed
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
