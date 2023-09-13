#include "main.h"

/**
 *  _islower.c - Entry Point
 *
 *  Description: a function that checks for lowercase character.
 *
 *  @c: the char is in ASCII code
 *
 *  Return: 1 if lower case and 0 if else
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
