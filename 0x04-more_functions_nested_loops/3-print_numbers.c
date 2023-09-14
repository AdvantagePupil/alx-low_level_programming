#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: a function that prints numbers 0 to 9
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
