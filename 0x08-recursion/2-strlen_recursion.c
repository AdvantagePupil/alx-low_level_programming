#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * description: a function that returns the length of a string.
 *
 * @s: pointer
 *
 * Return: always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
