#include "main.h"

/**
 *  _islower : print 1 if the charachter is lowercase else print 0
 *
 *  Description:  a function that checks for lowercase character 
 *  and prints 1 if they are. if else prints 0
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
