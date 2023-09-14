#include "main.h"

/**
 * _isupper - Entry point
 *
 * _isupper description: a function that checks uppercase
 *
 * @c: is a char in ASCII
 *
 * Return: 1 if upper and 0 if else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
