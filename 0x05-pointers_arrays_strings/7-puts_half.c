#include "main.h"

/**
 * puts_half - Entry point
 *
 * description: a function that prints half a string
 *
 * @str: the string we input
 *
 * Return: half the string we input
 */

void puts_half(char *str)
{
	int full_string = 0;
	int half_string;

	while (str[full_string] != '\0')
	{
		full_string++;
	}
	half_string = full_string / 2;
	if (half_string % 1 == 0)
	{
		half_string++;
	}
	while (half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');

}
