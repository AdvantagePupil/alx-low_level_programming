#include "main.h"

/**
 * _puts - Entry point
 *
 * description: a function that prints a string
 *
 * @str: the string to be printed
 *
 * Return: the string we want to be printed
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
