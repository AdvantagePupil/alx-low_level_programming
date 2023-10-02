#include "main.h"

/**
 * _isalpha - Entry point
 *
 * _isalpha description: a function that checks for alphabetic character
 *
 * @c: the ch is in ASCII code
 *
 * Return: 1 if the cha is alphabet and 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
