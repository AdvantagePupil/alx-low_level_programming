#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * description: a function that prints a string, followed by a new line.
 *
 * @s: pointer
 *
 * Return: always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
