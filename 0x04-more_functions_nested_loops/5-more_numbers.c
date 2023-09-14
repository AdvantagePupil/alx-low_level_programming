#include "main.h"

/**
 * more_numbers - Entry point
 *
 * more_numbers Description: prints the numbers from 0 to 14 10 times
 * 
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar ('1');
			_putchar (n % 10 + '0');
		}
		_putchar('\n');
	}
}
