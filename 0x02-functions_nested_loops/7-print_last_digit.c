#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * print_last_digit description: a function that prints the last digit
 *
 * Return: calue of the last digit
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
		_putchar(last_digit);
		return (last_digit);
}
