#include "main.h"

/**
 * _islower - Entry point
 *
 * _islower description: a function that checks for lowercase character.
 *
 * Return: 1 if lower case and 0 if else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
