#include "main.h"

/**
 * print_sign - Entry point
 *
 * print_sign description: a function that returns 1 if int is more than 0
 *
 * @n : the input number is integer
 *
 * Return: 1 if more than zero 0 if zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
