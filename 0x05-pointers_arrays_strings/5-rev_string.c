#include "main.h"

/**
 * rev_string - Entry point
 *
 * description: a function that rev a string
 *
 * @s: the string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i, n;

	char temp;

	for (i = 0; s[i] != 0; ++i)
		;
	for (n = 0; n < i / 2; n++)
	{
		temp = s[n];

		s[n] = s[i - 1 - n];

		s[i - 1 - n] = temp;
	}
}
