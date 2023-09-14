#include "main.h"

/**
 * _isdigit - Entry point
 *
 * _isdigit description: checks if the input is digit
 *
 * @c: input is an integer
 *
 * Return: 1 if digit 0 if else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
