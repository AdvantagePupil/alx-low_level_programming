#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print the alphabet 10 times
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	i++;
	}
}
